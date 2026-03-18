/*
 * XREFs of ExpTimeRefreshWork @ 0x1404777B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeQueryTimeIncrement @ 0x1400A18E0 (KeQueryTimeIncrement.c)
 *     ExpLicUpdateChecksum @ 0x1400A18F0 (ExpLicUpdateChecksum.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExUpdateSystemTimeFromCmos @ 0x14047140C (ExUpdateSystemTimeFromCmos.c)
 *     ExReleaseTimeRefreshLock @ 0x14048C07C (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x14048DB94 (ExAcquireTimeRefreshLock.c)
 *     ExpSetKernelDataProtection @ 0x140548EB4 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14054A388 (ExpGetKernelDataProtection.c)
 *     sub_14054B65C @ 0x14054B65C (sub_14054B65C.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x14054B684 (ExpPutLicenseDataIntoRegistry.c)
 *     sub_1407BE3D4 @ 0x1407BE3D4 (sub_1407BE3D4.c)
 *     sub_1407BE424 @ 0x1407BE424 (sub_1407BE424.c)
 *     sub_1407BE6B4 @ 0x1407BE6B4 (sub_1407BE6B4.c)
 */

_BOOL8 __fastcall ExpTimeRefreshWork(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  bool v5; // bl
  char v6; // al
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned int updated; // ecx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  __int128 *v14; // rcx
  __int64 v15; // rdx
  char v16; // bl
  struct _KTHREAD *v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rbx
  struct _KTHREAD *v22; // rax
  int v23; // eax
  int KernelDataProtection; // eax
  unsigned int v25; // edx
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // ecx
  int v29; // eax
  bool v30; // bl
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int128 v35; // [rsp+28h] [rbp-E0h] BYREF
  __m256i v36; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v37; // [rsp+58h] [rbp-B0h] BYREF
  __m256i v38; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v39[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v40; // [rsp+98h] [rbp-70h] BYREF
  __m256i v41; // [rsp+A8h] [rbp-60h]
  __int128 v42; // [rsp+C8h] [rbp-40h] BYREF
  __m256i v43; // [rsp+D8h] [rbp-30h]
  char v44; // [rsp+F8h] [rbp-10h] BYREF
  int v45; // [rsp+100h] [rbp-8h]
  __int64 v46[6]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v47[48]; // [rsp+158h] [rbp+50h] BYREF
  char v48[24]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v49; // [rsp+1A0h] [rbp+98h]
  char v50[24]; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned __int64 v51; // [rsp+1D0h] [rbp+C8h]
  char v52[32]; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned __int64 v53; // [rsp+208h] [rbp+100h]
  char v54[8]; // [rsp+218h] [rbp+110h] BYREF
  int v55; // [rsp+220h] [rbp+118h]
  _BYTE v56[48]; // [rsp+248h] [rbp+140h] BYREF

  do
  {
    LOBYTE(a1) = 1;
    ExAcquireTimeRefreshLock(a1);
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0, 0);
    ExReleaseTimeRefreshLock();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140862420, 0LL);
    if ( off_140861030 )
    {
LABEL_33:
      v16 = 0;
      goto LABEL_23;
    }
    if ( Data )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1408624E0, 0LL);
      v5 = qword_140862558 == 0;
      v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1408624E0, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1408624E0, v2, v3, v4);
      KeAbPostRelease((ULONG_PTR)&qword_1408624E0);
      if ( v5 )
      {
        v14 = (__int128 *)&v44;
        dword_1408610C8 = 5;
        v45 = 5;
        v15 = 2LL;
LABEL_19:
        ExpSetKernelDataProtection(v14, v15, 0LL);
        goto LABEL_20;
      }
      if ( Data )
      {
        *(_QWORD *)&v35 = 0LL;
        memset(&v36, 0, 24);
        DWORD2(v35) = 4;
        v36.m256i_i8[24] = 1;
        if ( (unsigned int)ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v35) )
          goto LABEL_31;
        if ( (_DWORD)v7 )
        {
          v8 = 16LL * (unsigned int)v7;
          updated = v8 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v8 <= 0xFFFFFFFF )
            updated = ExpLicUpdateChecksum((__int64)&unk_140863E00, v7, &v35);
          if ( updated )
          {
LABEL_31:
            *(_QWORD *)&v35 = 0LL;
            DWORD2(v35) = 4;
          }
        }
        v10 = 0;
        v40 = v35;
        v41 = v36;
      }
      else
      {
        v10 = -1073741811;
      }
      if ( !v10 && (int)ExpGetKernelDataProtection(v46) >= 0 )
      {
        v11 = 4;
        if ( v46[0] != (_QWORD)v40 )
        {
          DWORD2(v40) = 4;
          v11 = 6;
        }
        v12 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v14 = &v40;
        v41.m256i_i64[0] = v12 * TimeIncrement / 10000;
        v15 = v11;
        goto LABEL_19;
      }
    }
LABEL_20:
    if ( off_140861030 )
      goto LABEL_33;
    v16 = 1;
    if ( (int)ExpGetKernelDataProtection(v47) >= 0 )
      v16 = v47[40];
LABEL_23:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140862420, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140862420);
    KeAbPostRelease((ULONG_PTR)&qword_140862420);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v16 == 1 )
    {
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140862420, 0LL);
      v19 = 0LL;
      if ( (int)ExpGetKernelDataProtection(v48) >= 0 )
        v19 = v49;
      v20 = v19 + 3600;
      v51 = v20;
      ExpSetKernelDataProtection(v50, 8LL, 0LL);
      if ( off_140861030 )
      {
        v21 = 10800LL;
      }
      else
      {
        v21 = 0LL;
        if ( (int)ExpGetKernelDataProtection(v52) >= 0 )
          v21 = v53;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140862420, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140862420);
      KeAbPostRelease((ULONG_PTR)&qword_140862420);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      sub_1407BE3D4();
      if ( v21 <= v20 )
      {
        v22 = KeGetCurrentThread();
        --v22->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140862420, 0LL);
        if ( !Data )
        {
          v23 = dword_1408610C8;
          goto LABEL_63;
        }
        KernelDataProtection = ExpGetKernelDataProtection(&v42);
        if ( KernelDataProtection >= 0 )
        {
          v23 = DWORD2(v42);
          goto LABEL_63;
        }
        if ( KernelDataProtection != -1073741275 )
          goto LABEL_62;
        if ( !Data )
        {
          v29 = -1073741811;
          v27 = 0xFFFFFFFFLL;
          goto LABEL_60;
        }
        *(_QWORD *)&v37 = 0LL;
        memset(&v38, 0, 24);
        DWORD2(v37) = 4;
        v38.m256i_i8[24] = 1;
        if ( (unsigned int)ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v37) )
        {
          v27 = 0xFFFFFFFFLL;
        }
        else
        {
          if ( !v25 )
          {
            v27 = 0xFFFFFFFFLL;
            goto LABEL_58;
          }
          v26 = v25;
          v27 = 0xFFFFFFFFLL;
          v26 *= 16LL;
          v28 = v26 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v26 <= 0xFFFFFFFF )
            v28 = ExpLicUpdateChecksum((__int64)&unk_140863E00, 0xFFFFFFFFLL, &v37);
          if ( !v28 )
          {
LABEL_58:
            v29 = 0;
            v42 = v37;
            v43 = v38;
LABEL_60:
            if ( v29 >= 0 )
            {
              DWORD2(v42) = 4;
              ExpSetKernelDataProtection(&v42, v27, 0LL);
            }
LABEL_62:
            v23 = 4;
LABEL_63:
            dword_1408610C8 = 2;
            v55 = 2;
            v30 = v23 == 0;
            ExpSetKernelDataProtection(v54, 2LL, 0LL);
            v31 = Data;
            if ( off_140861030 )
              v31 = off_140861030;
            if ( v31 )
              v31[3] |= 1u;
            v56[40] = 0;
            ExpSetKernelDataProtection(v56, 32LL, 0LL);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140862420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_140862420, v32, v33, v34);
            KeAbPostRelease((ULONG_PTR)&qword_140862420);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            ExpPutLicenseDataIntoRegistry();
            sub_1407BE424(&KernelLicensingCacheExpired);
            sub_1407BE6B4();
LABEL_71:
            if ( v30 )
              sub_14054B65C();
            continue;
          }
        }
        *(_QWORD *)&v37 = 0LL;
        DWORD2(v37) = 4;
        goto LABEL_58;
      }
      v30 = 0;
      goto LABEL_71;
    }
  }
  while ( _InterlockedExchangeAdd(&ExpOkToTimeRefresh, 0xFFFFFFFF) != 1 );
  v39[1] = -1LL;
  v39[0] = 0LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, ExpTimeRefreshInterval, 0LL, (__int64)v39);
}
