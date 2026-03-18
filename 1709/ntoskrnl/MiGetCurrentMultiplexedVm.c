/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x1400F0BD0
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14000ABF8 (MmAdjustWorkingSetSizeEx.c)
 *     MmGetWorkingSetLeafSize @ 0x1400F065C (MmGetWorkingSetLeafSize.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400F4A18 (MmQuerySystemWorkingSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_140388AF0
                 + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 2));
  if ( *(_BYTE *)(v0 + 5788) )
    return v0 + 6080;
  else
    return 0LL;
}
