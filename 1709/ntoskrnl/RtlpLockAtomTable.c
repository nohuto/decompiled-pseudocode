/*
 * XREFs of RtlpLockAtomTable @ 0x1404D2D94
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1400194E0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x1401214B0 (RtlDestroyLowBoxAtoms.c)
 *     RtlLookupAtomInAtomTable @ 0x1404D2BA0 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1404D4E00 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14057CB90 (RtlDeleteAtomFromAtomTable.c)
 *     RtlDestroyAtomTable @ 0x14057CC80 (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1405850E0 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1407213C0 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1407214C8 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
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
