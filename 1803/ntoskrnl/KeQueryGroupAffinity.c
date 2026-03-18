/*
 * XREFs of KeQueryGroupAffinity @ 0x1400C6900
 * Callers:
 *     MmCreatePeb @ 0x1404E97D4 (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x140573E68 (PopProcessorInformation.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     PpmEnableWmiInterface @ 0x1406287CC (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x1407AF830 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x1407C7B94 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= LOWORD(KeActiveProcessors[0]) )
    return 0LL;
  else
    return qword_14044C5D8[GroupNumber];
}
