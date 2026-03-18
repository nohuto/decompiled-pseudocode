/*
 * XREFs of VidSchQueryDmaData @ 0x1C00B6018
 * Callers:
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00A2F2C (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 * Callees:
 *     VidSchiBlockDriverCallback @ 0x1C00B61D0 (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchQueryDmaData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rsi
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  __int64 i; // rdx
  __int64 result; // rax
  __int64 v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  unsigned int v17; // [rsp+44h] [rbp+1Ch]

  v17 = HIDWORD(a3);
  v5 = a3;
  v7 = *(_QWORD *)(a1 + 8LL * a2 + 424);
  VidSchiBlockDriverCallback(a1);
  v8 = *(_DWORD *)(a1 + 2448);
  v9 = 0;
  if ( !v8 )
    return 3221225485LL;
  for ( i = v7 + 6044; *(_DWORD *)(i - 20) == 3 || *(_QWORD *)(i - 4) != __PAIR64__(v17, v5); i += 224LL )
  {
    if ( ++v9 >= v8 )
      return 3221225485LL;
  }
  v12 = 224 * (v9 + 27LL);
  result = 0LL;
  v13 = *(_OWORD *)(v12 + v7 + 16);
  *(_OWORD *)a4 = *(_OWORD *)(v12 + v7);
  v14 = *(_OWORD *)(v12 + v7 + 32);
  *(_OWORD *)(a4 + 16) = v13;
  v15 = *(_OWORD *)(v12 + v7 + 48);
  *(_OWORD *)(a4 + 32) = v14;
  v16 = *(_OWORD *)(v12 + v7 + 64);
  *(_OWORD *)(a4 + 48) = v15;
  *(_QWORD *)&v15 = *(_QWORD *)(v12 + v7 + 80);
  *(_OWORD *)(a4 + 64) = v16;
  *(_QWORD *)(a4 + 80) = v15;
  return result;
}
