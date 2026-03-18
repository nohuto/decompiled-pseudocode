/*
 * XREFs of ViDriverReApplyVerifierForAll @ 0x140816010
 * Callers:
 *     VfDriverInitSuccess @ 0x14080F4C4 (VfDriverInitSuccess.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x14080F570 (VfDriverLock.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140823C64 (VfThunkApplyDriverAddedThunks.c)
 *     VfSuspectDriversIsLoaded @ 0x1408E1A38 (VfSuspectDriversIsLoaded.c)
 */

void __fastcall ViDriverReApplyVerifierForAll(__int64 **a1)
{
  __int64 *i; // rbx

  if ( ViVerifierDriverAddedThunkListHead )
  {
    for ( i = *a1; i != (__int64 *)a1; i = (__int64 *)*i )
    {
      if ( !RtlEqualUnicodeString(&VfKernelImageName, (PCUNICODE_STRING)(i + 11), 1u) && (i[13] & 0x2000000) != 0 )
      {
        VfDriverLock();
        if ( (unsigned int)VfSuspectDriversIsLoaded(i + 11) )
          VfThunkApplyDriverAddedThunks(i);
        ViDriversLoadLockOwner = 0LL;
        KeReleaseMutex(&ViDriversLoadLock, 0);
      }
    }
  }
}
