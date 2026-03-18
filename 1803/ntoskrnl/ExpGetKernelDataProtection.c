/*
 * XREFs of ExpGetKernelDataProtection @ 0x14054A388
 * Callers:
 *     ExpTimeRefreshWork @ 0x1404777B0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140548390 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x14054A090 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x1407BDD10 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1407BDF20 (ExSetLicenseTamperState.c)
 *     sub_1407BE790 @ 0x1407BE790 (sub_1407BE790.c)
 *     sub_1407BE900 @ 0x1407BE900 (sub_1407BE900.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     sub_14054A430 @ 0x14054A430 (sub_14054A430.c)
 */

__int64 __fastcall ExpGetKernelDataProtection(_OWORD *a1)
{
  _OWORD *v2; // rax
  int v4; // [rsp+20h] [rbp-18h]
  _OWORD *v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1408624E0, 0LL);
  if ( qword_140862558 )
  {
    v5 = *(_OWORD **)qword_140862558;
    v4 = sub_14054A430(&v5);
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1408624E0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1408624E0);
  KeAbPostRelease((ULONG_PTR)&qword_1408624E0);
  return (unsigned int)v4;
}
