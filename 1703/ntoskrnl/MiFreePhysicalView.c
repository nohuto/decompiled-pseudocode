/*
 * XREFs of MiFreePhysicalView @ 0x1400DB160
 * Callers:
 *     MiRemoveVadCharges @ 0x14051D900 (MiRemoveVadCharges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 */

char __fastcall MiFreePhysicalView(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rdi
  __int64 v4; // rsi
  LONG *SharedVm; // rbx
  KIRQL v6; // al

  result = *(_DWORD *)(a2 + 48) & 7;
  if ( result == 1 )
  {
    v3 = *(_QWORD *)(a1 + 1296);
    v4 = a1 + 1280;
    SharedVm = MiGetSharedVm(a1 + 1280);
    v6 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    --*(_QWORD *)(v3 + 152);
    return MiUnlockWorkingSetExclusive(v4, v6);
  }
  return result;
}
