/*
 * XREFs of ExQueryLicenseValueInternal @ 0x1404A7FE0
 * Callers:
 *     NtQueryLicenseValue @ 0x1404A7D10 (NtQueryLicenseValue.c)
 * Callees:
 *     sub_14006B210 @ 0x14006B210 (sub_14006B210.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1404A85DC (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExpGetSubscriptionPfn @ 0x140718038 (ExpGetSubscriptionPfn.c)
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
  __int64 *v15; // rcx
  __int64 *v16; // r12
  unsigned int *v17; // rbx
  unsigned int v18; // esi
  int v19; // eax
  int v20; // r13d
  unsigned int v21; // ebx
  _WORD *v22; // r15
  unsigned __int16 v23; // si
  unsigned __int16 v24; // ax
  _WORD *v26; // r8
  __int64 v27; // r10
  __int64 v28; // r9
  _WORD *v29; // r8
  __int64 v30; // r10
  __int64 v31; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v33; // r15d
  wchar_t *PoolWithTag; // rax
  size_t v35; // r8
  const void *v36; // rdx
  wchar_t *v37; // r13
  unsigned int v38; // ebx
  const wchar_t **v39; // rsi
  unsigned int v40; // ebx
  int v41; // eax
  struct _KTHREAD *v42; // rax
  _BYTE v43[4]; // [rsp+60h] [rbp-1B8h] BYREF
  int v44; // [rsp+64h] [rbp-1B4h]
  unsigned int v45; // [rsp+6Ch] [rbp-1ACh]
  wchar_t *Str1; // [rsp+70h] [rbp-1A8h]
  unsigned int *v47; // [rsp+78h] [rbp-1A0h]
  int v48; // [rsp+80h] [rbp-198h]
  int v49; // [rsp+84h] [rbp-194h] BYREF
  __int64 v50; // [rsp+88h] [rbp-190h]
  __int64 v51; // [rsp+90h] [rbp-188h]
  char v52[8]; // [rsp+98h] [rbp-180h] BYREF
  _WORD *v53; // [rsp+A0h] [rbp-178h]
  unsigned int v54; // [rsp+A8h] [rbp-170h]
  int v55; // [rsp+B0h] [rbp-168h]
  __int64 *v56; // [rsp+B8h] [rbp-160h]
  __int64 v57; // [rsp+C0h] [rbp-158h]
  _QWORD v58[2]; // [rsp+C8h] [rbp-150h] BYREF
  char v59[16]; // [rsp+D8h] [rbp-140h] BYREF
  unsigned __int16 *v60; // [rsp+E8h] [rbp-130h]
  __int64 v61; // [rsp+F0h] [rbp-128h]
  __int64 *v62; // [rsp+100h] [rbp-118h]
  _QWORD v63[5]; // [rsp+108h] [rbp-110h] BYREF
  _BYTE Buf1[80]; // [rsp+130h] [rbp-E8h] BYREF
  _BYTE v65[80]; // [rsp+180h] [rbp-98h] BYREF

  v45 = a4;
  v50 = a3;
  v51 = a2;
  v60 = a1;
  v61 = a2;
  v58[1] = a3;
  v54 = a4;
  v47 = a5;
  v44 = 0;
  v52[0] = 0;
  v6 = 0LL;
  v53 = 0LL;
  v43[0] = 0;
  Str1 = 0LL;
  v57 = 0LL;
  v58[0] = 0LL;
  if ( !a1 || !a5 || (v48 = 0, v44 = 0, !*((_QWORD *)a1 + 1)) || *a1 < 2u )
  {
    v20 = -1073741811;
    v44 = -1073741811;
    goto LABEL_22;
  }
  v52[0] = 1;
  v53 = a1;
  v55 = ExpLoadAndSortLicensingCacheDescriptors();
  v56 = 0LL;
  v7 = 1;
  v8 = 1;
  v9 = 0;
  v10 = a1;
  v11 = *a1;
  v12 = &off_140749F70;
  v13 = &off_140749F70;
  while ( 1 )
  {
    v14 = *((_WORD *)v13 + 4);
    if ( v11 == v14 )
      break;
    v8 += v14;
LABEL_8:
    ++v9;
    v13 += 4;
    if ( v9 >= 0xC )
    {
      v15 = v56;
      goto LABEL_10;
    }
  }
  if ( v11 >> 1 )
  {
    v26 = Buf1;
    v27 = *((_QWORD *)v10 + 1) - (_QWORD)Buf1;
    v28 = v11 >> 1;
    do
    {
      *v26 = *(_WORD *)((char *)v26 + v27) ^ ((v8 + 1) | ((_WORD)v8 << 8) | 0x5555);
      v8 += 2;
      ++v26;
      --v28;
    }
    while ( v28 );
  }
  if ( memcmp(Buf1, *v13, v14) )
  {
    v10 = v53;
    goto LABEL_8;
  }
  v15 = (__int64 *)v13[2];
  v56 = v15;
LABEL_10:
  v62 = v15;
  if ( v15 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    v17 = v47;
    v18 = v45;
    v44 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned int *, _BYTE *))v56)(v51, v50, v45, v47, v43);
    v16 = 0LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407ACA60, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1407ACA60);
    KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v48 = v44;
  }
  else
  {
    v16 = 0LL;
    v17 = v47;
    v18 = v45;
  }
  if ( v43[0] )
  {
    v20 = v48;
    if ( v48 >= 0 && *v17 > v18 )
    {
      v20 = -1073741789;
      v44 = -1073741789;
    }
    v6 = Str1;
    goto LABEL_22;
  }
  v19 = v55;
  if ( v55 < 0 )
    goto LABEL_48;
  v44 = 0;
  v49 = 0;
  v44 = sub_14006B210((__int64)&qword_14074A7B0, 0LL, (__int64)&v49, 4u, (__int64)v59);
  if ( v49 && qword_1407AC3C8 )
  {
    v33 = *a1 + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v33, 0x20534C53u);
    v6 = PoolWithTag;
    Str1 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v20 = -1073741801;
      v44 = -1073741801;
      goto LABEL_22;
    }
    memset(PoolWithTag, 0, v33);
    v35 = *a1;
    v36 = (const void *)*((_QWORD *)a1 + 1);
    v37 = Str1;
    memmove(Str1, v36, v35);
    v63[0] = L"Security-SPP-GenuineLocalStatus";
    v63[1] = L"Security-SPP-Action-StateData";
    v63[2] = L"Security-SPP-LastWindowsActivationHResult";
    v63[3] = L"Security-SPP-LastWindowsActivationTime";
    v38 = 0;
    v39 = (const wchar_t **)v63;
    while ( wcsicmp(v37, *v39) )
    {
      ++v38;
      ++v39;
      if ( v38 >= 4 )
      {
        ExpGetSubscriptionPfn(v58);
        v40 = v45;
        v41 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, wchar_t *, unsigned int, __int64, unsigned int, unsigned int *, __int64, _QWORD))qword_1407AC3C8)(
                v58[0],
                0LL,
                0LL,
                0LL,
                v37,
                v33,
                v50,
                v45,
                v47,
                v51,
                0LL);
        if ( (int)(v41 + 0x80000000) >= 0 && v41 != -1073741789 )
          break;
        if ( !v40 )
          v41 = -1073741789;
        v20 = v41;
        v44 = v41;
        goto LABEL_16;
      }
    }
  }
  v20 = sub_14006B210((__int64)v52, v51, v50, v45, (__int64)v47);
  v44 = v20;
  if ( v20 == -1073741762 )
  {
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    BYTE1(NlsMbCodePageTag) = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACA60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACA60);
    KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v20 = v44;
  }
LABEL_16:
  v21 = 0;
  v22 = v53;
  v23 = *v53;
  while ( 2 )
  {
    v24 = *((_WORD *)v12 + 4);
    if ( v23 != v24 )
    {
      v7 += v24;
      goto LABEL_19;
    }
    if ( v23 >> 1 )
    {
      v29 = v65;
      v30 = *((_QWORD *)v22 + 1) - (_QWORD)v65;
      v31 = v23 >> 1;
      do
      {
        *v29 = *(_WORD *)((char *)v29 + v30) ^ ((v7 + 1) | ((_WORD)v7 << 8) | 0x5555);
        v7 += 2;
        ++v29;
        --v31;
      }
      while ( v31 );
      v22 = v53;
    }
    if ( memcmp(v65, *v12, v24) )
    {
LABEL_19:
      ++v21;
      v12 += 4;
      if ( v21 >= 0xC )
        goto LABEL_20;
      continue;
    }
    break;
  }
  v16 = (__int64 *)v12[3];
LABEL_20:
  if ( v16 && (v20 >= 0 || v20 == -1073741772 || v20 == -1073741275) )
  {
    v19 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned int *, _BYTE *))v16)(v51, v50, v45, v47, v43);
    if ( v43[0] )
    {
LABEL_48:
      v20 = v19;
      v44 = v19;
    }
  }
  v6 = Str1;
LABEL_22:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v20;
}
