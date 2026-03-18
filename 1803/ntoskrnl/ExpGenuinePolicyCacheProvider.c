/*
 * XREFs of ExpGenuinePolicyCacheProvider @ 0x14054A090
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KeQueryTimeIncrement @ 0x1400A18E0 (KeQueryTimeIncrement.c)
 *     ExpLicUpdateChecksum @ 0x1400A18F0 (ExpLicUpdateChecksum.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExpSetKernelDataProtection @ 0x140548EB4 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14054A388 (ExpGetKernelDataProtection.c)
 *     sub_1405F3CBC @ 0x1405F3CBC (sub_1405F3CBC.c)
 */

__int64 __fastcall ExpGenuinePolicyCacheProvider(int a1, int a2, int a3, int a4, _BYTE *a5)
{
  int v7; // r15d
  int v8; // edi
  bool v9; // si
  __int64 v10; // r14
  __int64 v11; // rbx
  int KernelDataProtection; // eax
  unsigned int v13; // ecx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // bl
  char v19; // al
  unsigned int v20; // edx
  unsigned int updated; // ecx
  unsigned __int64 v22; // rax
  int v23; // eax
  char v24; // si
  __int64 v25; // rbx
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned __int64 v28; // rax
  __int128 v29; // [rsp+38h] [rbp-D0h] BYREF
  __m256i v30; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v31; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+78h] [rbp-90h]
  __int128 v33; // [rsp+88h] [rbp-80h]
  __int128 v34; // [rsp+98h] [rbp-70h] BYREF
  __m256i v35; // [rsp+A8h] [rbp-60h]
  _OWORD v36[3]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v37[16]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v38; // [rsp+110h] [rbp+8h]
  _BYTE v39[8]; // [rsp+130h] [rbp+28h] BYREF
  int v40; // [rsp+138h] [rbp+30h]
  _QWORD v41[6]; // [rsp+160h] [rbp+58h] BYREF
  _BYTE v42[8]; // [rsp+190h] [rbp+88h] BYREF
  int v43; // [rsp+198h] [rbp+90h]
  _BYTE v44[104]; // [rsp+1C0h] [rbp+B8h] BYREF

  v7 = -1073741811;
  v8 = 4;
  if ( off_140861030 )
    goto LABEL_41;
  if ( !Data )
  {
LABEL_43:
    v8 = dword_1408610C8;
    goto LABEL_16;
  }
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1408624E0, 0LL);
  v9 = qword_140862558 == 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1408624E0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1408624E0);
  KeAbPostRelease((ULONG_PTR)&qword_1408624E0);
  if ( !v9 )
  {
    if ( (int)ExpGetKernelDataProtection(v37) < 0 || !v38 || v38 + 900000 <= v38 )
      goto LABEL_19;
    v11 = MEMORY[0xFFFFF78000000320];
    v10 = v38 + 900000;
    if ( v10 <= v11 * KeQueryTimeIncrement() / 10000 )
      v9 = 1;
  }
  if ( !v9 )
    goto LABEL_12;
LABEL_19:
  if ( !off_140861030 )
  {
    if ( !Data )
      goto LABEL_43;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1408624E0, 0LL);
    v18 = qword_140862558 == 0;
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1408624E0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1408624E0, v15, v16, v17);
    KeAbPostRelease((ULONG_PTR)&qword_1408624E0);
    if ( v18 )
    {
      dword_1408610C8 = 5;
      v40 = 5;
      ExpSetKernelDataProtection((__int64)v39, 2, 0);
    }
    else
    {
      if ( Data )
      {
        *(_QWORD *)&v29 = 0LL;
        memset(&v30, 0, 24);
        DWORD2(v29) = 4;
        v30.m256i_i8[24] = 1;
        updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v29);
        if ( !updated )
        {
          if ( v20 )
          {
            v22 = 16LL * v20;
            updated = v22 > 0xFFFFFFFF ? 0xC0000095 : 0;
            if ( v22 <= 0xFFFFFFFF )
              updated = ExpLicUpdateChecksum((__int64)qword_140863E00, 0xFFFFFFFFLL, &v29);
          }
        }
        if ( updated )
        {
          *(_QWORD *)&v29 = 0LL;
          DWORD2(v29) = 4;
        }
        v23 = 0;
        v34 = v29;
        v35 = v30;
      }
      else
      {
        v23 = -1073741811;
      }
      if ( !v23 && (int)ExpGetKernelDataProtection(v41) >= 0 )
      {
        v24 = 4;
        if ( v41[0] != (_QWORD)v34 )
        {
          DWORD2(v34) = 4;
          v24 = 6;
        }
        v25 = MEMORY[0xFFFFF78000000320];
        v35.m256i_i64[0] = v25 * KeQueryTimeIncrement() / 10000;
        ExpSetKernelDataProtection((__int64)&v34, v24, 0);
      }
    }
LABEL_12:
    if ( !off_140861030 )
      goto LABEL_13;
  }
LABEL_41:
  if ( KiQueryUnbiasedInterruptTime() / 0x989680uLL > 0x2A30 )
  {
    dword_1408610C8 = 2;
    v43 = 2;
    ExpSetKernelDataProtection((__int64)v42, 2, 0);
    v44[40] = 0;
    ExpSetKernelDataProtection((__int64)v44, 32, 0);
  }
LABEL_13:
  if ( !Data )
    goto LABEL_43;
  KernelDataProtection = ExpGetKernelDataProtection(v36);
  if ( KernelDataProtection < 0 )
  {
    if ( KernelDataProtection == -1073741275 )
    {
      if ( Data )
      {
        *(_QWORD *)&v31 = 0LL;
        v32 = 0uLL;
        DWORD2(v31) = 4;
        *(_QWORD *)&v33 = 0LL;
        BYTE8(v33) = 1;
        v27 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v31);
        if ( !v27 )
        {
          if ( v26 )
          {
            v28 = 16LL * v26;
            v27 = v28 > 0xFFFFFFFF ? 0xC0000095 : 0;
            if ( v28 <= 0xFFFFFFFF )
              v27 = ExpLicUpdateChecksum((__int64)qword_140863E00, 0xFFFFFFFFLL, &v31);
          }
        }
        if ( v27 )
        {
          *(_QWORD *)&v31 = 0LL;
          DWORD2(v31) = 4;
        }
        v7 = 0;
        v36[0] = v31;
        v36[1] = v32;
        v36[2] = v33;
      }
      if ( v7 >= 0 )
      {
        DWORD2(v36[0]) = 4;
        ExpSetKernelDataProtection((__int64)v36, -1, 0);
      }
    }
  }
  else
  {
    v8 = DWORD2(v36[0]);
  }
LABEL_16:
  if ( v8 )
  {
    *a5 = 1;
    return (unsigned int)sub_1405F3CBC(a1, a2, a3, a4, 0);
  }
  else
  {
    v13 = -1073741772;
    *a5 = 0;
  }
  return v13;
}
