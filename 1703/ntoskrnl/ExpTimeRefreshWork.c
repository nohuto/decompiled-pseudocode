/*
 * XREFs of ExpTimeRefreshWork @ 0x14041A8E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KeQueryTimeIncrement @ 0x14006B3C0 (KeQueryTimeIncrement.c)
 *     ExpLicUpdateChecksum @ 0x14006B3D0 (ExpLicUpdateChecksum.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140409AF8 (ExUpdateSystemTimeFromCmos.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x14045D6C4 (ExpPutLicenseDataIntoRegistry.c)
 *     ExReleaseTimeRefreshLock @ 0x14045E2D4 (ExReleaseTimeRefreshLock.c)
 *     sub_14045EE78 @ 0x14045EE78 (sub_14045EE78.c)
 *     ExpGetKernelDataProtection @ 0x1404AE3CC (ExpGetKernelDataProtection.c)
 *     ExpSetKernelDataProtection @ 0x1404AE780 (ExpSetKernelDataProtection.c)
 *     ExAcquireTimeRefreshLock @ 0x140563098 (ExAcquireTimeRefreshLock.c)
 *     sub_140717FB8 @ 0x140717FB8 (sub_140717FB8.c)
 *     sub_140718008 @ 0x140718008 (sub_140718008.c)
 *     sub_140718264 @ 0x140718264 (sub_140718264.c)
 */

_BOOL8 __fastcall ExpTimeRefreshWork(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v2; // bl
  __int128 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned int updated; // ecx
  unsigned __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rbx
  ULONG TimeIncrement; // eax
  char v11; // bl
  struct _KTHREAD *v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  struct _KTHREAD *v16; // rax
  int v17; // eax
  int KernelDataProtection; // eax
  __int64 v19; // rdx
  signed int v20; // ecx
  unsigned int v21; // r9d
  unsigned __int64 v22; // rax
  bool v23; // bl
  _DWORD *v24; // rcx
  __int128 v26; // [rsp+28h] [rbp-E0h] BYREF
  __m256i v27; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v28; // [rsp+58h] [rbp-B0h] BYREF
  __m256i v29; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v30[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v31; // [rsp+98h] [rbp-70h] BYREF
  __m256i v32; // [rsp+A8h] [rbp-60h]
  __int128 v33; // [rsp+C8h] [rbp-40h] BYREF
  __m256i v34; // [rsp+D8h] [rbp-30h]
  char v35; // [rsp+F8h] [rbp-10h] BYREF
  int v36; // [rsp+100h] [rbp-8h]
  __int64 v37[6]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v38[48]; // [rsp+158h] [rbp+50h] BYREF
  char v39[24]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v40; // [rsp+1A0h] [rbp+98h]
  char v41[24]; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned __int64 v42; // [rsp+1D0h] [rbp+C8h]
  char v43[32]; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned __int64 v44; // [rsp+208h] [rbp+100h]
  char v45[8]; // [rsp+218h] [rbp+110h] BYREF
  int v46; // [rsp+220h] [rbp+118h]
  _BYTE v47[48]; // [rsp+248h] [rbp+140h] BYREF

  do
  {
    LOBYTE(a1) = 1;
    ExAcquireTimeRefreshLock(a1);
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0, 0);
    ExReleaseTimeRefreshLock();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    if ( off_1407AC028 )
    {
LABEL_25:
      v11 = 0;
      goto LABEL_28;
    }
    if ( Data )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACB28, 0LL);
      v2 = qword_1407ACB98 == 0;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACB28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACB28);
      KeAbPostRelease((ULONG_PTR)&qword_1407ACB28);
      if ( v2 )
      {
        v3 = (__int128 *)&v35;
        dword_1407AC0D4 = 5;
        v36 = 5;
        v4 = 2LL;
LABEL_23:
        ExpSetKernelDataProtection(v3, v4, 0LL);
        goto LABEL_24;
      }
      if ( Data )
      {
        *(_QWORD *)&v26 = 0LL;
        memset(&v27, 0, 24);
        DWORD2(v26) = 4;
        v27.m256i_i8[24] = 1;
        updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v26);
        if ( updated )
          goto LABEL_15;
        if ( (_DWORD)v5 )
        {
          v7 = 16LL * (unsigned int)v5;
          updated = v7 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v7 <= 0xFFFFFFFF )
            updated = ExpLicUpdateChecksum((__int64)&unk_1407AE4B0, v5, &v26);
          if ( updated )
          {
LABEL_15:
            *(_QWORD *)&v26 = 0LL;
            updated = 0;
            DWORD2(v26) = 4;
          }
        }
        v31 = v26;
        v32 = v27;
      }
      else
      {
        updated = -1073741811;
      }
      if ( !updated && (int)ExpGetKernelDataProtection(v37) >= 0 )
      {
        v8 = 4;
        if ( v37[0] != (_QWORD)v31 )
        {
          DWORD2(v31) = 4;
          v8 = 6;
        }
        v9 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v3 = &v31;
        v32.m256i_i64[0] = v9 * TimeIncrement / 10000;
        v4 = v8;
        goto LABEL_23;
      }
    }
LABEL_24:
    if ( off_1407AC028 )
      goto LABEL_25;
    v11 = 1;
    if ( (int)ExpGetKernelDataProtection(v38) >= 0 )
      v11 = v38[40];
LABEL_28:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407ACA60, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1407ACA60);
    KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v11 == 1 )
    {
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407ACA60, 0LL);
      v13 = 0LL;
      if ( (int)ExpGetKernelDataProtection(v39) >= 0 )
        v13 = v40;
      v14 = v13 + 3600;
      v42 = v14;
      ExpSetKernelDataProtection(v41, 8LL, 0LL);
      if ( off_1407AC028 )
      {
        v15 = 10800LL;
      }
      else
      {
        v15 = 0LL;
        if ( (int)ExpGetKernelDataProtection(v43) >= 0 )
          v15 = v44;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407ACA60, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_1407ACA60);
      KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      sub_140717FB8();
      if ( v15 > v14 )
      {
        v23 = 0;
      }
      else
      {
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACA60, 0LL);
        if ( Data )
        {
          KernelDataProtection = ExpGetKernelDataProtection(&v33);
          if ( KernelDataProtection < 0 )
          {
            if ( KernelDataProtection == -1073741275 )
            {
              if ( Data )
              {
                *(_QWORD *)&v28 = 0LL;
                memset(&v29, 0, 24);
                DWORD2(v28) = 4;
                v29.m256i_i8[24] = 1;
                v20 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v28);
                v21 = -1;
                if ( v20 )
                  goto LABEL_51;
                if ( (_DWORD)v19 )
                {
                  v22 = 16LL * (unsigned int)v19;
                  v20 = v22 > 0xFFFFFFFF ? 0xC0000095 : 0;
                  if ( v22 <= 0xFFFFFFFF )
                    v20 = ExpLicUpdateChecksum((__int64)&unk_1407AE4B0, v19, &v28);
                  if ( v20 )
                  {
LABEL_51:
                    *(_QWORD *)&v28 = 0LL;
                    v20 = 0;
                    DWORD2(v28) = 4;
                  }
                }
                v33 = v28;
                v34 = v29;
              }
              else
              {
                v20 = -1073741811;
                v21 = -1;
              }
              if ( v20 >= 0 )
              {
                DWORD2(v33) = 4;
                ExpSetKernelDataProtection(&v33, v21, 0LL);
              }
            }
            v17 = 4;
          }
          else
          {
            v17 = DWORD2(v33);
          }
        }
        else
        {
          v17 = dword_1407AC0D4;
        }
        dword_1407AC0D4 = 2;
        v46 = 2;
        v23 = v17 == 0;
        ExpSetKernelDataProtection(v45, 2LL, 0LL);
        v24 = Data;
        if ( off_1407AC028 )
          v24 = off_1407AC028;
        if ( v24 )
          v24[3] |= 1u;
        v47[40] = 0;
        ExpSetKernelDataProtection(v47, 32LL, 0LL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACA60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACA60);
        KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ExpPutLicenseDataIntoRegistry();
        sub_140718008(&KernelLicensingCacheExpired);
        sub_140718264();
      }
      if ( v23 )
        sub_14045EE78();
    }
  }
  while ( _InterlockedExchangeAdd(&ExpOkToTimeRefresh, 0xFFFFFFFF) != 1 );
  v30[1] = -1LL;
  v30[0] = 0LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, ExpTimeRefreshInterval, 0LL, (__int64)v30);
}
