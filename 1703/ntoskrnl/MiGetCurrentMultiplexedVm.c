/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x140084C44
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x140030524 (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140031018 (MmQuerySystemWorkingSetInformation.c)
 *     MmGetWorkingSetLeafSize @ 0x140084BE4 (MmGetWorkingSetLeafSize.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(KeGetCurrentThread()->ApcState.Process[1].SecurePid));
  if ( *(_BYTE *)(v0 + 5596) )
    return v0 + 5888;
  else
    return 0LL;
}
