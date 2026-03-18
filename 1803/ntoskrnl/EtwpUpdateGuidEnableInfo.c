/*
 * XREFs of EtwpUpdateGuidEnableInfo @ 0x14058CED4
 * Callers:
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpUpdateFilterData @ 0x14058CE40 (EtwpUpdateFilterData.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x1405908C8 (EtwpReferenceGuidEntry.c)
 */

__int64 __fastcall EtwpUpdateGuidEnableInfo(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  int v5; // eax
  unsigned int v9; // r14d
  __int64 v10; // r15
  __int64 v11; // rcx
  unsigned int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // r10
  ULONG_PTR v15; // rdx
  int v16; // r11d
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  unsigned __int8 v22; // cl
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // r10
  ULONG_PTR v26; // rdx
  int v27; // r11d
  __int64 v28; // r8
  __int64 v29; // r9
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  unsigned __int8 v32; // cl
  char v33; // al
  _OWORD v34[2]; // [rsp+30h] [rbp-20h] BYREF

  v5 = *(_DWORD *)(a2 + 72);
  if ( v5 == 1 )
  {
    *(_BYTE *)(BugCheckParameter2 + 75) ^= (*(_BYTE *)(BugCheckParameter2 + 75) ^ *(_BYTE *)(a2 + 112)) & 1;
    *(_BYTE *)(BugCheckParameter2 + 75) = *(_BYTE *)(BugCheckParameter2 + 75) & 1 | (2 * *(_BYTE *)(a2 + 107));
    *(_WORD *)(BugCheckParameter2 + 72) = *(_WORD *)(a2 + 104);
    *(_BYTE *)(BugCheckParameter2 + 74) = *(_BYTE *)(a2 + 106);
    *(_QWORD *)(BugCheckParameter2 + 64) = a3;
  }
  else if ( !v5 && *(_WORD *)(BugCheckParameter2 + 72) == *(_WORD *)(a2 + 104) )
  {
    *(_BYTE *)(BugCheckParameter2 + 75) &= ~1u;
  }
  v9 = 0;
  v10 = 8LL;
  do
  {
    v11 = 32LL * v9;
    if ( *(_DWORD *)(v11 + BugCheckParameter2 + 112)
      && *(_WORD *)(v11 + BugCheckParameter2 + 118) == *(_WORD *)(a2 + 78) )
    {
      v24 = 32LL * v9;
      *(_OWORD *)(v24 + BugCheckParameter2 + 112) = *(_OWORD *)(a2 + 72);
      *(_OWORD *)(v24 + BugCheckParameter2 + 128) = *(_OWORD *)(a2 + 88);
      memset(v34, 0, sizeof(v34));
      v25 = *(_QWORD *)&v34[1];
      v26 = BugCheckParameter2 + 116;
      v27 = DWORD2(v34[0]);
      v28 = -1LL;
      LOBYTE(v29) = BYTE4(v34[0]);
      *((_QWORD *)&v34[1] + 1) = -1LL;
      do
      {
        if ( *(_DWORD *)(v26 - 4) )
        {
          v32 = *(_BYTE *)v26;
          v33 = v29;
          LODWORD(v34[0]) = 1;
          if ( (unsigned __int8)v29 <= v32 )
            v33 = v32;
          v28 &= *(_QWORD *)(v26 + 20);
          v25 |= *(_QWORD *)(v26 + 12);
          LOBYTE(v29) = v33;
          v27 |= *(_DWORD *)(v26 + 4);
          *((_QWORD *)&v34[1] + 1) = v28;
        }
        v26 += 32LL;
        --v10;
      }
      while ( v10 );
      BYTE4(v34[0]) = v29;
      DWORD2(v34[0]) = v27;
      v30 = v34[0];
      *(_QWORD *)&v34[1] = v25;
      v31 = v34[1];
      *a5 = 1 << v9;
      *(_OWORD *)(BugCheckParameter2 + 80) = v30;
      *(_OWORD *)(BugCheckParameter2 + 96) = v31;
      LOBYTE(v29) = *(_DWORD *)(a2 + 72) == 0;
      EtwpUpdateFilterData(BugCheckParameter2, v9, a2, v29, a4);
      if ( !*(_DWORD *)(a2 + 72) )
        EtwpUnreferenceGuidEntry((PVOID)BugCheckParameter2);
      return 0LL;
    }
    ++v9;
  }
  while ( v9 < 8 );
  if ( *(_DWORD *)(a2 + 72) )
  {
    v12 = 0;
    while ( *(_DWORD *)(32LL * v12 + BugCheckParameter2 + 112) )
    {
      if ( ++v12 >= 8 )
        return 3221225626LL;
    }
    v13 = 32LL * v12;
    *(_OWORD *)(v13 + BugCheckParameter2 + 112) = *(_OWORD *)(a2 + 72);
    *(_OWORD *)(v13 + BugCheckParameter2 + 128) = *(_OWORD *)(a2 + 88);
    memset(v34, 0, sizeof(v34));
    v14 = *(_QWORD *)&v34[1];
    v15 = BugCheckParameter2 + 116;
    v16 = DWORD2(v34[0]);
    v17 = -1LL;
    LOBYTE(v18) = BYTE4(v34[0]);
    *((_QWORD *)&v34[1] + 1) = -1LL;
    do
    {
      if ( *(_DWORD *)(v15 - 4) )
      {
        v22 = *(_BYTE *)v15;
        v23 = v18;
        LODWORD(v34[0]) = 1;
        if ( (unsigned __int8)v18 <= v22 )
          v23 = v22;
        v17 &= *(_QWORD *)(v15 + 20);
        v14 |= *(_QWORD *)(v15 + 12);
        LOBYTE(v18) = v23;
        v16 |= *(_DWORD *)(v15 + 4);
        *((_QWORD *)&v34[1] + 1) = v17;
      }
      v15 += 32LL;
      --v10;
    }
    while ( v10 );
    BYTE4(v34[0]) = v18;
    DWORD2(v34[0]) = v16;
    v19 = v34[0];
    *(_QWORD *)&v34[1] = v14;
    v20 = v34[1];
    *a5 = 1 << v12;
    *(_OWORD *)(BugCheckParameter2 + 80) = v19;
    *(_OWORD *)(BugCheckParameter2 + 96) = v20;
    LOBYTE(v18) = *(_DWORD *)(a2 + 72) == 0;
    EtwpUpdateFilterData(BugCheckParameter2, v12, a2, v18, a4);
    EtwpReferenceGuidEntry(BugCheckParameter2);
    return 0LL;
  }
  return 3221226021LL;
}
