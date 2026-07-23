/*
 * XREFs of ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14005D638
 * Callers:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14005D588 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 * Callees:
 *     RtlDecompressBufferEx @ 0x14005C470 (RtlDecompressBufferEx.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     BCryptDecrypt @ 0x1402462F8 (BCryptDecrypt.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z @ 0x14024BF10 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageCopy(
        __int64 a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r9
  unsigned int v9; // edi
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // ecx
  unsigned __int64 v14; // rbp
  int v15; // r12d
  unsigned int v16; // ebx
  UCHAR *v17; // rsi
  ULONG cbOutput; // r12d
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // rbx
  ULONG v23; // eax
  struct _KTHREAD *v24; // rax
  __int64 v25; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v28; // rcx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  UCHAR *CompressedBufferSize; // [rsp+20h] [rbp-B8h]
  ULONG FinalUncompressedSize; // [rsp+28h] [rbp-B0h]
  ULONG v33; // [rsp+48h] [rbp-90h]
  ULONG v34; // [rsp+50h] [rbp-88h] BYREF
  __int64 v35; // [rsp+58h] [rbp-80h]
  ULONG pcbResult[2]; // [rsp+60h] [rbp-78h] BYREF
  PVOID WorkSpace; // [rsp+68h] [rbp-70h]
  __int64 v38; // [rsp+70h] [rbp-68h] BYREF
  int v39; // [rsp+78h] [rbp-60h]

  v7 = *(_QWORD *)(a1 + 1000);
  v9 = 0;
  WorkSpace = a2;
  v11 = a3;
  v12 = *(unsigned int *)(a1 + 824);
  v13 = *(_DWORD *)(v7 + 8);
  v14 = v12 + a3;
  v15 = v13 + *(unsigned __int16 *)(a5 + 4) - 1;
  v35 = a6;
  v16 = 0;
  v17 = (UCHAR *)a4;
  cbOutput = ~(v13 - 1) & v15;
  if ( (a4 & 1) != 0 )
  {
    v17 = *(UCHAR **)(a6 + 48);
    a4 &= ~1uLL;
  }
  if ( (v14 & 3) != 0 )
  {
    v11 &= 0xFFFFFFFFFFFFFFFCuLL;
    v19 = v14 & 3;
    *(_QWORD *)pcbResult = v11;
    v14 &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v19 & 2) != 0 )
    {
      memmove((void *)a4, (const void *)v11, cbOutput + (unsigned int)v12);
      goto LABEL_20;
    }
    if ( *(_DWORD *)(v7 + 24) )
    {
      memmove(*(void **)(a1 + 1768), (const void *)v14, cbOutput);
      v11 = *(_QWORD *)pcbResult;
      v14 = *(_QWORD *)(a1 + 1768);
    }
  }
  v20 = *(_QWORD *)(a1 + 1000);
  if ( !*(_DWORD *)(v20 + 24) )
    goto LABEL_8;
  v38 = 0LL;
  LODWORD(v38) = *(unsigned __int16 *)(a5 + 4);
  HIDWORD(v38) = *(_DWORD *)(a5 + 8);
  v39 = *(_DWORD *)(a5 + 12);
  *(_QWORD *)(v20 + 64) = &v38;
  *(_QWORD *)(v20 + 96) = v11;
  *(_DWORD *)(v20 + 72) = 12;
  *(_DWORD *)(v20 + 104) = 16;
  if ( BCryptDecrypt(
         *(BCRYPT_KEY_HANDLE *)(v20 + 32),
         (PUCHAR)v14,
         cbOutput,
         (void *)(v20 + 56),
         CompressedBufferSize,
         FinalUncompressedSize,
         (PUCHAR)v14,
         cbOutput,
         pcbResult,
         v33) < 0 )
  {
    v9 = -1073741173;
    ST_STORE<SM_TRAITS>::StDmPageError(a1, v14, a4, a5, -1073741173);
  }
  else
  {
LABEL_8:
    v21 = v35;
    if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
    {
      v22 = *(_QWORD *)(a1 + 800);
      if ( v35 == -56 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx(v22 + 5992, 0LL);
      }
      else
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 5992), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v22 + 5992);
        KeAbPostRelease(v22 + 5992);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
      v16 = 2;
    }
    v23 = *(unsigned __int16 *)(a5 + 4);
    if ( v23 >= 0x1000 )
    {
      memmove((void *)a4, (const void *)v14, *(unsigned __int16 *)(a5 + 4));
    }
    else if ( RtlDecompressBufferEx(*(_WORD *)(a1 + 976), v17, 0x1000u, (PUCHAR)v14, v23, &v34, WorkSpace) >= 0
           && v34 == 4096 )
    {
      if ( v17 != (UCHAR *)a4 )
      {
        v28 = 32LL;
        v29 = (_OWORD *)a4;
        do
        {
          *v29 = *(_OWORD *)v17;
          v29[1] = *((_OWORD *)v17 + 1);
          v29[2] = *((_OWORD *)v17 + 2);
          v29[3] = *((_OWORD *)v17 + 3);
          v29[4] = *((_OWORD *)v17 + 4);
          v29[5] = *((_OWORD *)v17 + 5);
          v29[6] = *((_OWORD *)v17 + 6);
          v29 += 8;
          v30 = *((_OWORD *)v17 + 7);
          v17 += 128;
          *(v29 - 1) = v30;
          --v28;
        }
        while ( v28 );
      }
    }
    else
    {
      v9 = -1073741116;
      v16 |= 1u;
    }
    if ( v16 >= 2 )
    {
      v24 = KeGetCurrentThread();
      v25 = *(_QWORD *)(a1 + 800);
      --v24->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v25 + 5992, 0LL);
      *(_DWORD *)(v21 + 56) = 2;
    }
  }
LABEL_20:
  if ( (v16 & 1) != 0 )
    ST_STORE<SM_TRAITS>::StDmPageError(a1, v14, a4, a5, v9);
  return v9;
}
