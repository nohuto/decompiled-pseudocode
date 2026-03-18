/*
 * XREFs of ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C01931F8
 * Callers:
 *     ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C01948A0 (-VmBusProcessPacket@@YAXPEAX@Z.c)
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001354 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0021680 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 */

char __fastcall VmBusExecuteCommandInProcessContext(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 (__fastcall *a2)(struct DXGADAPTER_VMBUS_PACKET *))
{
  __int64 v2; // r14
  __int64 v4; // rsi
  char v6; // di
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // edx
  struct _EX_RUNDOWN_REF *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v19[24]; // [rsp+28h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v2 = *((_QWORD *)a1 + 7);
  v4 = *((_QWORD *)a1 + 9);
  KeStackAttachProcess(*(PRKPROCESS *)(v2 + 48), &ApcState);
  v6 = 0;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, (struct DXGPROCESS *)v2);
  v7 = (*(_DWORD *)(v4 + 8) >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 >= *(_DWORD *)(v2 + 240) )
    goto LABEL_9;
  v8 = *(_QWORD *)(v2 + 224);
  v9 = *(_DWORD *)(v8 + 16 * v7 + 8);
  if ( ((*(_DWORD *)(v4 + 8) >> 25) & 0x60) != (*(_BYTE *)(v8 + 16 * v7 + 8) & 0x60)
    || (v9 & 0x2000) != 0
    || (v9 & 0x1F) == 0
    || (*(_BYTE *)(v8 + 16LL * (unsigned int)v7 + 8) & 0x1F) != 0xC )
  {
    goto LABEL_9;
  }
  v10 = *(struct _EX_RUNDOWN_REF **)(v8 + 16LL * (unsigned int)v7);
  if ( v10 && !ExAcquireRundownProtection(v10 + 24) )
  {
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = *(unsigned int *)(v4 + 8);
    *(_QWORD *)(v12 + 32) = 90LL;
    WdLogEvent5_WdError(v12);
LABEL_9:
    v10 = 0LL;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  if ( v10 )
  {
    v18 = 0LL;
    CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v18, (struct DXGPROCESS *)v10);
    if ( v18 )
    {
      *((_QWORD *)a1 + 6) = v10;
      v6 = a2(a1);
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = 110LL;
      WdLogEvent5_WdError(v16);
    }
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v18);
    ExReleaseRundownProtection(v10 + 24);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 24) = *(unsigned int *)(v4 + 8);
    WdLogEvent5_WdError(v14);
  }
  KeUnstackDetachProcess(&ApcState);
  return v6;
}
