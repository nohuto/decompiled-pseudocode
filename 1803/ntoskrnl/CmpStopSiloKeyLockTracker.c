/*
 * XREFs of CmpStopSiloKeyLockTracker @ 0x1406F6F64
 * Callers:
 *     CmpFreeSiloContextCallback @ 0x1406F7BE0 (CmpFreeSiloContextCallback.c)
 *     PspDeleteExternalServerSiloState @ 0x140779254 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpFreeSiloKeyLockEntry @ 0x1406F6E04 (CmpFreeSiloKeyLockEntry.c)
 */

ULONG_PTR **__fastcall CmpStopSiloKeyLockTracker(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR **v3; // r8
  __int64 v4; // r9
  ULONG_PTR *v5; // rdx
  ULONG_PTR ***v6; // rax
  ULONG_PTR **result; // rax
  ULONG_PTR *v8; // rax
  ULONG_PTR v9; // rcx
  ULONG_PTR *v10; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR **v11; // [rsp+28h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFFC | 2;
  v5 = *(ULONG_PTR **)(BugCheckParameter2 + 16);
  v11 = &v10;
  v10 = (ULONG_PTR *)&v10;
  if ( v5 != (ULONG_PTR *)(BugCheckParameter2 + 16) )
  {
    v6 = *(ULONG_PTR ****)(BugCheckParameter2 + 24);
    v3 = &v10;
    v10 = v5;
    v11 = (ULONG_PTR **)v6;
    v5[1] = (ULONG_PTR)&v10;
    *v6 = &v10;
    *(_QWORD *)(BugCheckParameter2 + 24) = BugCheckParameter2 + 16;
    *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 16;
  }
  ExReleasePushLockEx(BugCheckParameter2, 0LL, (__int64)v3, v4);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  result = &v10;
  if ( v10 != (ULONG_PTR *)&v10 )
  {
    CmpLockRegistry();
    v8 = v10;
    v9 = *v10;
    if ( (ULONG_PTR **)v10[1] != &v10 || *(ULONG_PTR **)(v9 + 8) != v10 )
      __fastfail(3u);
    while ( 1 )
    {
      v10 = (ULONG_PTR *)v9;
      *(_QWORD *)(v9 + 8) = &v10;
      if ( v8 == (ULONG_PTR *)&v10 )
        break;
      CmpFreeSiloKeyLockEntry(v8);
      v8 = v10;
      if ( (ULONG_PTR **)v10[1] == &v10 )
      {
        v9 = *v10;
        if ( *(ULONG_PTR **)(*v10 + 8) == v10 )
          continue;
      }
      __fastfail(3u);
    }
    return (ULONG_PTR **)CmpUnlockRegistry();
  }
  return result;
}
