/*
 * XREFs of HvpGenerateLogEntry @ 0x1404B7770
 * Callers:
 *     HvStoreModifiedData @ 0x1404B7370 (HvStoreModifiedData.c)
 *     HvWriteLogFile @ 0x1404D3CF0 (HvWriteLogFile.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 *     SymCryptMarvin32 @ 0x1401775DC (SymCryptMarvin32.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x14043B4E8 (HvpHeaderCheckSum.c)
 *     HvpGenerateLogMetadata @ 0x1404B72B0 (HvpGenerateLogMetadata.c)
 *     HvpFindNextDirtyBlock @ 0x1404B7A5C (HvpFindNextDirtyBlock.c)
 *     HvpCountSetRangesInVector @ 0x1404B7D50 (HvpCountSetRangesInVector.c)
 *     CmpLogDirtyVectorUse @ 0x1404B7DAC (CmpLogDirtyVectorUse.c)
 */

__int64 __fastcall HvpGenerateLogEntry(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // edi
  int v5; // ebx
  char v6; // r15
  _RTL_BITMAP *v7; // r12
  unsigned int v8; // esi
  ULONG v9; // eax
  unsigned int v10; // r13d
  _DWORD *PoolWithTag; // rbp
  unsigned int v12; // ebx
  unsigned __int16 *v13; // rsi
  int v14; // r15d
  __int64 v15; // rax
  unsigned int v16; // ebx
  unsigned int v17; // r15d
  ULONG v18; // ebx
  unsigned int v19; // eax
  _OWORD *v21; // rax
  __int64 v22; // rdx
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  char v25[8]; // [rsp+40h] [rbp-58h] BYREF
  void *Src; // [rsp+48h] [rbp-50h] BYREF
  size_t Size; // [rsp+A0h] [rbp+8h] BYREF
  _QWORD *v28; // [rsp+A8h] [rbp+10h]
  unsigned int *v29; // [rsp+B0h] [rbp+18h]
  int v30; // [rsp+B8h] [rbp+20h] BYREF

  v29 = a3;
  v28 = a2;
  v3 = 0;
  v5 = 0;
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 160) )
  {
    v6 = 1;
    v5 = 512;
  }
  v7 = (_RTL_BITMAP *)(a1 + 72);
  v8 = HvpCountSetRangesInVector((PRTL_BITMAP)(a1 + 72));
  LODWORD(Size) = v8;
  v9 = RtlNumberOfSetBits(v7);
  CmpLogDirtyVectorUse(a1, 1LL, v8, v9);
  v10 = (v5 + 8 * (v8 + (*(_DWORD *)(a1 + 88) << 6)) + 4135) & 0xFFFFF000;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, v10, 0x6F494D43u);
  if ( PoolWithTag )
  {
    v12 = 0;
    if ( v6 )
    {
      v21 = *(_OWORD **)(a1 + 64);
      v22 = 4LL;
      v23 = PoolWithTag;
      do
      {
        *v23 = *v21;
        v23[1] = v21[1];
        v23[2] = v21[2];
        v23[3] = v21[3];
        v23[4] = v21[4];
        v23[5] = v21[5];
        v23[6] = v21[6];
        v23 += 8;
        v24 = v21[7];
        v21 += 8;
        *(v23 - 1) = v24;
        --v22;
      }
      while ( v22 );
      PoolWithTag[1] = *(_DWORD *)(a1 + 152);
      PoolWithTag[2] = *(_DWORD *)(a1 + 152);
      PoolWithTag[7] = 6;
      PoolWithTag[10] = *(_DWORD *)(a1 + 1400);
      PoolWithTag[11] = 1;
      PoolWithTag[127] = HvpHeaderCheckSum(PoolWithTag);
      v12 = 128;
    }
    v13 = (unsigned __int16 *)&PoolWithTag[v12];
    memset(v13, 0, 0x28uLL);
    *(_DWORD *)v13 = 1162638920;
    *((_DWORD *)v13 + 1) = v10;
    if ( v6 )
      *((_DWORD *)v13 + 1) = v10 - 512;
    v14 = Size;
    *((_DWORD *)v13 + 3) = *(_DWORD *)(a1 + 152);
    *((_DWORD *)v13 + 2) = 0;
    v15 = *(_QWORD *)(a1 + 64);
    LODWORD(Size) = v14;
    v16 = v12 * 4 + 40;
    *((_DWORD *)v13 + 2) = (*(_BYTE *)(v15 + 144) & 1) != 0;
    *((_DWORD *)v13 + 4) = *(_DWORD *)(a1 + 1400);
    *((_DWORD *)v13 + 5) = v14;
    HvpGenerateLogMetadata(v7, (__int64)PoolWithTag + v16, (unsigned int *)&Size);
    v17 = v16 + 8 * v14;
    v30 = 0;
    while ( v17 < v10
         && (unsigned __int8)HvpFindNextDirtyBlock(
                               a1,
                               (_DWORD)v7,
                               (unsigned int)&v30,
                               (unsigned int)&Src,
                               (__int64)&Size,
                               (__int64)v25,
                               0) )
    {
      memmove((char *)PoolWithTag + v17, Src, (unsigned int)Size);
      v17 += Size;
    }
    v18 = RtlNumberOfSetBits(v7);
    v19 = HvpCountSetRangesInVector(v7);
    CmpLogDirtyVectorUse(a1, 2LL, v19, v18);
    if ( v17 < v10 )
      memset((char *)PoolWithTag + v17, 0, v10 - v17);
    SymCryptMarvin32(HvSymcryptSeed, v13 + 20, *((unsigned int *)v13 + 1) - 40LL, (_DWORD *)v13 + 6);
    SymCryptMarvin32(HvSymcryptSeed, v13, 0x20uLL, (_DWORD *)v13 + 8);
    *v28 = PoolWithTag;
    *v29 = v10;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
