/*
 * XREFs of VfRemoveVerifierEntry @ 0x140837A38
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     VfSuspectDriversRemove @ 0x14082AD78 (VfSuspectDriversRemove.c)
 */

__int64 __fastcall VfRemoveVerifierEntry(const UNICODE_STRING *a1)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return VfSuspectDriversRemove(a1);
  else
    return 3221225659LL;
}
