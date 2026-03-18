/*
 * XREFs of PsReturnProcessQuota @ 0x1400703DC
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x1400C8FB8 (MmAdjustWorkingSetSizeEx.c)
 *     MmDeleteProcessAddressSpace @ 0x1405128C0 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x1400F8E70 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessQuota(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[4], a1, 3LL, a3);
  return result;
}
