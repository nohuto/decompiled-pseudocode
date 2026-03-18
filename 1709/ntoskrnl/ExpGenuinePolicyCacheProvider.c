/*
 * XREFs of ExpGenuinePolicyCacheProvider @ 0x1404F46A0
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeQueryTimeIncrement @ 0x1400B5AF0 (KeQueryTimeIncrement.c)
 *     ExpLicUpdateChecksum @ 0x1400B5B00 (ExpLicUpdateChecksum.c)
 *     ExpSetKernelDataProtection @ 0x1404F44AC (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1404F49A0 (ExpGetKernelDataProtection.c)
 *     sub_140757628 @ 0x140757628 (sub_140757628.c)
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
  char v16; // al
  unsigned int v17; // edx
  unsigned int updated; // ecx
  unsigned __int64 v19; // rax
  char v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int128 v24; // [rsp+38h] [rbp-D0h] BYREF
  __m256i v25; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v26; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+78h] [rbp-90h]
  __int128 v28; // [rsp+88h] [rbp-80h]
  __int128 v29; // [rsp+98h] [rbp-70h] BYREF
  __m256i v30; // [rsp+A8h] [rbp-60h]
  _OWORD v31[3]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v32[16]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v33; // [rsp+110h] [rbp+8h]
  _BYTE v34[8]; // [rsp+130h] [rbp+28h] BYREF
  int v35; // [rsp+138h] [rbp+30h]
  _QWORD v36[6]; // [rsp+160h] [rbp+58h] BYREF
  _BYTE v37[8]; // [rsp+190h] [rbp+88h] BYREF
  int v38; // [rsp+198h] [rbp+90h]
  _BYTE v39[104]; // [rsp+1C0h] [rbp+B8h] BYREF

  v7 = -1073741811;
  v8 = 4;
  if ( off_1407F3028 )
    goto LABEL_41;
  if ( !Data )
  {
LABEL_43:
    v8 = dword_1407F30C8;
    goto LABEL_16;
  }
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3B98, 0LL);
  v9 = qword_1407F3C18 == 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3B98, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407F3B98);
  KeAbPostRelease((ULONG_PTR)&qword_1407F3B98);
  if ( !v9 )
  {
    if ( (int)ExpGetKernelDataProtection(v32) < 0 || !v33 || v33 + 900000 <= v33 )
      goto LABEL_19;
    v11 = MEMORY[0xFFFFF78000000320];
    v10 = v33 + 900000;
    if ( v10 <= v11 * KeQueryTimeIncrement() / 10000 )
      v9 = 1;
  }
  if ( !v9 )
    goto LABEL_12;
LABEL_19:
  if ( !off_1407F3028 )
  {
    if ( !Data )
      goto LABEL_43;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3B98, 0LL);
    v15 = qword_1407F3C18 == 0;
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3B98, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3B98);
    KeAbPostRelease((ULONG_PTR)&qword_1407F3B98);
    if ( v15 )
    {
      dword_1407F30C8 = 5;
      v35 = 5;
      ExpSetKernelDataProtection((__int64)v34, 2, 0);
    }
    else
    {
      if ( Data )
      {
        *(_QWORD *)&v24 = 0LL;
        memset(&v25, 0, 24);
        DWORD2(v24) = 4;
        v25.m256i_i8[24] = 1;
        updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v24);
        if ( updated )
          goto LABEL_40;
        if ( v17 )
        {
          v19 = 16LL * v17;
          updated = v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v19 <= 0xFFFFFFFF )
            updated = ExpLicUpdateChecksum((__int64)qword_1407F54A0, 0xFFFFFFFFLL, &v24);
          if ( updated )
          {
LABEL_40:
            *(_QWORD *)&v24 = 0LL;
            updated = 0;
            DWORD2(v24) = 4;
          }
        }
        v29 = v24;
        v30 = v25;
      }
      else
      {
        updated = -1073741811;
      }
      if ( !updated && (int)ExpGetKernelDataProtection(v36) >= 0 )
      {
        v20 = 4;
        if ( v36[0] != (_QWORD)v29 )
        {
          DWORD2(v29) = 4;
          v20 = 6;
        }
        v21 = MEMORY[0xFFFFF78000000320];
        v30.m256i_i64[0] = v21 * KeQueryTimeIncrement() / 10000;
        ExpSetKernelDataProtection((__int64)&v29, v20, 0);
      }
    }
LABEL_12:
    if ( !off_1407F3028 )
      goto LABEL_13;
  }
LABEL_41:
  if ( KiQueryUnbiasedInterruptTime() / 0x989680uLL > 0x2A30 )
  {
    dword_1407F30C8 = 2;
    v38 = 2;
    ExpSetKernelDataProtection((__int64)v37, 2, 0);
    v39[40] = 0;
    ExpSetKernelDataProtection((__int64)v39, 32, 0);
  }
LABEL_13:
  if ( !Data )
    goto LABEL_43;
  KernelDataProtection = ExpGetKernelDataProtection(v31);
  if ( KernelDataProtection < 0 )
  {
    if ( KernelDataProtection == -1073741275 )
    {
      if ( Data )
      {
        *(_QWORD *)&v26 = 0LL;
        v27 = 0uLL;
        DWORD2(v26) = 4;
        *(_QWORD *)&v28 = 0LL;
        BYTE8(v28) = 1;
        v7 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v26);
        if ( v7 )
          goto LABEL_51;
        if ( (_DWORD)v22 )
        {
          v23 = 16LL * (unsigned int)v22;
          v7 = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v23 <= 0xFFFFFFFF )
            v7 = ExpLicUpdateChecksum((__int64)qword_1407F54A0, v22, &v26);
          if ( v7 )
          {
LABEL_51:
            *(_QWORD *)&v26 = 0LL;
            v7 = 0;
            DWORD2(v26) = 4;
          }
        }
        v31[0] = v26;
        v31[1] = v27;
        v31[2] = v28;
      }
      if ( v7 >= 0 )
      {
        DWORD2(v31[0]) = 4;
        ExpSetKernelDataProtection((__int64)v31, -1, 0);
      }
    }
  }
  else
  {
    v8 = DWORD2(v31[0]);
  }
LABEL_16:
  if ( v8 )
  {
    *a5 = 1;
    return (unsigned int)sub_140757628(a1, a2, a3, a4, 0);
  }
  else
  {
    v13 = -1073741772;
    *a5 = 0;
  }
  return v13;
}
