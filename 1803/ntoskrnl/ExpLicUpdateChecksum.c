/*
 * XREFs of ExpLicUpdateChecksum @ 0x1400A18F0
 * Callers:
 *     ExpTimeRefreshWork @ 0x1404777B0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140548390 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x14054A090 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x1407BDD10 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1407BDF20 (ExSetLicenseTamperState.c)
 *     sub_1407BE790 @ 0x1407BE790 (sub_1407BE790.c)
 *     sub_1407BE900 @ 0x1407BE900 (sub_1407BE900.c)
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
