/*
 * XREFs of ExpLoadAndSortLicensingCacheDescriptors @ 0x140549988
 * Callers:
 *     ExQueryLicenseValueInternal @ 0x140549360 (ExQueryLicenseValueInternal.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     ExpSetKernelDataProtection @ 0x140548EB4 (ExpSetKernelDataProtection.c)
 *     sub_14054B4E0 @ 0x14054B4E0 (sub_14054B4E0.c)
 *     sub_14062E3D8 @ 0x14062E3D8 (sub_14062E3D8.c)
 *     sub_1407BE424 @ 0x1407BE424 (sub_1407BE424.c)
 */

__int64 ExpLoadAndSortLicensingCacheDescriptors()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // ecx
  unsigned int v2; // ebx
  struct _KTHREAD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rbx
  int v9; // edi
  char v10; // si
  int v11; // [rsp+30h] [rbp-78h]
  _BYTE v12[8]; // [rsp+38h] [rbp-70h] BYREF
  int v13; // [rsp+40h] [rbp-68h]
  char v14; // [rsp+B0h] [rbp+8h]
  char v15; // [rsp+B8h] [rbp+10h]

  v11 = 0;
  v15 = 0;
  v14 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140862420, 0LL);
  if ( BYTE1(NlsMbCodePageTag) )
  {
    v11 = -1073741762;
  }
  else if ( BYTE6(NlsMbCodePageTag) )
  {
    v1 = 0;
    if ( !(_DWORD)NumOfElements )
      v1 = -1073741772;
    v11 = v1;
  }
  else
  {
    v15 = 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140862420, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140862420);
  KeAbPostRelease((ULONG_PTR)&qword_140862420);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v2 = v11;
  if ( v11 >= 0 && v15 == 1 )
  {
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140862420, 0LL);
    if ( BYTE6(NlsMbCodePageTag) == 1 )
      goto LABEL_30;
    v8 = off_140861030;
    if ( off_140861030 )
    {
      v9 = sub_14062E3D8();
      v11 = v9;
      if ( v9 < 0 )
        goto LABEL_30;
    }
    else
    {
      v8 = Data;
      if ( !Data )
        goto LABEL_28;
      v9 = v11;
    }
    if ( (v8[3] & 1) != 0 )
    {
      dword_1408610C8 = 2;
      v13 = 2;
      ExpSetKernelDataProtection((__int64)v12, 2, 0);
    }
    if ( !(_DWORD)NumOfElements )
    {
      LOBYTE(v5) = 1;
      v9 = sub_14054B4E0(v8, v5, qword_140863E00, 2339LL, &NumOfElements);
      v11 = v9;
    }
    if ( v9 >= 0 )
    {
      if ( (_DWORD)NumOfElements )
      {
        qsort(
          qword_140863E00,
          (unsigned int)NumOfElements,
          0x10uLL,
          (int (__cdecl *)(const void *, const void *))sub_140548DF0);
        BYTE6(NlsMbCodePageTag) = 1;
      }
      else
      {
        BYTE6(NlsMbCodePageTag) = 1;
        v11 = -1073741772;
      }
      goto LABEL_30;
    }
    if ( v9 != -1073741789 )
    {
LABEL_30:
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140862420, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140862420, v5, v6, v7);
      KeAbPostRelease((ULONG_PTR)&qword_140862420);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v2 = v11;
      goto LABEL_12;
    }
LABEL_28:
    v11 = -1073741762;
    BYTE1(NlsMbCodePageTag) = 1;
    v14 = 1;
    goto LABEL_30;
  }
LABEL_12:
  if ( v14 )
    sub_1407BE424(&KernelLicensingCacheCorrupt);
  return v2;
}
