/*
 * XREFs of ExInitLicenseData @ 0x14083D688
 * Callers:
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExUpdateLicenseDataInternal @ 0x1404F3810 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x1404F44AC (ExpSetKernelDataProtection.c)
 *     ExpCheckPortableOperatingSystem @ 0x140590B7C (ExpCheckPortableOperatingSystem.c)
 *     ExGetExpirationDate @ 0x1405C2C4C (ExGetExpirationDate.c)
 *     sub_1405C43B0 @ 0x1405C43B0 (sub_1405C43B0.c)
 *     sub_1405CB2A4 @ 0x1405CB2A4 (sub_1405CB2A4.c)
 *     sub_1407576E4 @ 0x1407576E4 (sub_1407576E4.c)
 *     sub_14083D98C @ 0x14083D98C (sub_14083D98C.c)
 */

__int64 ExInitLicenseData()
{
  char v0; // r14
  struct _KTHREAD *CurrentThread; // rax
  char v2; // al
  __int64 result; // rax
  struct _KTHREAD *v4; // rax
  int v5; // esi
  char v6; // di
  char v7; // cl
  __int128 *v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  struct _KTHREAD *v11; // rax
  char v12; // al
  struct _KTHREAD *v13; // rax
  char v14; // bl
  int ExpirationDate; // ecx
  struct _KTHREAD *v16; // rax
  int v17; // [rsp+20h] [rbp-60h] BYREF
  LARGE_INTEGER Time; // [rsp+28h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  int v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h]
  char v24; // [rsp+58h] [rbp-28h]
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF

  v0 = BYTE1(NlsMbCodePageTag);
  qword_1407F3348 = (__int64)ExIsWindowsToGo;
  qword_1407F3350 = (__int64)sub_14054EB00;
  qword_1407F3440 = (__int64)ExUpdateLicenseDataInternal;
  qword_1407F3448 = (__int64)ExQueryLicenseValueInternal;
  qword_1407F3450 = (__int64)ExUpdateOsPfnInRegistry;
  qword_1407F3458 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  sub_1405CB2A4();
  sub_14083D98C();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
  v23 = 10800LL;
  v19 = 0LL;
  v21 = 0LL;
  v20 = 0;
  v22 = 0LL;
  v24 = 1;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v24 = 0;
  ExpSetKernelDataProtection((__int64)&v19, -1, 1);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3AE0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3AE0);
  KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  result = ExpCheckPortableOperatingSystem(&v17);
  if ( (int)result >= 0 )
  {
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    dword_1407F31A0 = v17;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3AE0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3AE0);
    KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
    result = (__int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( off_1407F3028 )
  {
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    v5 = sub_1405C43B0();
    if ( v5 == -1073741762 )
      BYTE1(NlsMbCodePageTag) = 1;
    v6 = BYTE1(NlsMbCodePageTag);
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3AE0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3AE0);
    KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v0 && v6 )
      sub_1407576E4(&KernelLicensingCacheCorrupt);
    if ( v5 >= 0 && !v6 )
      ExUpdateLicenseDataInternal(dword_14087C154, (unsigned int *)off_1407F3028);
    v8 = &v25;
    v9 = 16LL;
    do
    {
      v10 = __rdtsc();
      *(_BYTE *)v8 = v10;
      v8 = (__int128 *)((char *)v8 + 1);
      --v9;
    }
    while ( v9 );
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    xmmword_1407F43F0 = v25;
    v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3AE0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3AE0);
    KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    off_1407F3028 = 0LL;
    if ( !Data && (_DWORD)NumOfElements )
    {
      memset(qword_1407F54A0, 0, 16LL * (unsigned int)NumOfElements);
      LODWORD(NumOfElements) = 0;
    }
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3AE0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3AE0);
    KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
    result = (__int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
