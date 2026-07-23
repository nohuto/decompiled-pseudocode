/*
 * XREFs of RtlFindClearRuns @ 0x1800E9650
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800E9950 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  unsigned int SizeOfBitMap; // esi
  ULONG v5; // edi
  unsigned int *Buffer; // rcx
  int v8; // edx
  ULONG v11; // r8d
  ULONG v12; // r9d
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  int v15; // eax
  unsigned __int8 v16; // r10
  __int64 v17; // r14
  ULONG v18; // r9d
  ULONG v19; // eax
  signed int v20; // edi
  __int64 v21; // rdx
  _RTL_BITMAP_RUN *i; // rcx
  __int64 v23; // rcx
  unsigned __int8 v24; // r10
  __int64 v25; // r14
  unsigned __int8 v26; // di
  int v27; // ebp
  ULONG v28; // eax
  signed int v29; // esi
  __int64 v30; // rdx
  _RTL_BITMAP_RUN *j; // rcx
  __int64 v32; // rcx
  ULONG v33; // eax
  ULONG v34; // r10d
  __int64 v35; // rdx
  _RTL_BITMAP_RUN *k; // rcx
  __int64 v37; // rdx
  ULONG v39; // [rsp+0h] [rbp-48h]
  int v40; // [rsp+4h] [rbp-44h]
  char v41; // [rsp+8h] [rbp-40h]
  unsigned int *v42; // [rsp+10h] [rbp-38h]
  int v43; // [rsp+50h] [rbp+8h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = 0;
  Buffer = BitMapHeader->Buffer;
  v41 = SizeOfBitMap;
  v39 = 0;
  v8 = SizeOfBitMap & 7;
  v40 = v8;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = (SizeOfBitMap >> 3) + (v8 != 0);
  if ( v14 )
  {
    v15 = 0;
    v43 = 0;
    while ( 1 )
    {
      v16 = *(_BYTE *)Buffer;
      Buffer = (unsigned int *)((char *)Buffer + 1);
      v42 = Buffer;
      if ( v13 == v14 - 1 && v8 )
      {
        v16 |= byte_180123FC0[SizeOfBitMap & 7];
        v15 = v43;
      }
      if ( v16 )
      {
        v17 = (unsigned __int8)RtlpBitsClearLow[v16];
        v18 = v17 + v12;
        if ( v18 && (v11 < SizeOfRunArray || RunArray[v11 - 1].NumberOfBits < v18) )
        {
          v19 = v11 + 1;
          if ( v11 >= SizeOfRunArray )
            v19 = v11;
          v11 = v19;
          v20 = v19 - 2;
          if ( LocateLongestRuns )
          {
            v21 = v20;
            for ( i = &RunArray[v20 + 1]; v21 >= 0 && i[-1].NumberOfBits < v18; --i )
            {
              --v20;
              --v21;
              *i = i[-1];
            }
          }
          v23 = v20 + 1;
          RunArray[v23].NumberOfBits = v18;
          RunArray[v23].StartingIndex = v39;
          if ( !LocateLongestRuns && v19 >= SizeOfRunArray )
            return v11;
        }
        v12 = (unsigned __int8)RtlpBitsClearHigh[v16];
        v5 = v43 - v12 + 8;
        v39 = v5;
        v24 = byte_1801265C8[v17] | byte_180123FC0[8 - v12] | v16;
        if ( v24 != 0xFF )
        {
          do
          {
            if ( v11 >= SizeOfRunArray && RunArray[v11 - 1].NumberOfBits >= RtlpBitsClearAnywhere[v24] )
              break;
            v25 = RtlpBitsClearAnywhere[v24];
            v26 = byte_1801265C8[v25];
            v27 = 0;
            while ( (v26 & v24) != 0 )
            {
              v26 *= 2;
              ++v27;
            }
            v28 = v11 + 1;
            if ( v11 >= SizeOfRunArray )
              v28 = v11;
            v11 = v28;
            v29 = v28 - 2;
            if ( LocateLongestRuns )
            {
              v30 = v29;
              for ( j = &RunArray[v29 + 1]; v30 >= 0 && j[-1].NumberOfBits < (unsigned __int8)v25; --j )
              {
                --v29;
                --v30;
                *j = j[-1];
              }
            }
            v32 = v29 + 1;
            RunArray[v32].NumberOfBits = (unsigned __int8)v25;
            RunArray[v32].StartingIndex = v27 + v43;
            if ( !LocateLongestRuns && v28 >= SizeOfRunArray )
              return v11;
            v24 |= v26;
          }
          while ( v24 != 0xFF );
          v5 = v43 - v12 + 8;
        }
        v15 = v43;
        Buffer = v42;
        v8 = v40;
      }
      else
      {
        v5 = v39;
        v12 += 8;
      }
      v15 += 8;
      ++v13;
      v43 = v15;
      if ( v13 >= v14 )
        break;
      LOBYTE(SizeOfBitMap) = v41;
    }
  }
  if ( v12 && (v11 < SizeOfRunArray || RunArray[v11 - 1].NumberOfBits < v12) )
  {
    v33 = v11 + 1;
    if ( v11 >= SizeOfRunArray )
      v33 = v11;
    v11 = v33;
    v34 = v33 - 2;
    if ( LocateLongestRuns )
    {
      v35 = (int)v34;
      for ( k = &RunArray[(int)v34 + 1]; v35 >= 0 && k[-1].NumberOfBits < v12; --k )
      {
        --v34;
        --v35;
        *k = k[-1];
      }
    }
    v37 = (int)(v34 + 1);
    RunArray[v37].NumberOfBits = v12;
    RunArray[v37].StartingIndex = v5;
  }
  return v11;
}
