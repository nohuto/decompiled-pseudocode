/*
 * XREFs of HvStoreModifiedData @ 0x140499C58
 * Callers:
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x140007490 (RtlClearAllBits.c)
 *     RtlMergeBitMaps @ 0x1400B6478 (RtlMergeBitMaps.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     HvpGenerateLogEntry @ 0x140498C70 (HvpGenerateLogEntry.c)
 *     HvResetDirtyData @ 0x14049926C (HvResetDirtyData.c)
 *     HvpTruncateBins @ 0x14049A080 (HvpTruncateBins.c)
 *     HvpFindNextDirtyBlock @ 0x140592104 (HvpFindNextDirtyBlock.c)
 *     HvpCountSetRangesInVector @ 0x14059281C (HvpCountSetRangesInVector.c)
 */

__int64 __fastcall HvStoreModifiedData(ULONG_PTR BugCheckParameter2, char a2, char a3)
{
  PVOID v3; // r12
  unsigned int *v4; // rsi
  void *v5; // r13
  PVOID *v6; // r15
  bool v7; // zf
  unsigned int v9; // r14d
  PVOID PoolWithTag; // rax
  int v11; // eax
  unsigned int SizeOfBitMap; // r14d
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebx
  PVOID v18; // rax
  _OWORD *v19; // r14
  __int64 v20; // rdx
  _OWORD *v21; // rax
  _OWORD *v22; // rcx
  __int128 v23; // xmm1
  size_t v24; // r14
  unsigned int *v25; // rax
  PVOID *v26; // rax
  char *v27; // r14
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // eax
  PVOID v31; // rax
  unsigned int v32; // eax
  PVOID *v33; // rsi
  __int64 v34; // r14
  unsigned int v35; // [rsp+40h] [rbp-29h]
  int v36; // [rsp+44h] [rbp-25h]
  unsigned int v37; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v38; // [rsp+4Ch] [rbp-1Dh]
  PVOID v39; // [rsp+50h] [rbp-19h]
  int v40; // [rsp+58h] [rbp-11h]
  int v41; // [rsp+5Ch] [rbp-Dh] BYREF
  unsigned int v42; // [rsp+60h] [rbp-9h]
  __int64 v43; // [rsp+68h] [rbp-1h] BYREF
  void *v44; // [rsp+70h] [rbp+7h]
  _RTL_BITMAP BitMapHeader; // [rsp+78h] [rbp+Fh] BYREF
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+1Fh]
  unsigned int v47; // [rsp+D0h] [rbp+67h]
  PVOID P; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = 0LL;
  v37 = 0;
  v4 = 0LL;
  v47 = 0;
  v5 = 0LL;
  v39 = 0LL;
  v6 = 0LL;
  v7 = (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8000) == 0;
  P = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  if ( !v7 )
    return 1;
  *(_DWORD *)(BugCheckParameter2 + 1716) = (unsigned __int8)HvpTruncateBins(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 )
    return 1;
  v9 = *(_DWORD *)(BugCheckParameter2 + 108);
  v38 = v9;
  NumberOfBytes = v9;
  if ( *(_DWORD *)(BugCheckParameter2 + 104) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v38, 0x30354D43u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return 2;
    memmove(PoolWithTag, *(const void **)(BugCheckParameter2 + 96), v9);
    v36 = *(_DWORD *)(BugCheckParameter2 + 88);
    LODWORD(v43) = v36;
    v44 = v5;
    v11 = HvpGenerateLogEntry(BugCheckParameter2, &P, &v37);
    v3 = P;
    if ( v11 < 0 )
      goto LABEL_49;
  }
  else
  {
    v36 = v43;
  }
  if ( !a2 && !a3 )
    goto LABEL_8;
  v18 = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x30354D43u);
  v39 = v18;
  v19 = v18;
  if ( v18 )
  {
    memset(v18, 0, 0x1000uLL);
    v20 = 4LL;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = *(_DWORD *)(BugCheckParameter2 + 272);
    v21 = *(_OWORD **)(BugCheckParameter2 + 64);
    v22 = v19;
    do
    {
      *v22 = *v21;
      v22[1] = v21[1];
      v22[2] = v21[2];
      v22[3] = v21[3];
      v22[4] = v21[4];
      v22[5] = v21[5];
      v22[6] = v21[6];
      v22 += 8;
      v23 = v21[7];
      v21 += 8;
      *(v22 - 1) = v23;
      --v20;
    }
    while ( v20 );
    v24 = NumberOfBytes;
    if ( !a3 )
    {
LABEL_8:
      SizeOfBitMap = BitMapHeader.SizeOfBitMap;
LABEL_9:
      v13 = *(_DWORD *)(BugCheckParameter2 + 272);
      if ( *(_DWORD *)(BugCheckParameter2 + 1784) < v13 || *(_DWORD *)(BugCheckParameter2 + 1716) )
        *(_DWORD *)(BugCheckParameter2 + 1784) = v13;
      if ( *(_DWORD *)(BugCheckParameter2 + 104) )
      {
        *(_DWORD *)(BugCheckParameter2 + 1680) = v36;
        v14 = v38;
        *(_QWORD *)(BugCheckParameter2 + 1688) = v5;
        v5 = 0LL;
        *(_DWORD *)(BugCheckParameter2 + 1696) = v14;
        v15 = v37;
        *(_QWORD *)(BugCheckParameter2 + 1704) = v3;
        v3 = 0LL;
        *(_DWORD *)(BugCheckParameter2 + 1712) = v15;
        HvResetDirtyData(BugCheckParameter2);
      }
      if ( a2 || a3 )
      {
        v31 = v39;
        v39 = 0LL;
        v7 = *(_BYTE *)(BugCheckParameter2 + 191) == 0;
        *(_QWORD *)(BugCheckParameter2 + 1768) = v31;
        if ( !v7 )
          *(_BYTE *)(BugCheckParameter2 + 1720) = 1;
        if ( a3 )
        {
          v32 = v38;
          *(_QWORD *)(BugCheckParameter2 + 1736) = v4;
          v4 = 0LL;
          *(_DWORD *)(BugCheckParameter2 + 1728) = SizeOfBitMap;
          *(_QWORD *)(BugCheckParameter2 + 1752) = v6;
          v6 = 0LL;
          *(_DWORD *)(BugCheckParameter2 + 1744) = v32;
          *(_DWORD *)(BugCheckParameter2 + 1760) = v47;
          if ( *(_QWORD *)(BugCheckParameter2 + 120) )
          {
            RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
            *(_DWORD *)(BugCheckParameter2 + 128) = 0;
            *(_BYTE *)(BugCheckParameter2 + 191) = 0;
          }
        }
      }
      v16 = 0;
      goto LABEL_16;
    }
    v25 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x30354D43u);
    v4 = v25;
    if ( v25 )
    {
      memmove(v25, *(const void **)(BugCheckParameter2 + 120), v24);
      v42 = *(_DWORD *)(BugCheckParameter2 + 112);
      BitMapHeader.SizeOfBitMap = v42;
      BitMapHeader.Buffer = v4;
      if ( *(_DWORD *)(BugCheckParameter2 + 104) )
        RtlMergeBitMaps((__int64)&BitMapHeader, (unsigned int *)&v43);
      v47 = HvpCountSetRangesInVector(&BitMapHeader);
      v26 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 24LL * v47, 0x32354D43u);
      v6 = v26;
      if ( v26 )
      {
        memset(v26, 0, 24LL * v47);
        v35 = 0;
        v40 = 0;
        if ( v47 )
        {
          v27 = (char *)(v6 + 1);
          do
          {
            if ( !(unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&v41, (__int64)&P, 1) )
              break;
            v28 = v43;
            if ( !v43 )
              goto LABEL_49;
            v29 = (int)P;
            v30 = v41;
            *((_DWORD *)v27 + 2) = v41;
            *((_DWORD *)v27 - 2) = v29;
            *(_QWORD *)v27 = v28;
            v27 += 24;
            LODWORD(P) = v30 + v29;
            ++v35;
          }
          while ( v35 < v47 );
        }
        memmove(v4, *(const void **)(BugCheckParameter2 + 120), NumberOfBytes);
        SizeOfBitMap = v42;
        goto LABEL_9;
      }
    }
  }
LABEL_49:
  v16 = 2;
LABEL_16:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v6 )
  {
    if ( v47 )
    {
      v33 = v6 + 1;
      v34 = v47;
      do
      {
        if ( *v33 )
          ExFreePoolWithTag(*v33, 0);
        v33 += 3;
        --v34;
      }
      while ( v34 );
    }
    ExFreePoolWithTag(v6, 0);
  }
  if ( v39 )
    ExFreePoolWithTag(v39, 0);
  return v16;
}
