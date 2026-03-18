/*
 * XREFs of ExpTimeRefreshWork @ 0x140428DB0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeQueryTimeIncrement @ 0x1400B5AF0 (KeQueryTimeIncrement.c)
 *     ExpLicUpdateChecksum @ 0x1400B5B00 (ExpLicUpdateChecksum.c)
 *     ExUpdateSystemTimeFromCmos @ 0x14043A854 (ExUpdateSystemTimeFromCmos.c)
 *     ExAcquireTimeRefreshLock @ 0x14046C524 (ExAcquireTimeRefreshLock.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1404F33D8 (ExpPutLicenseDataIntoRegistry.c)
 *     sub_1404F34C8 @ 0x1404F34C8 (sub_1404F34C8.c)
 *     ExpSetKernelDataProtection @ 0x1404F44AC (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1404F49A0 (ExpGetKernelDataProtection.c)
 *     ExReleaseTimeRefreshLock @ 0x14059F524 (ExReleaseTimeRefreshLock.c)
 *     sub_140757694 @ 0x140757694 (sub_140757694.c)
 *     sub_1407576E4 @ 0x1407576E4 (sub_1407576E4.c)
 *     sub_140757944 @ 0x140757944 (sub_140757944.c)
 */

_BOOL8 __fastcall ExpTimeRefreshWork(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v2; // bl
  char v3; // al
  __int64 v4; // rdx
  unsigned int updated; // ecx
  unsigned __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rbx
  ULONG TimeIncrement; // eax
  __int128 *v10; // rcx
  __int64 v11; // rdx
  char v12; // bl
  struct _KTHREAD *v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  struct _KTHREAD *v18; // rax
  int v19; // eax
  int KernelDataProtection; // eax
  __int64 v21; // rdx
  signed int v22; // ecx
  unsigned int v23; // r9d
  unsigned __int64 v24; // rax
  bool v25; // bl
  _DWORD *v26; // rcx
  __int128 v27; // [rsp+28h] [rbp-E0h] BYREF
  __m256i v28; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v29; // [rsp+58h] [rbp-B0h] BYREF
  __m256i v30; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v31[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v32; // [rsp+98h] [rbp-70h] BYREF
  __m256i v33; // [rsp+A8h] [rbp-60h]
  __int128 v34; // [rsp+C8h] [rbp-40h] BYREF
  __m256i v35; // [rsp+D8h] [rbp-30h]
  char v36; // [rsp+F8h] [rbp-10h] BYREF
  int v37; // [rsp+100h] [rbp-8h]
  __int64 v38[6]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v39[48]; // [rsp+158h] [rbp+50h] BYREF
  char v40[24]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v41; // [rsp+1A0h] [rbp+98h]
  char v42[24]; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned __int64 v43; // [rsp+1D0h] [rbp+C8h]
  char v44[32]; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned __int64 v45; // [rsp+208h] [rbp+100h]
  char v46[8]; // [rsp+218h] [rbp+110h] BYREF
  int v47; // [rsp+220h] [rbp+118h]
  _BYTE v48[48]; // [rsp+248h] [rbp+140h] BYREF

  do
  {
    LOBYTE(a1) = 1;
    ExAcquireTimeRefreshLock(a1);
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0LL, 0LL);
    ExReleaseTimeRefreshLock();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    if ( off_1407F3028 )
    {
LABEL_33:
      v12 = 0;
      goto LABEL_23;
    }
    if ( Data )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3B98, 0LL);
      v2 = qword_1407F3C18 == 0;
      v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3B98, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3B98);
      KeAbPostRelease((ULONG_PTR)&qword_1407F3B98);
      if ( v2 )
      {
        v10 = (__int128 *)&v36;
        dword_1407F30C8 = 5;
        v37 = 5;
        v11 = 2LL;
LABEL_19:
        ExpSetKernelDataProtection(v10, v11, 0LL);
        goto LABEL_20;
      }
      if ( Data )
      {
        *(_QWORD *)&v27 = 0LL;
        memset(&v28, 0, 24);
        DWORD2(v27) = 4;
        v28.m256i_i8[24] = 1;
        updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v27);
        if ( updated )
          goto LABEL_31;
        if ( (_DWORD)v4 )
        {
          v6 = 16LL * (unsigned int)v4;
          updated = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v6 <= 0xFFFFFFFF )
            updated = ExpLicUpdateChecksum((__int64)&unk_1407F54A0, v4, &v27);
          if ( updated )
          {
LABEL_31:
            *(_QWORD *)&v27 = 0LL;
            updated = 0;
            DWORD2(v27) = 4;
          }
        }
        v32 = v27;
        v33 = v28;
      }
      else
      {
        updated = -1073741811;
      }
      if ( !updated && (int)ExpGetKernelDataProtection(v38) >= 0 )
      {
        v7 = 4;
        if ( v38[0] != (_QWORD)v32 )
        {
          DWORD2(v32) = 4;
          v7 = 6;
        }
        v8 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v10 = &v32;
        v33.m256i_i64[0] = v8 * TimeIncrement / 10000;
        v11 = v7;
        goto LABEL_19;
      }
    }
LABEL_20:
    if ( off_1407F3028 )
      goto LABEL_33;
    v12 = 1;
    if ( (int)ExpGetKernelDataProtection(v39) >= 0 )
      v12 = v39[40];
LABEL_23:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3AE0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1407F3AE0);
    KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v12 == 1 )
    {
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
      v15 = 0LL;
      if ( (int)ExpGetKernelDataProtection(v40) >= 0 )
        v15 = v41;
      v16 = v15 + 3600;
      v43 = v16;
      ExpSetKernelDataProtection(v42, 8LL, 0LL);
      if ( off_1407F3028 )
      {
        v17 = 10800LL;
      }
      else
      {
        v17 = 0LL;
        if ( (int)ExpGetKernelDataProtection(v44) >= 0 )
          v17 = v45;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3AE0, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_1407F3AE0);
      KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      sub_140757694();
      if ( v17 > v16 )
      {
        v25 = 0;
      }
      else
      {
        v18 = KeGetCurrentThread();
        --v18->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
        if ( Data )
        {
          KernelDataProtection = ExpGetKernelDataProtection(&v34);
          if ( KernelDataProtection < 0 )
          {
            if ( KernelDataProtection == -1073741275 )
            {
              if ( Data )
              {
                *(_QWORD *)&v29 = 0LL;
                memset(&v30, 0, 24);
                DWORD2(v29) = 4;
                v30.m256i_i8[24] = 1;
                v22 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v29);
                v23 = -1;
                if ( v22 )
                  goto LABEL_54;
                if ( (_DWORD)v21 )
                {
                  v24 = 16LL * (unsigned int)v21;
                  v22 = v24 > 0xFFFFFFFF ? 0xC0000095 : 0;
                  if ( v24 <= 0xFFFFFFFF )
                    v22 = ExpLicUpdateChecksum((__int64)&unk_1407F54A0, v21, &v29);
                  if ( v22 )
                  {
LABEL_54:
                    *(_QWORD *)&v29 = 0LL;
                    v22 = 0;
                    DWORD2(v29) = 4;
                  }
                }
                v34 = v29;
                v35 = v30;
              }
              else
              {
                v22 = -1073741811;
                v23 = -1;
              }
              if ( v22 >= 0 )
              {
                DWORD2(v34) = 4;
                ExpSetKernelDataProtection(&v34, v23, 0LL);
              }
            }
            v19 = 4;
          }
          else
          {
            v19 = DWORD2(v34);
          }
        }
        else
        {
          v19 = dword_1407F30C8;
        }
        dword_1407F30C8 = 2;
        v47 = 2;
        v25 = v19 == 0;
        ExpSetKernelDataProtection(v46, 2LL, 0LL);
        v26 = Data;
        if ( off_1407F3028 )
          v26 = off_1407F3028;
        if ( v26 )
          v26[3] |= 1u;
        v48[40] = 0;
        ExpSetKernelDataProtection(v48, 32LL, 0LL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3AE0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3AE0);
        KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ExpPutLicenseDataIntoRegistry();
        sub_1407576E4(&KernelLicensingCacheExpired);
        sub_140757944();
      }
      if ( v25 )
        sub_1404F34C8();
    }
  }
  while ( _InterlockedExchangeAdd(&ExpOkToTimeRefresh, 0xFFFFFFFF) != 1 );
  v31[1] = -1LL;
  v31[0] = 0LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, ExpTimeRefreshInterval, 0LL, (__int64)v31);
}
