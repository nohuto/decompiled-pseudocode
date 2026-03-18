/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x14008045C
 * Callers:
 *     MmQuerySystemWorkingSetInformation @ 0x14007FE08 (MmQuerySystemWorkingSetInformation.c)
 *     MmGetWorkingSetLeafSize @ 0x1400803D8 (MmGetWorkingSetLeafSize.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400C8FB8 (MmAdjustWorkingSetSizeEx.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_1403CBD88
                 + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3));
  if ( *(_BYTE *)(v0 + 6876) )
    return v0 + 7168;
  else
    return 0LL;
}
