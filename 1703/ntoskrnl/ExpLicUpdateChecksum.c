/*
 * XREFs of ExpLicUpdateChecksum @ 0x14006B3D0
 * Callers:
 *     ExpTimeRefreshWork @ 0x14041A8E0 (ExpTimeRefreshWork.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1404AE480 (ExpGenuinePolicyCacheProvider.c)
 *     ExUpdateLicenseDataInternal @ 0x1404AEAB0 (ExUpdateLicenseDataInternal.c)
 *     ExGetLicenseTamperState @ 0x1407179A0 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x140717B30 (ExSetLicenseTamperState.c)
 *     sub_140718340 @ 0x140718340 (sub_140718340.c)
 *     sub_1407184B0 @ 0x1407184B0 (sub_1407184B0.c)
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
