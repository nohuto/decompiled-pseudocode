/*
 * XREFs of CmpStopSiloKeyLockTracker @ 0x140668FF8
 * Callers:
 *     CmpFreeSiloContextCallback @ 0x14066A1E0 (CmpFreeSiloContextCallback.c)
 *     PspDeleteExternalServerSiloState @ 0x1406DEC14 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140668EA0 (CmpFreeSiloKeyLockEntry.c)
 */

PVOID *__fastcall CmpStopSiloKeyLockTracker(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rdx
  PVOID **v4; // rax
  PVOID *result; // rax
  PVOID *v6; // rax
  PVOID *v7; // rcx
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFFC | 2;
  v3 = *(_QWORD **)(BugCheckParameter2 + 16);
  p_P = &P;
  P = &P;
  if ( v3 != (_QWORD *)(BugCheckParameter2 + 16) )
  {
    v4 = *(PVOID ***)(BugCheckParameter2 + 24);
    P = v3;
    p_P = (PVOID *)v4;
    v3[1] = &P;
    *v4 = &P;
    *(_QWORD *)(BugCheckParameter2 + 24) = BugCheckParameter2 + 16;
    *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 16;
  }
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  result = &P;
  if ( P != &P )
  {
    CmpLockRegistry();
    v6 = (PVOID *)P;
    v7 = *(PVOID **)P;
    if ( *((PVOID **)P + 1) != &P || v7[1] != P )
      __fastfail(3u);
    while ( 1 )
    {
      P = v7;
      v7[1] = &P;
      if ( v6 == &P )
        break;
      CmpFreeSiloKeyLockEntry(v6);
      v6 = (PVOID *)P;
      v7 = *(PVOID **)P;
      if ( *((PVOID **)P + 1) != &P || v7[1] != P )
        __fastfail(3u);
    }
    return (PVOID *)CmpUnlockRegistry();
  }
  return result;
}
