/*
 * XREFs of RtlpLockAtomTable @ 0x1404FA734
 * Callers:
 *     RtlDestroyLowBoxAtoms @ 0x140018648 (RtlDestroyLowBoxAtoms.c)
 *     RtlAddAtomToAtomTableEx @ 0x14008B560 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyAtomTable @ 0x140431100 (RtlDestroyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x140431280 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x14044D7C0 (RtlPinAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1404F9A20 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x1404FA540 (RtlLookupAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1406E9560 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1406E9668 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( !a1 || *a1 != 1836020801 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 2), 0LL);
  return 1;
}
