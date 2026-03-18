/*
 * XREFs of ExpGetKernelDataProtection @ 0x1404AE3CC
 * Callers:
 *     ExpTimeRefreshWork @ 0x14041A8E0 (ExpTimeRefreshWork.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1404AE480 (ExpGenuinePolicyCacheProvider.c)
 *     ExUpdateLicenseDataInternal @ 0x1404AEAB0 (ExUpdateLicenseDataInternal.c)
 *     ExGetLicenseTamperState @ 0x1407179A0 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x140717B30 (ExSetLicenseTamperState.c)
 *     sub_140718340 @ 0x140718340 (sub_140718340.c)
 *     sub_1407184B0 @ 0x1407184B0 (sub_1407184B0.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     sub_1404AE384 @ 0x1404AE384 (sub_1404AE384.c)
 */

__int64 __fastcall ExpGetKernelDataProtection(_OWORD *a1)
{
  _OWORD *v2; // rax
  int v4; // [rsp+20h] [rbp-18h]
  _OWORD *v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407ACB28, 0LL);
  if ( qword_1407ACB98 )
  {
    v5 = *(_OWORD **)qword_1407ACB98;
    v4 = sub_1404AE384((__int64 *)&v5);
    if ( v4 >= 0 )
    {
      v2 = v5;
      *a1 = *v5;
      a1[1] = v2[1];
      a1[2] = v2[2];
    }
  }
  else
  {
    v4 = -1073741275;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407ACB28, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407ACB28);
  KeAbPostRelease((ULONG_PTR)&qword_1407ACB28);
  return (unsigned int)v4;
}
