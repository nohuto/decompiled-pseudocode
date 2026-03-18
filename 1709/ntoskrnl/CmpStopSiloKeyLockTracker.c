/*
 * XREFs of CmpStopSiloKeyLockTracker @ 0x140693D70
 * Callers:
 *     CmpFreeSiloContextCallback @ 0x140694780 (CmpFreeSiloContextCallback.c)
 *     PspDeleteExternalServerSiloState @ 0x140715064 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140693C14 (CmpFreeSiloKeyLockEntry.c)
 */

ULONG_PTR **__fastcall CmpStopSiloKeyLockTracker(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *v3; // rdx
  ULONG_PTR ***v4; // rax
  ULONG_PTR **result; // rax
  ULONG_PTR *v6; // rax
  ULONG_PTR v7; // rcx
  ULONG_PTR *v8; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR **v9; // [rsp+28h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFFC | 2;
  v3 = *(ULONG_PTR **)(BugCheckParameter2 + 16);
  v9 = &v8;
  v8 = (ULONG_PTR *)&v8;
  if ( v3 != (ULONG_PTR *)(BugCheckParameter2 + 16) )
  {
    v4 = *(ULONG_PTR ****)(BugCheckParameter2 + 24);
    v8 = v3;
    v9 = (ULONG_PTR **)v4;
    v3[1] = (ULONG_PTR)&v8;
    *v4 = &v8;
    *(_QWORD *)(BugCheckParameter2 + 24) = BugCheckParameter2 + 16;
    *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 16;
  }
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  result = &v8;
  if ( v8 != (ULONG_PTR *)&v8 )
  {
    CmpLockRegistry();
    v6 = v8;
    v7 = *v8;
    if ( (ULONG_PTR **)v8[1] != &v8 || *(ULONG_PTR **)(v7 + 8) != v8 )
      __fastfail(3u);
    while ( 1 )
    {
      v8 = (ULONG_PTR *)v7;
      *(_QWORD *)(v7 + 8) = &v8;
      if ( v6 == (ULONG_PTR *)&v8 )
        break;
      CmpFreeSiloKeyLockEntry(v6);
      v6 = v8;
      if ( (ULONG_PTR **)v8[1] == &v8 )
      {
        v7 = *v8;
        if ( *(ULONG_PTR **)(*v8 + 8) == v8 )
          continue;
      }
      __fastfail(3u);
    }
    return (ULONG_PTR **)CmpUnlockRegistry();
  }
  return result;
}
