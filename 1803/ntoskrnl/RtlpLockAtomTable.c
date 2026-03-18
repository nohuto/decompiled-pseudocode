/*
 * XREFs of RtlpLockAtomTable @ 0x1404B624C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14003F560 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x1400A1240 (RtlDestroyLowBoxAtoms.c)
 *     RtlLookupAtomInAtomTable @ 0x1404B6050 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x140547520 (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1405478A0 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x140547970 (RtlDeleteAtomFromAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140784AE0 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140784BE8 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
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
