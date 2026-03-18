/*
 * XREFs of KeQueryGroupAffinity @ 0x140031C80
 * Callers:
 *     PopProcessorInformation @ 0x14044D5F4 (PopProcessorInformation.c)
 *     MmCreatePeb @ 0x14049B450 (MmCreatePeb.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     PpmEnableWmiInterface @ 0x14059FC64 (PpmEnableWmiInterface.c)
 *     PopInitializeHeteroProcessors @ 0x1405C0604 (PopInitializeHeteroProcessors.c)
 *     EtwpProcessorRundown @ 0x140710EC4 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x140720A3C (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= (unsigned __int16)KeActiveProcessors )
    return 0LL;
  else
    return qword_1403E42B8[GroupNumber];
}
