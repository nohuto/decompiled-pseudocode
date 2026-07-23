/*
 * XREFs of HvpGenerateLogEntry @ 0x140513CAC
 * Callers:
 *     HvWriteLogFile @ 0x1404E3F18 (HvWriteLogFile.c)
 *     HvStoreModifiedData @ 0x1405138AC (HvStoreModifiedData.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1400D4B40 (RtlNumberOfSetBits.c)
 *     SymCryptMarvin32 @ 0x140176E1C (SymCryptMarvin32.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x1404E4CA4 (HvpHeaderCheckSum.c)
 *     HvpCountSetRangesInVector @ 0x1405096E4 (HvpCountSetRangesInVector.c)
 *     HvpFindNextDirtyBlock @ 0x140513F8C (HvpFindNextDirtyBlock.c)
 *     CmpLogDirtyVectorUse @ 0x14051427C (CmpLogDirtyVectorUse.c)
 *     HvpGenerateLogMetadata @ 0x140584F88 (HvpGenerateLogMetadata.c)
 */

__int64 __fastcall HvpGenerateLogEntry(ULONG_PTR BugCheckParameter2, _QWORD *a2, unsigned int *a3)
{
  int v3; // r14d
  _RTL_BITMAP *v4; // r12
  unsigned int v5; // ebp
  int v7; // r13d
  _RTL_BITMAP *v8; // rcx
  unsigned int v9; // edi
  ULONG v10; // eax
  unsigned int v11; // r13d
  _DWORD *PoolWithTag; // rsi
  unsigned int v13; // ebx
  unsigned __int16 *v14; // rdi
  int v15; // r14d
  __int64 v16; // rax
  unsigned int v17; // r14d
  ULONG v18; // ebx
  unsigned int v19; // eax
  _OWORD *v21; // rax
  __int64 v22; // rdx
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  __int64 v25[11]; // [rsp+40h] [rbp-58h] BYREF
  size_t Size; // [rsp+A0h] [rbp+8h] BYREF
  _QWORD *v27; // [rsp+A8h] [rbp+10h]
  unsigned int *v28; // [rsp+B0h] [rbp+18h]
  int v29; // [rsp+B8h] [rbp+20h]

  v28 = a3;
  v27 = a2;
  v3 = *(_DWORD *)(BugCheckParameter2 + 160);
  v4 = (_RTL_BITMAP *)(BugCheckParameter2 + 72);
  v5 = 0;
  v7 = 0;
  v8 = (_RTL_BITMAP *)(BugCheckParameter2 + 72);
  if ( !v3 )
    v7 = 512;
  v9 = HvpCountSetRangesInVector(v8);
  LODWORD(Size) = v9;
  v10 = RtlNumberOfSetBits(v4);
  CmpLogDirtyVectorUse(BugCheckParameter2, 1LL, v9, v10);
  v11 = (v7 + 4135 + 8 * (v9 + (*(_DWORD *)(BugCheckParameter2 + 88) << 6))) & 0xFFFFF000;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, v11, 0x6F494D43u);
  if ( PoolWithTag )
  {
    v13 = 0;
    if ( !v3 )
    {
      v21 = *(_OWORD **)(BugCheckParameter2 + 64);
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
      PoolWithTag[1] = *(_DWORD *)(BugCheckParameter2 + 152);
      PoolWithTag[2] = *(_DWORD *)(BugCheckParameter2 + 152);
      PoolWithTag[7] = 6;
      PoolWithTag[10] = *(_DWORD *)(BugCheckParameter2 + 1400);
      PoolWithTag[11] = 1;
      PoolWithTag[127] = HvpHeaderCheckSum(PoolWithTag);
      v13 = 128;
    }
    v14 = (unsigned __int16 *)&PoolWithTag[v13];
    memset(v14, 0, 0x28uLL);
    *(_DWORD *)v14 = 1162638920;
    *((_DWORD *)v14 + 1) = v11;
    if ( !v3 )
      *((_DWORD *)v14 + 1) = v11 - 512;
    v15 = Size;
    *((_DWORD *)v14 + 3) = *(_DWORD *)(BugCheckParameter2 + 152);
    *((_DWORD *)v14 + 2) = 0;
    v16 = *(_QWORD *)(BugCheckParameter2 + 64);
    LODWORD(Size) = v15;
    *((_DWORD *)v14 + 2) = (*(_BYTE *)(v16 + 144) & 1) != 0;
    *((_DWORD *)v14 + 4) = *(_DWORD *)(BugCheckParameter2 + 1400);
    *((_DWORD *)v14 + 5) = v15;
    HvpGenerateLogMetadata(v4);
    v17 = v13 * 4 + 40 + 8 * v15;
    v29 = 0;
    while ( v17 < v11 && (unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&Size, (__int64)v25, 0) )
    {
      memmove((char *)PoolWithTag + v17, (const void *)v25[1], (unsigned int)Size);
      v17 += Size;
    }
    v18 = RtlNumberOfSetBits(v4);
    v19 = HvpCountSetRangesInVector(v4);
    CmpLogDirtyVectorUse(BugCheckParameter2, 2LL, v19, v18);
    if ( v17 < v11 )
      memset((char *)PoolWithTag + v17, 0, v11 - v17);
    SymCryptMarvin32(HvSymcryptSeed, v14 + 20, *((unsigned int *)v14 + 1) - 40LL, (_DWORD *)v14 + 6);
    SymCryptMarvin32(HvSymcryptSeed, v14, 0x20uLL, (_DWORD *)v14 + 8);
    *v27 = PoolWithTag;
    *v28 = v11;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
