/*
 * XREFs of ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C002D418
 * Callers:
 *     ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C002E4B0 (-VmBusProcessPacket@@YAXPEAX@Z.c)
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001BB8 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C00232E0 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 */

char __fastcall VmBusExecuteCommandInProcessContext(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 (__fastcall *a2)(struct DXGADAPTER_VMBUS_PACKET *))
{
  __int64 v2; // rbp
  __int64 v4; // r14
  unsigned int v6; // edi
  char v7; // bl
  unsigned int v8; // r8d
  __int64 v9; // rdx
  int v10; // ecx
  struct DXGPROCESS *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  v2 = *((_QWORD *)a1 + 7);
  v4 = *((_QWORD *)a1 + 9);
  KeStackAttachProcess(*(PRKPROCESS *)(v2 + 48), &ApcState);
  v6 = *(_DWORD *)(v4 + 12);
  v7 = 0;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v2 + 168));
  v8 = (v6 >> 6) & 0xFFFFFF;
  if ( v8 < *(_DWORD *)(v2 + 208)
    && (v9 = *(_QWORD *)(v2 + 192),
        v10 = *(_DWORD *)(v9 + 16LL * v8 + 8),
        ((v6 >> 26) & 0x30) == (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x30))
    && (v10 & 0x1000) == 0
    && (v10 & 0xF) != 0
    && (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0xF) == 0xC )
  {
    v11 = *(struct DXGPROCESS **)(v9 + 16LL * v8);
  }
  else
  {
    v11 = 0LL;
  }
  ExReleasePushLockSharedEx(v2 + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 )
  {
    v19 = 0LL;
    CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v19, v11);
    if ( v19 )
    {
      *((_QWORD *)a1 + 6) = v11;
      v7 = a2(a1);
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v17 + 24) = 4579LL;
      WdLogEvent5_WdError(v17);
    }
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v19);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v14 + 24) = *(unsigned int *)(v4 + 12);
    WdLogEvent5_WdError(v14);
  }
  KeUnstackDetachProcess(&ApcState);
  return v7;
}
