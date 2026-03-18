/*
 * XREFs of SeValidateImageHeader @ 0x14053DD30
 * Callers:
 *     MiValidateSectionCreate @ 0x14053BB84 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140604B08 (SepScheduleImageVerificationCallbacks.c)
 */

__int64 __fastcall SeValidateImageHeader(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  if ( qword_1403A5CA0 )
  {
    if ( (a9 & 1) != 0 )
      _InterlockedCompareExchange(&dword_1403E5170, 0, 0);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_1403A5CA0)(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
