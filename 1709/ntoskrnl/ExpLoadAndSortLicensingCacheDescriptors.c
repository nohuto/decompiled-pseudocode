/*
 * XREFs of ExpLoadAndSortLicensingCacheDescriptors @ 0x14053856C
 * Callers:
 *     ExQueryLicenseValueInternal @ 0x140537F50 (ExQueryLicenseValueInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     ExpSetKernelDataProtection @ 0x1404F44AC (ExpSetKernelDataProtection.c)
 *     sub_1404F4DA0 @ 0x1404F4DA0 (sub_1404F4DA0.c)
 *     sub_1405C43B0 @ 0x1405C43B0 (sub_1405C43B0.c)
 *     sub_1407576E4 @ 0x1407576E4 (sub_1407576E4.c)
 */

__int64 ExpLoadAndSortLicensingCacheDescriptors()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // ecx
  unsigned int v2; // edi
  struct _KTHREAD *v4; // rax
  _DWORD *v5; // rdi
  int v6; // esi
  char v7; // bl
  int v8; // [rsp+30h] [rbp-78h]
  _BYTE v9[8]; // [rsp+38h] [rbp-70h] BYREF
  int v10; // [rsp+40h] [rbp-68h]
  char v11; // [rsp+B0h] [rbp+8h]
  char v12; // [rsp+B8h] [rbp+10h]

  v8 = 0;
  v12 = 0;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
  if ( BYTE1(NlsMbCodePageTag) )
  {
    v8 = -1073741762;
  }
  else if ( BYTE6(NlsMbCodePageTag) )
  {
    v1 = 0;
    if ( !(_DWORD)NumOfElements )
      v1 = -1073741772;
    v8 = v1;
  }
  else
  {
    v12 = 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3AE0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407F3AE0);
  KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v2 = v8;
  if ( v8 >= 0 && v12 == 1 )
  {
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    if ( BYTE6(NlsMbCodePageTag) == 1 )
      goto LABEL_31;
    v5 = off_1407F3028;
    if ( off_1407F3028 )
    {
      v6 = sub_1405C43B0();
      v8 = v6;
      if ( v6 < 0 )
        goto LABEL_31;
    }
    else
    {
      v5 = Data;
      if ( !Data )
        goto LABEL_30;
      v6 = v8;
    }
    if ( (v5[3] & 1) != 0 )
    {
      dword_1407F30C8 = 2;
      v10 = 2;
      ExpSetKernelDataProtection((__int64)v9, 2, 0);
    }
    if ( !(_DWORD)NumOfElements )
    {
      v6 = sub_1404F4DA0((__int64)v5, 1, qword_1407F54A0, 0x923u, (unsigned int *)&NumOfElements);
      v8 = v6;
    }
    if ( v6 >= 0 )
    {
      if ( (_DWORD)NumOfElements )
      {
        qsort(
          qword_1407F54A0,
          (unsigned int)NumOfElements,
          0x10uLL,
          (int (__cdecl *)(const void *, const void *))sub_1404F4410);
        BYTE6(NlsMbCodePageTag) = 1;
      }
      else
      {
        BYTE6(NlsMbCodePageTag) = 1;
        v8 = -1073741772;
      }
      goto LABEL_31;
    }
    if ( v6 != -1073741789 )
    {
LABEL_31:
      v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3AE0, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3AE0);
      KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v2 = v8;
      goto LABEL_12;
    }
LABEL_30:
    v8 = -1073741762;
    BYTE1(NlsMbCodePageTag) = 1;
    v11 = 1;
    goto LABEL_31;
  }
LABEL_12:
  if ( v11 )
    sub_1407576E4(&KernelLicensingCacheCorrupt);
  return v2;
}
