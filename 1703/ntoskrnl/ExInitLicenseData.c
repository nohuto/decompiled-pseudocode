/*
 * XREFs of ExInitLicenseData @ 0x140808950
 * Callers:
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExpSetKernelDataProtection @ 0x1404AE780 (ExpSetKernelDataProtection.c)
 *     ExUpdateLicenseDataInternal @ 0x1404AEAB0 (ExUpdateLicenseDataInternal.c)
 *     ExpCheckPortableOperatingSystem @ 0x1405578EC (ExpCheckPortableOperatingSystem.c)
 *     ExGetExpirationDate @ 0x1405A651C (ExGetExpirationDate.c)
 *     sub_1405A6AE0 @ 0x1405A6AE0 (sub_1405A6AE0.c)
 *     sub_1405A6B44 @ 0x1405A6B44 (sub_1405A6B44.c)
 *     sub_140718008 @ 0x140718008 (sub_140718008.c)
 *     sub_140808C5C @ 0x140808C5C (sub_140808C5C.c)
 */

__int64 ExInitLicenseData()
{
  char v0; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  struct _KTHREAD *v3; // rax
  int v4; // esi
  char v5; // di
  __int128 *v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  struct _KTHREAD *v9; // rax
  struct _KTHREAD *v10; // rax
  int ExpirationDate; // ecx
  struct _KTHREAD *v12; // rax
  int v13; // [rsp+20h] [rbp-60h] BYREF
  LARGE_INTEGER Time; // [rsp+28h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  int v16; // [rsp+38h] [rbp-48h]
  __int64 v17; // [rsp+40h] [rbp-40h]
  __int64 v18; // [rsp+48h] [rbp-38h]
  __int64 v19; // [rsp+50h] [rbp-30h]
  char v20; // [rsp+58h] [rbp-28h]
  __int128 v21; // [rsp+60h] [rbp-20h] BYREF

  v0 = BYTE1(NlsMbCodePageTag);
  qword_1407AC358 = (__int64)ExIsWindowsToGo;
  qword_1407AC360 = (__int64)sub_1404E4FF0;
  qword_1407AC450 = (__int64)ExUpdateLicenseDataInternal;
  qword_1407AC458 = (__int64)ExQueryLicenseValueInternal;
  qword_1407AC460 = (__int64)ExUpdateOsPfnInRegistry;
  qword_1407AC468 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  sub_1405A6B44();
  sub_140808C5C();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACA60, 0LL);
  v19 = 10800LL;
  v15 = 0LL;
  v17 = 0LL;
  v16 = 0;
  v18 = 0LL;
  v20 = 1;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v20 = 0;
  ExpSetKernelDataProtection((__int64)&v15, -1, 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACA60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACA60);
  KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  result = ExpCheckPortableOperatingSystem(&v13);
  if ( (int)result >= 0 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    dword_1407AC1E0 = v13;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACA60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACA60);
    KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
    result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( off_1407AC028 )
  {
    v3 = KeGetCurrentThread();
    --v3->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    v4 = sub_1405A6AE0();
    if ( v4 == -1073741762 )
    {
      v5 = 1;
      BYTE1(NlsMbCodePageTag) = 1;
    }
    else
    {
      v5 = BYTE1(NlsMbCodePageTag);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACA60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACA60);
    KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v0 && v5 )
      sub_140718008(&KernelLicensingCacheCorrupt);
    if ( v4 >= 0 && !v5 )
      ExUpdateLicenseDataInternal(dword_1407C5124, (unsigned int *)off_1407AC028);
    v6 = &v21;
    v7 = 16LL;
    do
    {
      v8 = __rdtsc();
      *(_BYTE *)v6 = v8;
      v6 = (__int128 *)((char *)v6 + 1);
      --v7;
    }
    while ( v7 );
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    xmmword_1407AD368 = v21;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACA60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACA60);
    KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    off_1407AC028 = 0LL;
    if ( !Data && (_DWORD)NumOfElements )
    {
      memset(qword_1407AE4B0, 0, 16LL * (unsigned int)NumOfElements);
      LODWORD(NumOfElements) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACA60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACA60);
    KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
    result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( !ExpSystemSetupInProgress )
  {
    ExpirationDate = ExGetExpirationDate(&Time);
    result = Time.QuadPart;
    if ( ExpirationDate < 0 )
      result = 0LL;
    MEMORY[0xFFFFF780000002C8] = result;
  }
  return result;
}
