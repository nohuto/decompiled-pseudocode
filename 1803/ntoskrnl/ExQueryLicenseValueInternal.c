/*
 * XREFs of ExQueryLicenseValueInternal @ 0x140549360
 * Callers:
 *     NtQueryLicenseValue @ 0x1405490A0 (NtQueryLicenseValue.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     sub_1400A17D0 @ 0x1400A17D0 (sub_1400A17D0.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x140549988 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExpGetSubscriptionPfn @ 0x1407BE454 (ExpGetSubscriptionPfn.c)
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
  unsigned int v34; // esi
  wchar_t *PoolWithTag; // rax
  size_t v36; // r8
  const void *v37; // rdx
  wchar_t *v38; // r13
  unsigned int v39; // ebx
  const wchar_t **v40; // r15
  unsigned int v41; // ebx
  int v42; // eax
  struct _KTHREAD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  _BYTE v47[4]; // [rsp+60h] [rbp-1F8h] BYREF
  int v48; // [rsp+64h] [rbp-1F4h]
  char v49; // [rsp+68h] [rbp-1F0h]
  unsigned int v50; // [rsp+6Ch] [rbp-1ECh]
  wchar_t *Str1; // [rsp+70h] [rbp-1E8h]
  int v52; // [rsp+78h] [rbp-1E0h]
  unsigned int *v53; // [rsp+80h] [rbp-1D8h]
  int v54; // [rsp+88h] [rbp-1D0h] BYREF
  __int64 v55; // [rsp+90h] [rbp-1C8h]
  __int64 v56; // [rsp+98h] [rbp-1C0h]
  __int64 v57; // [rsp+A0h] [rbp-1B8h] BYREF
  _WORD *v58; // [rsp+A8h] [rbp-1B0h]
  unsigned int v59; // [rsp+B0h] [rbp-1A8h]
  int v60; // [rsp+B8h] [rbp-1A0h]
  __int64 *v61; // [rsp+C0h] [rbp-198h]
  __int64 v62; // [rsp+C8h] [rbp-190h]
  _QWORD v63[2]; // [rsp+D0h] [rbp-188h] BYREF
  char v64[16]; // [rsp+E0h] [rbp-178h] BYREF
  unsigned __int16 *v65; // [rsp+F0h] [rbp-168h]
  __int64 v66; // [rsp+F8h] [rbp-160h]
  _QWORD v67[5]; // [rsp+108h] [rbp-150h] BYREF
  _BYTE Buf1[112]; // [rsp+130h] [rbp-128h] BYREF
  _BYTE v69[112]; // [rsp+1A0h] [rbp-B8h] BYREF

  v50 = a4;
  v55 = a3;
  v56 = a2;
  v65 = a1;
  v66 = a2;
  v63[1] = a3;
  v59 = a4;
  v53 = a5;
  v48 = 0;
  v6 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v47[0] = 0;
  Str1 = 0LL;
  v62 = 0LL;
  v63[0] = 0LL;
  if ( !a1 || !a5 || (v52 = 0, v48 = 0, !*((_QWORD *)a1 + 1)) || *a1 < 2u )
  {
    v21 = -1073741811;
    v48 = -1073741811;
    goto LABEL_22;
  }
  LOBYTE(v57) = 1;
  v58 = a1;
  v60 = ExpLoadAndSortLicensingCacheDescriptors();
  v61 = 0LL;
  v49 = 0;
  v7 = 1;
  v8 = 1;
  v9 = 0;
  v10 = a1;
  v11 = *a1;
  v12 = &off_1407F8BC0;
  v13 = &off_1407F8BC0;
  while ( 1 )
  {
    v14 = *((_WORD *)v13 + 4);
    if ( v11 == v14 )
      break;
    v8 += v14;
LABEL_8:
    ++v9;
    v13 += 5;
    if ( v9 >= 0xE )
    {
      v15 = v61;
      v16 = (char)v61;
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
    v10 = v58;
    goto LABEL_8;
  }
  v15 = (__int64 *)v13[2];
  v61 = v15;
  v16 = *((_BYTE *)v13 + 32);
  v49 = v16;
LABEL_10:
  if ( v15 )
  {
    if ( v16 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140862420, 0LL);
      v15 = v61;
    }
    v18 = v53;
    v19 = v50;
    v52 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned int *, _BYTE *))v15)(v56, v55, v50, v53, v47);
    v48 = v52;
    v17 = 0LL;
    if ( v49 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140862420, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140862420);
      KeAbPostRelease((ULONG_PTR)&qword_140862420);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v52 = v48;
    }
  }
  else
  {
    v17 = 0LL;
    v18 = v53;
    v19 = v50;
  }
  if ( v47[0] )
  {
    v21 = v52;
    if ( v52 >= 0 && *v18 > v19 )
    {
      v21 = -1073741789;
      v48 = -1073741789;
    }
    v6 = Str1;
    goto LABEL_22;
  }
  v20 = v60;
  if ( v60 < 0 )
    goto LABEL_49;
  v48 = 0;
  v54 = 0;
  v48 = sub_1400A17D0((__int64)&qword_1407F9530, 0LL, (__int64)&v54, 4u, (__int64)v64);
  if ( v54 && qword_1408613B8 )
  {
    v34 = *a1 + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v34, 0x20534C53u);
    v6 = PoolWithTag;
    Str1 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v21 = -1073741801;
      v48 = -1073741801;
      goto LABEL_22;
    }
    memset(PoolWithTag, 0, v34);
    v36 = *a1;
    v37 = (const void *)*((_QWORD *)a1 + 1);
    v38 = Str1;
    memmove(Str1, v37, v36);
    v67[0] = L"Security-SPP-GenuineLocalStatus";
    v67[1] = L"Security-SPP-Action-StateData";
    v67[2] = L"Security-SPP-LastWindowsActivationHResult";
    v67[3] = L"Security-SPP-LastWindowsActivationTime";
    v67[4] = L"SMR-HostManaged-Enabled";
    v39 = 0;
    v40 = (const wchar_t **)v67;
    while ( wcsicmp(v38, *v40) )
    {
      ++v39;
      ++v40;
      if ( v39 >= 5 )
      {
        ExpGetSubscriptionPfn(v63);
        v41 = v50;
        v42 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, wchar_t *, unsigned int, __int64, unsigned int, unsigned int *, __int64, _QWORD))qword_1408613B8)(
                v63[0],
                0LL,
                0LL,
                0LL,
                v38,
                v34,
                v55,
                v50,
                v53,
                v56,
                0LL);
        if ( (int)(v42 + 0x80000000) >= 0 && v42 != -1073741789 )
          break;
        if ( !v41 )
          v42 = -1073741789;
        v21 = v42;
        v48 = v42;
        goto LABEL_16;
      }
    }
  }
  v21 = sub_1400A17D0((__int64)&v57, v56, v55, v50, (__int64)v53);
  v48 = v21;
  if ( v21 == -1073741762 )
  {
    v43 = KeGetCurrentThread();
    --v43->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140862420, 0LL);
    BYTE1(NlsMbCodePageTag) = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140862420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140862420, v44, v45, v46);
    KeAbPostRelease((ULONG_PTR)&qword_140862420);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v21 = v48;
  }
LABEL_16:
  v22 = 0;
  v23 = v58;
  v24 = *v58;
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
      v30 = v69;
      v31 = *((_QWORD *)v23 + 1) - (_QWORD)v69;
      v32 = v24 >> 1;
      do
      {
        *v30 = *(_WORD *)((char *)v30 + v31) ^ ((v7 + 1) | ((_WORD)v7 << 8) | 0x5555);
        v7 += 2;
        ++v30;
        --v32;
      }
      while ( v32 );
      v23 = v58;
    }
    if ( memcmp(v69, *v12, v25) )
    {
LABEL_19:
      ++v22;
      v12 += 5;
      if ( v22 >= 0xE )
        goto LABEL_20;
      continue;
    }
    break;
  }
  v17 = (__int64 *)v12[3];
LABEL_20:
  if ( v17 && (v21 >= 0 || v21 == -1073741772 || v21 == -1073741275) )
  {
    v20 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned int *, _BYTE *))v17)(v56, v55, v50, v53, v47);
    if ( v47[0] )
    {
LABEL_49:
      v21 = v20;
      v48 = v20;
    }
  }
  v6 = Str1;
LABEL_22:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v21;
}
