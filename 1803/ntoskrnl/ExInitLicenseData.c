/*
 * XREFs of ExInitLicenseData @ 0x1408AFFA0
 * Callers:
 *     Phase1InitializationIoReady @ 0x1408A5E94 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExUpdateLicenseDataInternal @ 0x140548390 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x140548EB4 (ExpSetKernelDataProtection.c)
 *     ExpCheckPortableOperatingSystem @ 0x14057EC4C (ExpCheckPortableOperatingSystem.c)
 *     sub_14062E3D8 @ 0x14062E3D8 (sub_14062E3D8.c)
 *     ExGetExpirationDate @ 0x14063071C (ExGetExpirationDate.c)
 *     sub_140633DCC @ 0x140633DCC (sub_140633DCC.c)
 *     sub_1407BE424 @ 0x1407BE424 (sub_1407BE424.c)
 *     sub_1408AFF10 @ 0x1408AFF10 (sub_1408AFF10.c)
 */

__int64 ExInitLicenseData()
{
  char v0; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // al
  __int64 result; // rax
  struct _KTHREAD *v7; // rax
  __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // di
  char v13; // cl
  __int128 *v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  struct _KTHREAD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // al
  struct _KTHREAD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // bl
  int ExpirationDate; // ecx
  struct _KTHREAD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // [rsp+20h] [rbp-60h] BYREF
  LARGE_INTEGER Time; // [rsp+28h] [rbp-58h] BYREF
  __int64 v34; // [rsp+30h] [rbp-50h] BYREF
  int v35; // [rsp+38h] [rbp-48h]
  __int64 v36; // [rsp+40h] [rbp-40h]
  __int64 v37; // [rsp+48h] [rbp-38h]
  __int64 v38; // [rsp+50h] [rbp-30h]
  char v39; // [rsp+58h] [rbp-28h]
  __int128 v40; // [rsp+60h] [rbp-20h] BYREF

  v0 = BYTE1(NlsMbCodePageTag);
  qword_140861348 = (__int64)ExIsWindowsToGo;
  qword_140861350 = (__int64)sub_1405D49A0;
  qword_140861458 = (__int64)ExUpdateLicenseDataInternal;
  qword_140861460 = (__int64)ExQueryLicenseValueInternal;
  qword_140861468 = (__int64)ExUpdateOsPfnInRegistry;
  qword_140861470 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  sub_140633DCC();
  sub_1408AFF10();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140862420, 0LL);
  v38 = 10800LL;
  v34 = 0LL;
  v36 = 0LL;
  v35 = 0;
  v37 = 0LL;
  v39 = 1;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v39 = 0;
  ExpSetKernelDataProtection((__int64)&v34, -1, 1);
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140862420, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140862420, v2, v3, v4);
  KeAbPostRelease((ULONG_PTR)&qword_140862420);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  result = ExpCheckPortableOperatingSystem(&v32);
  if ( (int)result >= 0 )
  {
    v28 = KeGetCurrentThread();
    --v28->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140862420, 0LL);
    dword_1408611A4 = v32;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140862420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140862420, v29, v30, v31);
    KeAbPostRelease((ULONG_PTR)&qword_140862420);
    result = (__int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( off_140861030 )
  {
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140862420, 0LL);
    v9 = sub_14062E3D8();
    if ( v9 == -1073741762 )
      BYTE1(NlsMbCodePageTag) = 1;
    v12 = BYTE1(NlsMbCodePageTag);
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140862420, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140862420, v8, v10, v11);
    KeAbPostRelease((ULONG_PTR)&qword_140862420);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v0 && v12 )
      sub_1407BE424(&KernelLicensingCacheCorrupt);
    if ( v9 >= 0 && !v12 )
      ExUpdateLicenseDataInternal(dword_1408F2154, (unsigned int *)off_140861030);
    v14 = &v40;
    v15 = 16LL;
    do
    {
      v16 = __rdtsc();
      *(_BYTE *)v14 = v16;
      v14 = (__int128 *)((char *)v14 + 1);
      --v15;
    }
    while ( v15 );
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140862420, 0LL);
    xmmword_140862D30 = v40;
    v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140862420, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v21 & 2) != 0 && (v21 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140862420, v18, v19, v20);
    KeAbPostRelease((ULONG_PTR)&qword_140862420);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140862420, 0LL);
    off_140861030 = 0LL;
    if ( !Data && (_DWORD)NumOfElements )
    {
      memset(qword_140863E00, 0, 16LL * (unsigned int)NumOfElements);
      LODWORD(NumOfElements) = 0;
    }
    v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140862420, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v26 & 2) != 0 && (v26 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140862420, v23, v24, v25);
    KeAbPostRelease((ULONG_PTR)&qword_140862420);
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
