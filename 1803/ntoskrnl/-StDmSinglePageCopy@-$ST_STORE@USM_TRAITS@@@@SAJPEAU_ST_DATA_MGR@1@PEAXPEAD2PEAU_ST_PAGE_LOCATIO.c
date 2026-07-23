/*
 * XREFs of ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1401512E4
 * Callers:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140151228 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     RtlDecompressBufferEx @ 0x14007AEC0 (RtlDecompressBufferEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     BCryptDecrypt @ 0x14029F30C (BCryptDecrypt.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x1402A557C (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageCopy(
        __int64 a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r10
  unsigned __int64 v8; // r15
  __int64 v9; // rdx
  char v10; // bl
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  UCHAR *v13; // rdi
  ULONG cbOutput; // r12d
  char v15; // al
  UCHAR *v16; // r14
  __int64 v17; // rcx
  signed __int64 *v18; // rbx
  __int64 v19; // r15
  ULONG v20; // eax
  unsigned int v21; // edi
  struct _KTHREAD *v22; // rax
  __int64 v23; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v26; // rcx
  UCHAR *v27; // rax
  __int128 v28; // xmm1
  UCHAR *CompressedBufferSize; // [rsp+20h] [rbp-B8h]
  ULONG FinalUncompressedSize; // [rsp+28h] [rbp-B0h]
  ULONG v31; // [rsp+48h] [rbp-90h]
  ULONG v32; // [rsp+58h] [rbp-80h] BYREF
  ULONG pcbResult; // [rsp+60h] [rbp-78h] BYREF
  PVOID WorkSpace; // [rsp+68h] [rbp-70h]
  __int64 v35; // [rsp+70h] [rbp-68h] BYREF
  int v36; // [rsp+78h] [rbp-60h]

  v6 = *(unsigned int *)(a1 + 824);
  v8 = a3;
  WorkSpace = a2;
  v9 = a5;
  v10 = 0;
  v11 = v6 + a3;
  v12 = *(_QWORD *)(a1 + 1016);
  v13 = (UCHAR *)a4;
  cbOutput = ~(*(_DWORD *)(v12 + 8) - 1) & (*(_DWORD *)(v12 + 8) + *(unsigned __int16 *)(a5 + 4) - 1);
  v15 = v11;
  if ( (a4 & 1) != 0 )
    v13 = *(UCHAR **)(a6 + 48);
  v16 = (UCHAR *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
  v17 = *(_QWORD *)(a1 + 1016);
  if ( (a4 & 1) == 0 )
    v16 = (UCHAR *)a4;
  if ( (v11 & 3) != 0 )
  {
    v11 &= 0xFFFFFFFFFFFFFFFCuLL;
    v8 &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v15 & 2) != 0 )
    {
      memmove(v16, (const void *)v8, (unsigned int)v6 + cbOutput);
      v19 = a5;
      goto LABEL_20;
    }
    if ( *(_DWORD *)(v12 + 24) )
    {
      memmove(*(void **)(a1 + 1784), (const void *)v11, cbOutput);
      v17 = *(_QWORD *)(a1 + 1016);
      v9 = a5;
      v11 = *(_QWORD *)(a1 + 1784);
    }
  }
  if ( *(_DWORD *)(v17 + 24) )
  {
    v35 = 0LL;
    LODWORD(v35) = *(unsigned __int16 *)(v9 + 4);
    HIDWORD(v35) = *(_DWORD *)(v9 + 8);
    v36 = *(_DWORD *)(v9 + 12);
    *(_QWORD *)(v17 + 64) = &v35;
    *(_DWORD *)(v17 + 72) = 12;
    *(_QWORD *)(v17 + 96) = v8;
    *(_DWORD *)(v17 + 104) = 16;
    if ( BCryptDecrypt(
           *(BCRYPT_KEY_HANDLE *)(v17 + 32),
           (PUCHAR)v11,
           cbOutput,
           (void *)(v17 + 56),
           CompressedBufferSize,
           FinalUncompressedSize,
           (PUCHAR)v11,
           cbOutput,
           &pcbResult,
           v31) < 0 )
    {
      v19 = a5;
      v21 = -1073741173;
      v10 = 4 * (ST_STORE<SM_TRAITS>::StDmPageError(a1, v11, v16, a5, a6, -1073741173) & 1);
      goto LABEL_21;
    }
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
  {
    v18 = (signed __int64 *)(*(_QWORD *)(a1 + 800) + 6024LL);
    if ( a6 == -64 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v18, 0LL);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v18);
      KeAbPostRelease((ULONG_PTR)v18);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v10 = 2;
  }
  v19 = a5;
  v20 = *(unsigned __int16 *)(a5 + 4);
  if ( v20 >= 0x1000 )
  {
    memmove(v16, (const void *)v11, *(unsigned __int16 *)(a5 + 4));
LABEL_20:
    v21 = 0;
    goto LABEL_21;
  }
  if ( RtlDecompressBufferEx(*(_WORD *)(a1 + 992), v13, 0x1000u, (PUCHAR)v11, v20, &v32, WorkSpace) >= 0 && v32 == 4096 )
  {
    if ( v13 != v16 )
    {
      v26 = 32LL;
      v27 = v16;
      do
      {
        *(_OWORD *)v27 = *(_OWORD *)v13;
        *((_OWORD *)v27 + 1) = *((_OWORD *)v13 + 1);
        *((_OWORD *)v27 + 2) = *((_OWORD *)v13 + 2);
        *((_OWORD *)v27 + 3) = *((_OWORD *)v13 + 3);
        *((_OWORD *)v27 + 4) = *((_OWORD *)v13 + 4);
        *((_OWORD *)v27 + 5) = *((_OWORD *)v13 + 5);
        *((_OWORD *)v27 + 6) = *((_OWORD *)v13 + 6);
        v27 += 128;
        v28 = *((_OWORD *)v13 + 7);
        v13 += 128;
        *((_OWORD *)v27 - 1) = v28;
        --v26;
      }
      while ( v26 );
    }
    goto LABEL_20;
  }
  v21 = -1073741116;
  v10 |= 1u;
LABEL_21:
  if ( (v10 & 2) != 0 )
  {
    v22 = KeGetCurrentThread();
    v23 = *(_QWORD *)(a1 + 800);
    --v22->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v23 + 6024, 0LL);
    *(_DWORD *)(a6 + 64) = 2;
  }
  if ( (v10 & 1) != 0 && (ST_STORE<SM_TRAITS>::StDmPageError(a1, v11, v16, v19, a6, v21) & 1) != 0 )
    return 0;
  return v21;
}
