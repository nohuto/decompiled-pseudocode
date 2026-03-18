/*
 * XREFs of ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017EF60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001D44 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0028BF8 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYPROCESS@@@@YAPEAUDXGKVMB_COMMAND_DESTROYPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D3E4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYPROCESS@@@@YAPEAUDXGKVMB_COMMAND_DESTROYPROCESS@@P.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00D31DC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // esi
  unsigned int v5; // ebp
  unsigned int v6; // ecx
  __int64 v7; // r8
  unsigned int v8; // edx
  int v9; // r11d
  struct _EX_RUNDOWN_REF *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v15[24]; // [rsp+28h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-58h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYPROCESS>((__int64)a1);
  if ( v2 )
  {
    v3 = *((_QWORD *)a1 + 7);
    KeStackAttachProcess(*(PRKPROCESS *)(v3 + 56), &ApcState);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v15, (struct _KTHREAD **)v3);
    v4 = *(_DWORD *)(v2 + 8);
    v5 = *(_DWORD *)(v3 + 248);
    v6 = (v4 >> 6) & 0xFFFFFF;
    if ( v6 < v5
      && (v7 = *(_QWORD *)(v3 + 232), v8 = *(_DWORD *)(16LL * v6 + v7 + 8), v9 = (v8 >> 5) & 3, v4 >> 30 == v9)
      && (v8 & 0x2000) == 0
      && (v8 & 0x1F) == 0xC )
    {
      v10 = *(struct _EX_RUNDOWN_REF **)(v7 + 16LL * v6);
      if ( v10 && v6 < v5 && v4 >> 30 == v9 && (v8 & 0x2000) == 0 && (v8 & 0x1F) != 0 )
        *(_DWORD *)(16LL * ((v4 >> 6) & 0xFFFFFF) + v7 + 8) |= 0x2000u;
    }
    else
    {
      v10 = 0LL;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
    if ( v10 )
    {
      ExWaitForRundownProtectionRelease(v10 + 25);
      v14 = 0LL;
      CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v14, (struct DXGPROCESS *)v10);
      if ( v14 )
        DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)v10);
      CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v14);
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v12 + 24) = *(unsigned int *)(v2 + 8);
      WdLogEvent5_WdError(v12);
    }
    KeUnstackDetachProcess(&ApcState);
  }
  return 0;
}
