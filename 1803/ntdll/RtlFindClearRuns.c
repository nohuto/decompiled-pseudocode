/*
 * XREFs of RtlFindClearRuns @ 0x1800E5710
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800E5A10 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  ULONG SizeOfBitMap; // ebp
  ULONG v5; // esi
  ULONG v7; // edx
  BOOL v10; // r15d
  ULONG v11; // r8d
  ULONG v12; // r9d
  bool v13; // zf
  ULONG v14; // r15d
  ULONG v15; // r12d
  PULONG Buffer; // rax
  int v17; // edi
  ULONG v18; // ecx
  unsigned __int8 v19; // r10
  __int64 v20; // r14
  ULONG v21; // r9d
  ULONG result; // eax
  signed int v23; // esi
  __int64 v24; // rdi
  _RTL_BITMAP_RUN *i; // rcx
  __int64 v26; // rcx
  unsigned __int8 v27; // r10
  __int64 v28; // r14
  int v29; // ebp
  unsigned __int8 j; // di
  ULONG v31; // eax
  signed int v32; // esi
  __int64 v33; // rdx
  _RTL_BITMAP_RUN *k; // rcx
  __int64 v35; // rcx
  ULONG v36; // eax
  ULONG v37; // r10d
  __int64 v38; // rdx
  _RTL_BITMAP_RUN *m; // rcx
  __int64 v40; // rdx
  int v41; // [rsp+0h] [rbp-48h]
  ULONG v42; // [rsp+4h] [rbp-44h]
  ULONG v43; // [rsp+8h] [rbp-40h]
  ULONG *v44; // [rsp+10h] [rbp-38h]
  ULONG v45; // [rsp+50h] [rbp+8h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = 0;
  v43 = BitMapHeader->SizeOfBitMap;
  v45 = 0;
  v7 = BitMapHeader->SizeOfBitMap & 7;
  v42 = v7;
  v10 = v7 != 0;
  v11 = 0;
  v12 = 0;
  v13 = (BitMapHeader->SizeOfBitMap >> 3) + v10 == 0;
  v14 = (BitMapHeader->SizeOfBitMap >> 3) + v10;
  v15 = 0;
  Buffer = BitMapHeader->Buffer;
  if ( !v13 )
  {
    v17 = 0;
    v18 = v14 - 1;
    v41 = 0;
    while ( 1 )
    {
      v19 = *(_BYTE *)Buffer;
      v44 = (PULONG)((char *)Buffer + 1);
      if ( v15 == v18 && v7 )
        v19 |= byte_180120DD0[(SizeOfBitMap & 7) + 32];
      if ( v19 )
      {
        v20 = (unsigned __int8)byte_180119500[v19];
        v21 = v20 + v12;
        if ( v21 && (v11 < SizeOfRunArray || RunArray[v11 - 1].NumberOfBits < v21) )
        {
          result = v11 + 1;
          if ( v11 >= SizeOfRunArray )
            result = v11;
          v11 = result;
          v23 = result - 2;
          if ( LocateLongestRuns )
          {
            v24 = v23;
            for ( i = &RunArray[v23 + 1]; v24 >= 0 && i[-1].NumberOfBits < v21; --i )
            {
              --v23;
              --v24;
              *i = i[-1];
            }
            v17 = v41;
          }
          v26 = v23 + 1;
          RunArray[v26].NumberOfBits = v21;
          RunArray[v26].StartingIndex = v45;
          if ( !LocateLongestRuns && result >= SizeOfRunArray )
            return result;
        }
        v12 = (unsigned __int8)byte_1801298D0[v19];
        v5 = v17 - v12 + 8;
        v45 = v5;
        v27 = byte_180120DD0[v20 + 16] | byte_180120DD0[8 - v12 + 32] | v19;
        if ( v27 != 0xFF )
        {
          do
          {
            if ( v11 >= SizeOfRunArray && RunArray[v11 - 1].NumberOfBits >= byte_1801299D0[v27] )
              break;
            v28 = byte_1801299D0[v27];
            v29 = 0;
            for ( j = byte_180120DD0[v28 + 16]; (j & v27) != 0; j *= 2 )
              ++v29;
            v31 = v11 + 1;
            if ( v11 >= SizeOfRunArray )
              v31 = v11;
            v11 = v31;
            v32 = v31 - 2;
            if ( LocateLongestRuns )
            {
              v33 = v32;
              for ( k = &RunArray[v32 + 1]; v33 >= 0 && k[-1].NumberOfBits < (unsigned __int8)v28; --k )
              {
                --v32;
                --v33;
                *k = k[-1];
              }
            }
            v35 = v32 + 1;
            RunArray[v35].NumberOfBits = (unsigned __int8)v28;
            RunArray[v35].StartingIndex = v29 + v41;
            if ( !LocateLongestRuns && v31 >= SizeOfRunArray )
              return v11;
            v27 |= j;
          }
          while ( v27 != 0xFF );
          v5 = v45;
          v17 = v41;
        }
        v7 = v42;
        v18 = v14 - 1;
        LOBYTE(SizeOfBitMap) = v43;
      }
      else
      {
        v5 = v45;
        v12 += 8;
      }
      v17 += 8;
      ++v15;
      v41 = v17;
      if ( v15 >= v14 )
        break;
      Buffer = v44;
    }
  }
  if ( v12 && (v11 < SizeOfRunArray || RunArray[v11 - 1].NumberOfBits < v12) )
  {
    v36 = v11 + 1;
    if ( v11 >= SizeOfRunArray )
      v36 = v11;
    v11 = v36;
    v37 = v36 - 2;
    if ( LocateLongestRuns )
    {
      v38 = (int)v37;
      for ( m = &RunArray[(int)v37 + 1]; v38 >= 0 && m[-1].NumberOfBits < v12; --m )
      {
        --v37;
        --v38;
        *m = m[-1];
      }
    }
    v40 = (int)(v37 + 1);
    RunArray[v40].NumberOfBits = v12;
    RunArray[v40].StartingIndex = v5;
  }
  return v11;
}
