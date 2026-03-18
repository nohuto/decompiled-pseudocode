/*
 * XREFs of ExQueryLicenseValueInternal @ 0x140537F50
 * Callers:
 *     NtQueryLicenseValue @ 0x140537C90 (NtQueryLicenseValue.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     sub_1400E3590 @ 0x1400E3590 (sub_1400E3590.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14053856C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExpGetSubscriptionPfn @ 0x140757714 (ExpGetSubscriptionPfn.c)
 */

__int64 __fastcall ExQueryLicenseValueInternal(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  wchar_t *v6; // rcx
  int v7; // r14d
  int v8; // r15d
  unsigned int v9; // esi
  _WORD *v10; // rcx
  unsigned __int16 v11; // r12
  __int64 (**v12)[10]; // rdi
  __int64 (**v13)[10]; // rbx
  unsigned __int16 v14; // dx
  __int64 *v15; // r10
  char v16; // r8
  __int64 *v17; // r12
  unsigned int *v18; // rbx
  unsigned int v19; // esi
  int v20; // eax
  int v21; // r13d
  unsigned int v22; // ebx
  _WORD *v23; // r15
  unsigned __int16 v24; // si
  unsigned __int16 v25; // ax
  _WORD *v27; // r8
  __int64 v28; // r10
  __int64 v29; // r9
  _WORD *v30; // r8
  __int64 v31; // r10
  __int64 v32; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v34; // r15d
  wchar_t *PoolWithTag; // rax
  size_t v36; // r8
  const void *v37; // rdx
  wchar_t *v38; // r13
  unsigned int v39; // ebx
  const wchar_t **v40; // rsi
  unsigned int v41; // ebx
  int v42; // eax
  struct _KTHREAD *v43; // rax
  _BYTE v44[4]; // [rsp+60h] [rbp-1B8h] BYREF
  int v45; // [rsp+64h] [rbp-1B4h]
  char v46; // [rsp+68h] [rbp-1B0h]
  unsigned int v47; // [rsp+6Ch] [rbp-1ACh]
  wchar_t *Str1; // [rsp+70h] [rbp-1A8h]
  int v49; // [rsp+78h] [rbp-1A0h]
  unsigned int *v50; // [rsp+80h] [rbp-198h]
  int v51; // [rsp+88h] [rbp-190h] BYREF
  __int64 v52; // [rsp+90h] [rbp-188h]
  __int64 v53; // [rsp+98h] [rbp-180h]
  char v54[8]; // [rsp+A0h] [rbp-178h] BYREF
  _WORD *v55; // [rsp+A8h] [rbp-170h]
  unsigned int v56; // [rsp+B0h] [rbp-168h]
  int v57; // [rsp+B8h] [rbp-160h]
  __int64 *v58; // [rsp+C0h] [rbp-158h]
  __int64 v59; // [rsp+C8h] [rbp-150h]
  _QWORD v60[2]; // [rsp+D0h] [rbp-148h] BYREF
  char v61[16]; // [rsp+E0h] [rbp-138h] BYREF
  unsigned __int16 *v62; // [rsp+F0h] [rbp-128h]
  __int64 v63; // [rsp+F8h] [rbp-120h]
  _QWORD v64[5]; // [rsp+108h] [rbp-110h] BYREF
  _BYTE Buf1[80]; // [rsp+130h] [rbp-E8h] BYREF
  _BYTE v66[80]; // [rsp+180h] [rbp-98h] BYREF

  v47 = a4;
  v52 = a3;
  v53 = a2;
  v62 = a1;
  v63 = a2;
  v60[1] = a3;
  v56 = a4;
  v50 = a5;
  v45 = 0;
  v54[0] = 0;
  v6 = 0LL;
  v55 = 0LL;
  v44[0] = 0;
  Str1 = 0LL;
  v59 = 0LL;
  v60[0] = 0LL;
  if ( !a1 || !a5 || (v49 = 0, v45 = 0, !*((_QWORD *)a1 + 1)) || *a1 < 2u )
  {
    v21 = -1073741811;
    v45 = -1073741811;
    goto LABEL_22;
  }
  v54[0] = 1;
  v55 = a1;
  v57 = ExpLoadAndSortLicensingCacheDescriptors();
  v58 = 0LL;
  v46 = 0;
  v7 = 1;
  v8 = 1;
  v9 = 0;
  v10 = a1;
  v11 = *a1;
  v12 = &off_14078C6D0;
  v13 = &off_14078C6D0;
  while ( 1 )
  {
    v14 = *((_WORD *)v13 + 4);
    if ( v11 == v14 )
      break;
    v8 += v14;
LABEL_8:
    ++v9;
    v13 += 5;
    if ( v9 >= 0xC )
    {
      v15 = v58;
      v16 = (char)v58;
      goto LABEL_10;
    }
  }
  if ( v11 >> 1 )
  {
    v27 = Buf1;
    v28 = *((_QWORD *)v10 + 1) - (_QWORD)Buf1;
    v29 = v11 >> 1;
    do
    {
      *v27 = *(_WORD *)((char *)v27 + v28) ^ ((v8 + 1) | ((_WORD)v8 << 8) | 0x5555);
      v8 += 2;
      ++v27;
      --v29;
    }
    while ( v29 );
  }
  if ( memcmp(Buf1, *v13, v14) )
  {
    v10 = v55;
    goto LABEL_8;
  }
  v15 = (__int64 *)v13[2];
  v58 = v15;
  v16 = *((_BYTE *)v13 + 32);
  v46 = v16;
LABEL_10:
  if ( v15 )
  {
    if ( v16 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
      v15 = v58;
    }
    v18 = v50;
    v19 = v47;
    v49 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned int *, _BYTE *))v15)(v53, v52, v47, v50, v44);
    v45 = v49;
    v17 = 0LL;
    if ( v46 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3AE0, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_1407F3AE0);
      KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v49 = v45;
    }
  }
  else
  {
    v17 = 0LL;
    v18 = v50;
    v19 = v47;
  }
  if ( v44[0] )
  {
    v21 = v49;
    if ( v49 >= 0 && *v18 > v19 )
    {
      v21 = -1073741789;
      v45 = -1073741789;
    }
    v6 = Str1;
    goto LABEL_22;
  }
  v20 = v57;
  if ( v57 < 0 )
    goto LABEL_51;
  v45 = 0;
  v51 = 0;
  v45 = sub_1400E3590((__int64)&qword_14078CF90, 0LL, (__int64)&v51, 4u, (__int64)v61);
  if ( v51 && qword_1407F33B8 )
  {
    v34 = *a1 + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v34, 0x20534C53u);
    v6 = PoolWithTag;
    Str1 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v21 = -1073741801;
      v45 = -1073741801;
      goto LABEL_22;
    }
    memset(PoolWithTag, 0, v34);
    v36 = *a1;
    v37 = (const void *)*((_QWORD *)a1 + 1);
    v38 = Str1;
    memmove(Str1, v37, v36);
    v64[0] = L"Security-SPP-GenuineLocalStatus";
    v64[1] = L"Security-SPP-Action-StateData";
    v64[2] = L"Security-SPP-LastWindowsActivationHResult";
    v64[3] = L"Security-SPP-LastWindowsActivationTime";
    v39 = 0;
    v40 = (const wchar_t **)v64;
    while ( wcsicmp(v38, *v40) )
    {
      ++v39;
      ++v40;
      if ( v39 >= 4 )
      {
        ExpGetSubscriptionPfn(v60);
        v41 = v47;
        v42 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, wchar_t *, unsigned int, __int64, unsigned int, unsigned int *, __int64, _QWORD))qword_1407F33B8)(
                v60[0],
                0LL,
                0LL,
                0LL,
                v38,
                v34,
                v52,
                v47,
                v50,
                v53,
                0LL);
        if ( (int)(v42 + 0x80000000) >= 0 && v42 != -1073741789 )
          break;
        if ( !v41 )
          v42 = -1073741789;
        v21 = v42;
        v45 = v42;
        goto LABEL_16;
      }
    }
  }
  v21 = sub_1400E3590((__int64)v54, v53, v52, v47, (__int64)v50);
  v45 = v21;
  if ( v21 == -1073741762 )
  {
    v43 = KeGetCurrentThread();
    --v43->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    BYTE1(NlsMbCodePageTag) = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3AE0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3AE0);
    KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v21 = v45;
  }
LABEL_16:
  v22 = 0;
  v23 = v55;
  v24 = *v55;
  while ( 2 )
  {
    v25 = *((_WORD *)v12 + 4);
    if ( v24 != v25 )
    {
      v7 += v25;
      goto LABEL_19;
    }
    if ( v24 >> 1 )
    {
      v30 = v66;
      v31 = *((_QWORD *)v23 + 1) - (_QWORD)v66;
      v32 = v24 >> 1;
      do
      {
        *v30 = *(_WORD *)((char *)v30 + v31) ^ ((v7 + 1) | ((_WORD)v7 << 8) | 0x5555);
        v7 += 2;
        ++v30;
        --v32;
      }
      while ( v32 );
      v23 = v55;
    }
    if ( memcmp(v66, *v12, v25) )
    {
LABEL_19:
      ++v22;
      v12 += 5;
      if ( v22 >= 0xC )
        goto LABEL_20;
      continue;
    }
    break;
  }
  v17 = (__int64 *)v12[3];
LABEL_20:
  if ( v17 && (v21 >= 0 || v21 == -1073741772 || v21 == -1073741275) )
  {
    v20 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned int *, _BYTE *))v17)(v53, v52, v47, v50, v44);
    if ( v44[0] )
    {
LABEL_51:
      v21 = v20;
      v45 = v20;
    }
  }
  v6 = Str1;
LABEL_22:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v21;
}
