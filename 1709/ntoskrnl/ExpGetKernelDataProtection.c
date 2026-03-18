/*
 * XREFs of ExpGetKernelDataProtection @ 0x1404F49A0
 * Callers:
 *     ExpTimeRefreshWork @ 0x140428DB0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1404F3810 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1404F46A0 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x140757110 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1407572A0 (ExSetLicenseTamperState.c)
 *     sub_140757A20 @ 0x140757A20 (sub_140757A20.c)
 *     sub_140757B90 @ 0x140757B90 (sub_140757B90.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     sub_1404F4A48 @ 0x1404F4A48 (sub_1404F4A48.c)
 */

__int64 __fastcall ExpGetKernelDataProtection(_OWORD *a1)
{
  _OWORD *v2; // rax
  int v4; // [rsp+20h] [rbp-18h]
  _OWORD *v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3B98, 0LL);
  if ( qword_1407F3C18 )
  {
    v5 = *(_OWORD **)qword_1407F3C18;
    v4 = sub_1404F4A48(&v5);
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3B98, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407F3B98);
  KeAbPostRelease((ULONG_PTR)&qword_1407F3B98);
  return (unsigned int)v4;
}
