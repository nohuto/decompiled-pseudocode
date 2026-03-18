/*
 * XREFs of PsReturnProcessQuota @ 0x1400B8758
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14000ABF8 (MmAdjustWorkingSetSizeEx.c)
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x1404FB9A4 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x140070050 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessQuota(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 3u, a3);
  return result;
}
