/*
 * XREFs of SeValidateImageHeader @ 0x1404F696C
 * Callers:
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1404F5E9C (SepScheduleImageVerificationCallbacks.c)
 */

__int64 __fastcall SeValidateImageHeader(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  if ( qword_140362640 )
  {
    if ( (a6 & 1) != 0 )
      _InterlockedCompareExchange(&dword_1403A1300, 0, 0);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_140362640)(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
