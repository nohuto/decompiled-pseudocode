/*
 * XREFs of ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14026ED2C
 * Callers:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14026F194 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 * Callees:
 *     RtlDecompressBufferEx @ 0x14000FBB0 (RtlDecompressBufferEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     BCryptDecrypt @ 0x14025DA34 (BCryptDecrypt.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x14026DAC8 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageCopy(
        __int64 a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        ULONG_PTR a5,
        __int64 a6)
{
  __int64 v7; // r9
  unsigned __int64 v8; // r12
  ULONG_PTR v9; // rdx
  char v11; // bl
  unsigned __int64 pbOutput; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // r8
  ULONG cbOutput; // r15d
  char v16; // al
  ULONG_PTR v17; // r15
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG v22; // eax
  __int64 v23; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  struct _KTHREAD *v26; // rax
  __int64 v27; // rcx
  UCHAR *CompressedBufferSize; // [rsp+20h] [rbp-B8h]
  ULONG FinalUncompressedSize; // [rsp+28h] [rbp-B0h]
  ULONG v31; // [rsp+48h] [rbp-90h]
  ULONG v32; // [rsp+58h] [rbp-80h] BYREF
  ULONG pcbResult; // [rsp+60h] [rbp-78h] BYREF
  PVOID WorkSpace; // [rsp+68h] [rbp-70h]
  __int64 v35; // [rsp+70h] [rbp-68h] BYREF
  int v36; // [rsp+78h] [rbp-60h]

  v7 = *(unsigned int *)(a1 + 824);
  v8 = a3;
  WorkSpace = a2;
  v9 = a5;
  v11 = 0;
  pbOutput = v7 + a3;
  v13 = a4;
  v14 = *(_QWORD *)(a1 + 1016);
  cbOutput = ~(*(_DWORD *)(v14 + 8) - 1) & (*(_DWORD *)(v14 + 8) + *(unsigned __int16 *)(a5 + 4) - 1);
  if ( (a4 & 1) != 0 )
  {
    v13 = *(_QWORD *)(a6 + 48);
    a4 &= ~1uLL;
  }
  if ( (pbOutput & 3) != 0 )
  {
    v8 &= 0xFFFFFFFFFFFFFFFCuLL;
    v16 = pbOutput & 3;
    pbOutput &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v16 & 2) != 0 )
    {
      memmove((void *)a4, (const void *)v8, (unsigned int)v7 + cbOutput);
      v17 = a5;
      goto LABEL_27;
    }
    if ( *(_DWORD *)(v14 + 24) )
    {
      memmove(*(void **)(a1 + 1784), (const void *)pbOutput, cbOutput);
      v9 = a5;
      pbOutput = *(_QWORD *)(a1 + 1784);
    }
  }
  v18 = *(_QWORD *)(a1 + 1016);
  if ( *(_DWORD *)(v18 + 24) )
  {
    v35 = 0LL;
    LODWORD(v35) = *(unsigned __int16 *)(v9 + 4);
    HIDWORD(v35) = *(_DWORD *)(v9 + 8);
    v36 = *(_DWORD *)(v9 + 12);
    *(_QWORD *)(v18 + 64) = &v35;
    *(_DWORD *)(v18 + 72) = 12;
    *(_QWORD *)(v18 + 96) = v8;
    *(_DWORD *)(v18 + 104) = 16;
    if ( BCryptDecrypt(
           *(BCRYPT_KEY_HANDLE *)(v18 + 32),
           (PUCHAR)pbOutput,
           cbOutput,
           (void *)(v18 + 56),
           CompressedBufferSize,
           FinalUncompressedSize,
           (PUCHAR)pbOutput,
           cbOutput,
           &pcbResult,
           v31) < 0 )
    {
      v17 = a5;
      v19 = -1073741173;
      v11 = 4 * (ST_STORE<SM_TRAITS>::StDmPageError(a1, (void *)pbOutput, (UCHAR *)a4, a5, a6, -1073741173) & 1);
      goto LABEL_28;
    }
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 800);
    if ( a6 == -64 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v20 + 6024, 0LL);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 6024), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v20 + 6024));
      KeAbPostRelease(v20 + 6024);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v11 = 2;
  }
  v17 = a5;
  v22 = *(unsigned __int16 *)(a5 + 4);
  if ( v22 >= 0x1000 )
  {
    memmove((void *)a4, (const void *)pbOutput, *(unsigned __int16 *)(a5 + 4));
  }
  else
  {
    if ( RtlDecompressBufferEx(*(_WORD *)(a1 + 992), (PUCHAR)v13, 0x1000u, (PUCHAR)pbOutput, v22, &v32, WorkSpace) < 0
      || v32 != 4096 )
    {
      v19 = -1073741116;
      v11 |= 1u;
      goto LABEL_28;
    }
    if ( v13 != a4 )
    {
      v23 = 32LL;
      v24 = (_OWORD *)a4;
      do
      {
        *v24 = *(_OWORD *)v13;
        v24[1] = *(_OWORD *)(v13 + 16);
        v24[2] = *(_OWORD *)(v13 + 32);
        v24[3] = *(_OWORD *)(v13 + 48);
        v24[4] = *(_OWORD *)(v13 + 64);
        v24[5] = *(_OWORD *)(v13 + 80);
        v24[6] = *(_OWORD *)(v13 + 96);
        v24 += 8;
        v25 = *(_OWORD *)(v13 + 112);
        v13 += 128LL;
        *(v24 - 1) = v25;
        --v23;
      }
      while ( v23 );
    }
  }
LABEL_27:
  v19 = 0;
LABEL_28:
  if ( (v11 & 2) != 0 )
  {
    v26 = KeGetCurrentThread();
    v27 = *(_QWORD *)(a1 + 800);
    --v26->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v27 + 6024, 0LL);
    *(_DWORD *)(a6 + 64) = 2;
  }
  if ( (v11 & 1) != 0 && (ST_STORE<SM_TRAITS>::StDmPageError(a1, (void *)pbOutput, (UCHAR *)a4, v17, a6, v19) & 1) != 0 )
    return 0;
  return v19;
}
