/*
 * XREFs of sub_14006B210 @ 0x14006B210
 * Callers:
 *     ExQueryLicenseValueInternal @ 0x1404A7FE0 (ExQueryLicenseValueInternal.c)
 *     ExpConsumeAddonPolicySetCacheProvider @ 0x140717F90 (ExpConsumeAddonPolicySetCacheProvider.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     sub_1404A8504 @ 0x1404A8504 (sub_1404A8504.c)
 */

__int64 __fastcall sub_14006B210(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v10; // rax
  unsigned int v11; // eax
  unsigned int v13; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407ACA60, 0LL);
  if ( !(_DWORD)NumOfElements && BYTE6(NlsMbCodePageTag) == 1 )
  {
    v13 = -1073741772;
    goto LABEL_11;
  }
  v10 = (unsigned int *)off_1407AC028;
  if ( off_1407AC028 || (v10 = (unsigned int *)Data) != 0LL )
  {
    v11 = *v10;
    if ( v11 == 24 )
    {
      v13 = -1073741772;
      goto LABEL_11;
    }
    if ( v11 >= 0x18 )
    {
      v13 = sub_1404A8504(a1, a2, a3, a4, a5);
      goto LABEL_11;
    }
  }
  v13 = -1073741762;
LABEL_11:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407ACA60, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&qword_1407ACA60);
  KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  return v13;
}
