/*
 * XREFs of SeValidateImageHeader @ 0x140423400
 * Callers:
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140423B90 (SepScheduleImageVerificationCallbacks.c)
 */

__int64 __fastcall SeValidateImageHeader(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  if ( qword_140348BA0 )
  {
    if ( (a6 & 1) != 0 )
      _InterlockedCompareExchange(&dword_1403855D0, 0, 0);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_140348BA0)(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
