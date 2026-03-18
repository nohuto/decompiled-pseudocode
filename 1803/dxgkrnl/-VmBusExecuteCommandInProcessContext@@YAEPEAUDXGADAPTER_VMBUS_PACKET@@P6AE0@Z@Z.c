/*
 * XREFs of ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C017F324
 * Callers:
 *     ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C0180D80 (-VmBusProcessPacket@@YAXPEAX@Z.c)
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001D44 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0028BF8 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 */

char __fastcall VmBusExecuteCommandInProcessContext(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 (__fastcall *a2)(struct DXGADAPTER_VMBUS_PACKET *))
{
  __int64 v2; // rbx
  _DWORD *v4; // rdi
  __int64 v6; // rcx
  char v7; // r14
  BOOLEAN v8; // bp
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // ecx
  struct _EX_RUNDOWN_REF *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v21[24]; // [rsp+28h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v2 = *((_QWORD *)a1 + 7);
  v4 = (_DWORD *)*((_QWORD *)a1 + 9);
  KeStackAttachProcess(*(PRKPROCESS *)(v2 + 56), &ApcState);
  v7 = 0;
  v8 = 0;
  if ( v4[2] )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v21, (struct _KTHREAD **)v2);
    v9 = (v4[2] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v9 < *(_DWORD *)(v2 + 248) )
    {
      v10 = *(_QWORD *)(v2 + 232);
      v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
      if ( ((v4[2] >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60)
        && (v11 & 0x2000) == 0
        && (v11 & 0x1F) == 0xC )
      {
        v12 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * (unsigned int)v9);
        if ( !v12 )
          goto LABEL_10;
        v8 = ExAcquireRundownProtection(v12 + 25);
        if ( v8 )
          goto LABEL_10;
        v14 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v14 + 24) = (unsigned int)v4[2];
        *(_QWORD *)(v14 + 32) = 167LL;
        WdLogEvent5_WdError(v14);
      }
    }
    v12 = 0LL;
LABEL_10:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    goto LABEL_15;
  }
  if ( v4[3] )
    goto LABEL_21;
  v15 = v4[4];
  if ( v15 != 49 && v15 != 8 )
    goto LABEL_21;
  v12 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)a1 + 7);
LABEL_15:
  if ( !v12 )
  {
LABEL_21:
    v18 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v18 + 24) = (unsigned int)v4[2];
    WdLogEvent5_WdError(v18);
    goto LABEL_22;
  }
  v20 = 0LL;
  CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v20, (struct DXGPROCESS *)v12);
  if ( v20 )
  {
    *((_QWORD *)a1 + 6) = v12;
    v7 = a2(a1);
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v17 + 24) = 200LL;
    WdLogEvent5_WdError(v17);
  }
  CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v20);
  if ( v8 )
    ExReleaseRundownProtection(v12 + 25);
LABEL_22:
  KeUnstackDetachProcess(&ApcState);
  return v7;
}
