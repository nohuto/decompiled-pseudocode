/*
 * XREFs of sub_1400A17D0 @ 0x1400A17D0
 * Callers:
 *     ExQueryLicenseValueInternal @ 0x140549360 (ExQueryLicenseValueInternal.c)
 *     ExpConsumeAddonPolicySetCacheProvider @ 0x1407BE3A0 (ExpConsumeAddonPolicySetCacheProvider.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     sub_1405498B0 @ 0x1405498B0 (sub_1405498B0.c)
 */

__int64 __fastcall sub_1400A17D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v10; // rax
  unsigned int v11; // eax
  unsigned int v13; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140862420, 0LL);
  if ( !(_DWORD)NumOfElements && BYTE6(NlsMbCodePageTag) == 1 )
  {
    v13 = -1073741772;
    goto LABEL_11;
  }
  v10 = (unsigned int *)off_140861030;
  if ( off_140861030 || (v10 = (unsigned int *)Data) != 0LL )
  {
    v11 = *v10;
    if ( v11 == 24 )
    {
      v13 = -1073741772;
      goto LABEL_11;
    }
    if ( v11 >= 0x18 )
    {
      v13 = sub_1405498B0(a1, a2, a3, a4, a5);
      goto LABEL_11;
    }
  }
  v13 = -1073741762;
LABEL_11:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140862420, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140862420);
  KeAbPostRelease((ULONG_PTR)&qword_140862420);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  return v13;
}
