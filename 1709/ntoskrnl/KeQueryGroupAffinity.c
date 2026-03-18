/*
 * XREFs of KeQueryGroupAffinity @ 0x1400AE8F0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x1404DAD28 (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x14058ECEC (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x1405E1624 (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x14074E58C (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x140760898 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= LOWORD(KeActiveProcessors[0]) )
    return 0LL;
  else
    return qword_140401408[GroupNumber];
}
