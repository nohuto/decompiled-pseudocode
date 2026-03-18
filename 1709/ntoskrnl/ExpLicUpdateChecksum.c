/*
 * XREFs of ExpLicUpdateChecksum @ 0x1400B5B00
 * Callers:
 *     ExpTimeRefreshWork @ 0x140428DB0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1404F3810 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1404F46A0 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x140757110 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1407572A0 (ExSetLicenseTamperState.c)
 *     sub_140757A20 @ 0x140757A20 (sub_140757A20.c)
 *     sub_140757B90 @ 0x140757B90 (sub_140757B90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLicUpdateChecksum(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  return result;
}
