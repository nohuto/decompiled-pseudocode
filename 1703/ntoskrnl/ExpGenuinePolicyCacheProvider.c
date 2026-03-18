/*
 * XREFs of ExpGenuinePolicyCacheProvider @ 0x1404AE480
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryTimeIncrement @ 0x14006B3C0 (KeQueryTimeIncrement.c)
 *     ExpLicUpdateChecksum @ 0x14006B3D0 (ExpLicUpdateChecksum.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExpGetKernelDataProtection @ 0x1404AE3CC (ExpGetKernelDataProtection.c)
 *     ExpSetKernelDataProtection @ 0x1404AE780 (ExpSetKernelDataProtection.c)
 *     sub_140717EA8 @ 0x140717EA8 (sub_140717EA8.c)
 */

__int64 __fastcall ExpGenuinePolicyCacheProvider(int a1, int a2, int a3, int a4, _BYTE *a5)
{
  signed int v7; // esi
  int v8; // edi
  bool v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx
  int KernelDataProtection; // eax
  unsigned int v13; // ecx
  bool v15; // bl
  unsigned int v16; // edx
  unsigned int updated; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int128 v23; // [rsp+38h] [rbp-D0h] BYREF
  __m256i v24; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v26; // [rsp+78h] [rbp-90h]
  __int128 v27; // [rsp+88h] [rbp-80h]
  __int128 v28; // [rsp+98h] [rbp-70h] BYREF
  __m256i v29; // [rsp+A8h] [rbp-60h]
  _OWORD v30[3]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v31; // [rsp+100h] [rbp-8h] BYREF
  __int64 v32; // [rsp+110h] [rbp+8h]
  _BYTE v33[8]; // [rsp+130h] [rbp+28h] BYREF
  int v34; // [rsp+138h] [rbp+30h]
  _OWORD v35[3]; // [rsp+160h] [rbp+58h] BYREF
  _BYTE v36[8]; // [rsp+190h] [rbp+88h] BYREF
  int v37; // [rsp+198h] [rbp+90h]
  _BYTE v38[104]; // [rsp+1C0h] [rbp+B8h] BYREF

  v7 = -1073741811;
  v8 = 4;
  if ( off_1407AC028 )
    goto LABEL_40;
  if ( !Data )
  {
LABEL_42:
    v8 = dword_1407AC0D4;
    goto LABEL_16;
  }
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407ACB28, 0LL);
  v9 = qword_1407ACB98 == 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407ACB28, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407ACB28);
  KeAbPostRelease((ULONG_PTR)&qword_1407ACB28);
  if ( !v9 )
  {
    if ( (int)ExpGetKernelDataProtection(&v31) < 0 || !v32 || v32 + 900000 <= v32 )
      goto LABEL_19;
    v11 = MEMORY[0xFFFFF78000000320];
    v10 = v32 + 900000;
    if ( v10 <= v11 * KeQueryTimeIncrement() / 10000 )
      v9 = 1;
  }
  if ( !v9 )
    goto LABEL_12;
LABEL_19:
  if ( !off_1407AC028 )
  {
    if ( !Data )
      goto LABEL_42;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACB28, 0LL);
    v15 = qword_1407ACB98 == 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACB28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACB28);
    KeAbPostRelease((ULONG_PTR)&qword_1407ACB28);
    if ( v15 )
    {
      dword_1407AC0D4 = 5;
      v34 = 5;
      ExpSetKernelDataProtection(v33, 2LL, 0LL);
    }
    else
    {
      if ( Data )
      {
        *(_QWORD *)&v23 = 0LL;
        memset(&v24, 0, 24);
        DWORD2(v23) = 4;
        v24.m256i_i8[24] = 1;
        updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v23);
        if ( updated )
          goto LABEL_39;
        if ( v16 )
        {
          v18 = 16LL * v16;
          updated = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v18 <= 0xFFFFFFFF )
            updated = ExpLicUpdateChecksum((__int64)&unk_1407AE4B0, 0xFFFFFFFFLL, &v23);
          if ( updated )
          {
LABEL_39:
            *(_QWORD *)&v23 = 0LL;
            updated = 0;
            DWORD2(v23) = 4;
          }
        }
        v28 = v23;
        v29 = v24;
      }
      else
      {
        updated = -1073741811;
      }
      if ( !updated && (int)ExpGetKernelDataProtection(v35) >= 0 )
      {
        v19 = 4;
        if ( *(_QWORD *)&v35[0] != (_QWORD)v28 )
        {
          DWORD2(v28) = 4;
          v19 = 6;
        }
        v20 = MEMORY[0xFFFFF78000000320];
        v29.m256i_i64[0] = v20 * KeQueryTimeIncrement() / 10000;
        ExpSetKernelDataProtection(&v28, v19, 0LL);
      }
    }
LABEL_12:
    if ( !off_1407AC028 )
      goto LABEL_13;
  }
LABEL_40:
  if ( KiQueryUnbiasedInterruptTime() / 0x989680uLL > 0x2A30 )
  {
    dword_1407AC0D4 = 2;
    v37 = 2;
    ExpSetKernelDataProtection(v36, 2LL, 0LL);
    v38[40] = 0;
    ExpSetKernelDataProtection(v38, 32LL, 0LL);
  }
LABEL_13:
  if ( !Data )
    goto LABEL_42;
  KernelDataProtection = ExpGetKernelDataProtection(v30);
  if ( KernelDataProtection < 0 )
  {
    if ( KernelDataProtection == -1073741275 )
    {
      if ( Data )
      {
        *(_QWORD *)&v25 = 0LL;
        v26 = 0uLL;
        DWORD2(v25) = 4;
        *(_QWORD *)&v27 = 0LL;
        BYTE8(v27) = 1;
        v7 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v25);
        if ( v7 )
          goto LABEL_50;
        if ( (_DWORD)v21 )
        {
          v22 = 16LL * (unsigned int)v21;
          v7 = v22 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v22 <= 0xFFFFFFFF )
            v7 = ExpLicUpdateChecksum((__int64)&unk_1407AE4B0, v21, &v25);
          if ( v7 )
          {
LABEL_50:
            *(_QWORD *)&v25 = 0LL;
            v7 = 0;
            DWORD2(v25) = 4;
          }
        }
        v30[0] = v25;
        v30[1] = v26;
        v30[2] = v27;
      }
      if ( v7 >= 0 )
      {
        DWORD2(v30[0]) = 4;
        ExpSetKernelDataProtection(v30, 0xFFFFFFFFLL, 0LL);
      }
    }
  }
  else
  {
    v8 = DWORD2(v30[0]);
  }
LABEL_16:
  if ( v8 )
  {
    *a5 = 1;
    return (unsigned int)sub_140717EA8(a1, a2, a3, a4, 0);
  }
  else
  {
    v13 = -1073741772;
    *a5 = 0;
  }
  return v13;
}
