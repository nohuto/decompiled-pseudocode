/*
 * XREFs of ExpLoadAndSortLicensingCacheDescriptors @ 0x1404A85DC
 * Callers:
 *     ExQueryLicenseValueInternal @ 0x1404A7FE0 (ExQueryLicenseValueInternal.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     ExpSetKernelDataProtection @ 0x1404AE780 (ExpSetKernelDataProtection.c)
 *     sub_1404AF72C @ 0x1404AF72C (sub_1404AF72C.c)
 *     sub_1405A6AE0 @ 0x1405A6AE0 (sub_1405A6AE0.c)
 *     sub_140718008 @ 0x140718008 (sub_140718008.c)
 */

__int64 ExpLoadAndSortLicensingCacheDescriptors()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // ecx
  unsigned int v2; // edi
  struct _KTHREAD *v4; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rdi
  int v7; // esi
  unsigned int v8; // eax
  int v9; // [rsp+30h] [rbp-78h]
  _BYTE v10[8]; // [rsp+38h] [rbp-70h] BYREF
  int v11; // [rsp+40h] [rbp-68h]
  char v12; // [rsp+B0h] [rbp+8h]
  char v13; // [rsp+B8h] [rbp+10h]

  v9 = 0;
  v13 = 0;
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407ACA60, 0LL);
  if ( BYTE1(NlsMbCodePageTag) )
  {
    v9 = -1073741762;
  }
  else if ( BYTE6(NlsMbCodePageTag) )
  {
    v1 = 0;
    if ( !(_DWORD)NumOfElements )
      v1 = -1073741772;
    v9 = v1;
  }
  else
  {
    v13 = 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407ACA60, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407ACA60);
  KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v2 = v9;
  if ( v9 >= 0 && v13 == 1 )
  {
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    if ( BYTE6(NlsMbCodePageTag) == 1 )
      goto LABEL_31;
    v6 = off_1407AC028;
    if ( off_1407AC028 )
    {
      v7 = sub_1405A6AE0();
      v9 = v7;
      if ( v7 < 0 )
        goto LABEL_31;
    }
    else
    {
      v6 = Data;
      if ( !Data )
        goto LABEL_30;
      v7 = v9;
    }
    if ( (v6[3] & 1) != 0 )
    {
      dword_1407AC0D4 = 2;
      v11 = 2;
      ExpSetKernelDataProtection(v10, 2LL, 0LL);
    }
    v8 = NumOfElements;
    if ( !(_DWORD)NumOfElements )
    {
      LOBYTE(v5) = 1;
      v7 = sub_1404AF72C(v6, v5, &unk_1407AE4B0, 2339LL, &NumOfElements);
      v9 = v7;
      v8 = NumOfElements;
    }
    if ( v7 >= 0 )
    {
      if ( v8 )
      {
        qsort(&unk_1407AE4B0, v8, 0x10uLL, ExpLicensingDescriptorCompare);
        BYTE6(NlsMbCodePageTag) = 1;
      }
      else
      {
        BYTE6(NlsMbCodePageTag) = 1;
        v9 = -1073741772;
      }
      goto LABEL_31;
    }
    if ( v7 != -1073741789 )
    {
LABEL_31:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACA60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACA60);
      KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v2 = v9;
      goto LABEL_12;
    }
LABEL_30:
    v9 = -1073741762;
    BYTE1(NlsMbCodePageTag) = 1;
    v12 = 1;
    goto LABEL_31;
  }
LABEL_12:
  if ( v12 )
    sub_140718008(&KernelLicensingCacheCorrupt);
  return v2;
}
