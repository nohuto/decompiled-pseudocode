/*
 * XREFs of sub_1400E3590 @ 0x1400E3590
 * Callers:
 *     ExQueryLicenseValueInternal @ 0x140537F50 (ExQueryLicenseValueInternal.c)
 *     ExpConsumeAddonPolicySetCacheProvider @ 0x140757660 (ExpConsumeAddonPolicySetCacheProvider.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     sub_140538494 @ 0x140538494 (sub_140538494.c)
 */

__int64 __fastcall sub_1400E3590(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v10; // rax
  unsigned int v11; // eax
  unsigned int v13; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
  if ( !(_DWORD)NumOfElements && BYTE6(NlsMbCodePageTag) == 1 )
  {
    v13 = -1073741772;
    goto LABEL_11;
  }
  v10 = (unsigned int *)off_1407F3028;
  if ( off_1407F3028 || (v10 = (unsigned int *)Data) != 0LL )
  {
    v11 = *v10;
    if ( v11 == 24 )
    {
      v13 = -1073741772;
      goto LABEL_11;
    }
    if ( v11 >= 0x18 )
    {
      v13 = sub_140538494(a1, a2, a3, a4, a5);
      goto LABEL_11;
    }
  }
  v13 = -1073741762;
LABEL_11:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3AE0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407F3AE0);
  KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v13;
}
