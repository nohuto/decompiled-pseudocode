/*
 * XREFs of RtlFindClearRuns @ 0x140004F90
 * Callers:
 *     RtlFindLongestRunClear @ 0x14023CD10 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  unsigned int SizeOfBitMap; // esi
  PRTL_BITMAP_RUN v5; // r12
  unsigned int v6; // edx
  ULONG v7; // r15d
  unsigned int *Buffer; // r8
  BOOL v9; // ebx
  bool v10; // zf
  unsigned int v11; // ebx
  unsigned int v12; // eax
  ULONG v13; // r14d
  ULONG v14; // r10d
  ULONG v15; // r13d
  int v16; // r11d
  unsigned __int8 v17; // r9
  ULONG v18; // eax
  ULONG v19; // edx
  __int64 v20; // rcx
  _RTL_BITMAP_RUN *m; // r8
  __int64 v22; // rdx
  __int64 v24; // rbp
  ULONG v25; // r10d
  unsigned __int8 v26; // r9
  ULONG v27; // ecx
  ULONG v28; // r12d
  ULONG v29; // r15d
  __int64 v30; // r14
  _RTL_BITMAP_RUN *i; // rdx
  ULONG v32; // ecx
  int v33; // r15d
  __int64 v34; // r12
  char j; // bp
  ULONG v36; // ecx
  ULONG v37; // r14d
  __int64 v38; // rsi
  _RTL_BITMAP_RUN *k; // rdx
  ULONG v40; // ecx
  __int64 v41; // rdx
  ULONG v42; // ecx
  ULONG v43; // ecx
  unsigned int v44; // [rsp+0h] [rbp-58h]
  unsigned int v45; // [rsp+4h] [rbp-54h]
  ULONG v46; // [rsp+60h] [rbp+8h]
  BOOLEAN v49; // [rsp+78h] [rbp+20h]

  v49 = LocateLongestRuns;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = RunArray;
  v45 = BitMapHeader->SizeOfBitMap;
  v6 = BitMapHeader->SizeOfBitMap & 7;
  v7 = SizeOfRunArray;
  Buffer = BitMapHeader->Buffer;
  v9 = v6 != 0;
  v44 = v6;
  v10 = (BitMapHeader->SizeOfBitMap >> 3) + v9 == 0;
  v11 = (BitMapHeader->SizeOfBitMap >> 3) + v9;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( !v10 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = *(_BYTE *)Buffer;
      Buffer = (unsigned int *)((char *)Buffer + 1);
      if ( v12 == v11 - 1 && v6 )
        v17 |= byte_14029EB40[SizeOfBitMap & 7];
      if ( v17 )
      {
        v24 = RtlpBitsClearLow[v17];
        v25 = v24 + v14;
        if ( v25 && (v13 < v7 || v5[v13 - 1].NumberOfBits < v25) )
        {
          v27 = v13 + 1;
          if ( v13 >= v7 )
            v27 = v13;
          v13 = v27;
          v28 = v27;
          v29 = v27 - 2;
          if ( v49 )
          {
            v30 = (int)v29;
            for ( i = &RunArray[(int)v29 + 1]; v30 >= 0 && i[-1].NumberOfBits < v25; --i )
            {
              --v29;
              --v30;
              *i = i[-1];
            }
            v13 = v27;
          }
          v32 = v29 + 1;
          v7 = SizeOfRunArray;
          RunArray[v32].NumberOfBits = v25;
          RunArray[v32].StartingIndex = v15;
          if ( !v49 && v28 >= SizeOfRunArray )
            return v28;
          v5 = RunArray;
        }
        v14 = RtlpBitsClearHigh[v17];
        v15 = v16 - v14 + 8;
        v26 = byte_14029EB30[v24] | byte_14029EB40[8 - v14] | v17;
        if ( v26 != 0xFF )
        {
          while ( v13 < v7 || v5[v13 - 1].NumberOfBits < RtlpBitsClearAnywhere[v26] )
          {
            v33 = 0;
            v34 = RtlpBitsClearAnywhere[v26];
            for ( j = byte_14029EB30[v34]; ((unsigned __int8)j & v26) != 0; ++v33 )
              j *= 2;
            v36 = v13 + 1;
            if ( v13 >= SizeOfRunArray )
              v36 = v13;
            v46 = v36;
            v37 = v36 - 2;
            if ( v49 )
            {
              v38 = (int)v37;
              for ( k = &RunArray[(int)v37 + 1]; v38 >= 0 && k[-1].NumberOfBits < (unsigned __int8)v34; --k )
              {
                --v37;
                --v38;
                *k = k[-1];
              }
            }
            v40 = v37 + 1;
            v13 = v46;
            v41 = (int)v40;
            v42 = (unsigned __int8)v34;
            v5 = RunArray;
            RunArray[v41].NumberOfBits = v42;
            v43 = v16 + v33;
            v7 = SizeOfRunArray;
            RunArray[v41].StartingIndex = v43;
            if ( !v49 && v46 >= SizeOfRunArray )
              return v13;
            v26 |= j;
            if ( v26 == 0xFF )
            {
              v6 = v44;
              LOBYTE(SizeOfBitMap) = v45;
              goto LABEL_6;
            }
          }
        }
        v6 = v44;
        LOBYTE(SizeOfBitMap) = v45;
      }
      else
      {
        v14 += 8;
      }
LABEL_6:
      ++v12;
      v16 += 8;
      if ( v12 >= v11 )
      {
        LocateLongestRuns = v49;
        break;
      }
    }
  }
  if ( v14 && (v13 < v7 || v5[v13 - 1].NumberOfBits < v14) )
  {
    v18 = v13 + 1;
    if ( v13 >= v7 )
      v18 = v13;
    v13 = v18;
    v19 = v18 - 2;
    if ( LocateLongestRuns )
    {
      v20 = (int)v19;
      for ( m = &v5[(int)v19 + 1]; v20 >= 0 && m[-1].NumberOfBits < v14; --m )
      {
        --v19;
        --v20;
        *m = m[-1];
      }
    }
    v22 = (int)(v19 + 1);
    v5[v22].NumberOfBits = v14;
    v5[v22].StartingIndex = v15;
  }
  return v13;
}
