/*
 * XREFs of ?VmBusDestroyProcess@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D110
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001BB8 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C00232E0 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C009C184 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall VmBusDestroyProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  unsigned int v3; // ebx
  unsigned int v4; // edx
  __int64 v5; // r8
  int v6; // ecx
  struct DXGPROCESS *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  v1 = *((_QWORD *)a1 + 7);
  v2 = *((_QWORD *)a1 + 9);
  KeStackAttachProcess(*(PRKPROCESS *)(v1 + 48), &ApcState);
  v3 = *(_DWORD *)(v2 + 12);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v1 + 168));
  v4 = (v3 >> 6) & 0xFFFFFF;
  if ( v4 < *(_DWORD *)(v1 + 208)
    && (v5 = *(_QWORD *)(v1 + 192),
        v6 = *(_DWORD *)(v5 + 16LL * v4 + 8),
        ((v3 >> 26) & 0x30) == (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0x30))
    && (v6 & 0x1000) == 0
    && (v6 & 0xF) != 0
    && (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0xF) == 0xC )
  {
    v7 = *(struct DXGPROCESS **)(v5 + 16LL * v4);
  }
  else
  {
    v7 = 0LL;
  }
  ExReleasePushLockSharedEx(v1 + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    v12 = 0LL;
    CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v12, v7);
    if ( v12 )
      DXGPROCESS::DestroyDxgProcess(v7);
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v12);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v10 + 24) = *(unsigned int *)(v2 + 12);
    WdLogEvent5_WdError(v10);
  }
  KeUnstackDetachProcess(&ApcState);
  return 0;
}
