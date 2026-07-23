/*
 * XREFs of RtlFindSetBitsAndClear @ 0x1800EA5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x180059C40 (RtlClearBits.c)
 */

ULONG __cdecl RtlFindSetBitsAndClear(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  ULONG SizeOfBitMap; // r15d
  PULONG Buffer; // r10
  _RTL_BITMAP *v6; // r13
  ULONG v7; // ebx
  ULONG v8; // r9d
  ULONG v9; // ebx
  __int64 v10; // r13
  int v11; // r12d
  ULONG v12; // r11d
  char *v13; // r14
  unsigned int v14; // edx
  int v15; // eax
  ULONG v16; // ebp
  unsigned __int64 v17; // rax
  char *v18; // r9
  signed __int64 v19; // r10
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r11
  int v22; // ecx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // r8
  char *v27; // rcx
  unsigned int v28; // r8d
  __int64 v29; // rcx
  ULONG v30; // r9d
  int v31; // r8d
  int v32; // ecx
  char *v33; // r11
  __int64 v34; // rax
  ULONG v35; // r8d
  unsigned __int64 v36; // rdx
  bool v37; // sf
  __int64 v38; // rax
  unsigned int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rax
  bool v42; // cc
  unsigned __int64 v43; // rax
  ULONG v46; // [rsp+70h] [rbp+18h]
  ULONG *v47; // [rsp+78h] [rbp+20h]

  v46 = HintIndex;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v6 = BitMapHeader;
  v47 = Buffer;
  v7 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v9 = v7 & 0xFFFFFFF8;
    goto LABEL_78;
  }
  v10 = (unsigned __int8)Buffer & 4;
  v11 = v10 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v12 = v11 + v8;
    v13 = (char *)Buffer - (v10 != 0 ? 4 : 0);
    if ( v8 - v7 + 1 < NumberToFind )
    {
      v14 = -1;
      v15 = -1;
      goto LABEL_29;
    }
    v16 = v12 - NumberToFind + 1;
    v17 = (unsigned __int64)v16 >> 6;
    v18 = &v13[8 * ((unsigned __int64)(v11 + v7) >> 6)];
    v19 = ((1LL << ((v11 + v7) & 0x3F)) - 1) | ~*(_QWORD *)v18;
    v20 = (unsigned __int64)&v13[8 * v17];
    if ( NumberToFind <= 0x7F )
    {
      v31 = 64;
      if ( NumberToFind >= 0x40 )
      {
        do
        {
LABEL_49:
          v37 = v19 < 0;
          do
          {
            if ( v37 )
            {
              v18 += 8;
              if ( (unsigned __int64)v18 > v20 )
                goto LABEL_71;
              v19 = ~*(_QWORD *)v18;
              goto LABEL_49;
            }
            v23 = !_BitScanReverse64((unsigned __int64 *)&v38, v19);
            if ( !v23 )
              v31 = 63 - v38;
            v14 = (((unsigned int)((v18 - v13) >> 3) + 1) << 6) - v31;
            if ( v14 > v16 )
              goto LABEL_71;
            v39 = NumberToFind - v31;
            if ( NumberToFind == v31 )
              goto LABEL_27;
            v18 += 8;
            v31 = 64;
            v19 = ~*(_QWORD *)v18;
            if ( v39 < 0x40 )
              goto LABEL_59;
            v37 = v19 < 0;
          }
          while ( *(_QWORD *)v18 != -1LL );
          v39 -= 64;
          if ( !v39 )
            break;
          v18 += 8;
          v19 = ~*(_QWORD *)v18;
LABEL_59:
          v23 = !_BitScanForward64((unsigned __int64 *)&v40, v19);
          if ( v23 )
            LODWORD(v40) = 64;
        }
        while ( (unsigned int)v40 < v39 );
LABEL_27:
        v15 = v14;
        if ( v14 != -1 )
          break;
        goto LABEL_28;
      }
      if ( NumberToFind <= 1 )
      {
        while ( v19 == -1 )
        {
          v18 += 8;
          if ( (unsigned __int64)v18 > v20 )
            goto LABEL_71;
          v19 = ~*(_QWORD *)v18;
        }
        _BitScanForward64(&v43, ~v19);
        v14 = v43 + ((unsigned int)((v18 - v13) >> 3) << 6);
        v42 = v14 <= v16;
LABEL_70:
        if ( v42 )
          goto LABEL_27;
      }
      else
      {
        v32 = 0;
        v33 = &v13[8 * ((unsigned __int64)v12 >> 6)];
        while ( v19 != -1 )
        {
LABEL_40:
          v23 = !_BitScanForward64((unsigned __int64 *)&v34, v19);
          if ( v23 )
            LODWORD(v34) = 64;
          if ( v32 + (int)v34 >= NumberToFind )
          {
            LODWORD(v36) = -v32;
LABEL_69:
            v14 = ((unsigned int)((v18 - v13) >> 3) << 6) + v36;
            v42 = v14 <= v16;
            goto LABEL_70;
          }
          v35 = NumberToFind;
          v36 = ~v19;
          while ( 1 )
          {
            v36 &= v36 >> (v35 >> 1);
            if ( !v36 )
              break;
            v35 -= v35 >> 1;
            if ( v35 <= 1 )
            {
              _BitScanForward64(&v36, v36);
              goto LABEL_69;
            }
          }
          if ( v18 == v33 )
            goto LABEL_71;
          v23 = !_BitScanReverse64((unsigned __int64 *)&v41, v19);
          if ( v23 )
            v32 = 64;
          else
            v32 = 63 - v41;
          v18 += 8;
          v19 = ~*(_QWORD *)v18;
        }
        while ( 1 )
        {
          v18 += 8;
          if ( (unsigned __int64)v18 > v20 )
            break;
          v19 = ~*(_QWORD *)v18;
          if ( *(_QWORD *)v18 )
          {
            v32 = 0;
            goto LABEL_40;
          }
        }
      }
    }
    else
    {
      v21 = v20 + 8;
      if ( (v16 & 0x3F) == 0 )
        v21 = (unsigned __int64)&v13[8 * v17];
      if ( v19 )
      {
        v18 += 8;
        if ( *(_QWORD *)v18 != -1LL )
          goto LABEL_15;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v24, v19);
        if ( v23 )
LABEL_13:
          v22 = 64;
        else
          v22 = 63 - v24;
      }
      else
      {
        v22 = 0;
      }
LABEL_19:
      v14 = ((unsigned int)((v18 - v13) >> 3) << 6) - v22;
      if ( v14 <= v16 )
      {
        v26 = NumberToFind - v22;
        v27 = &v18[8 * ((unsigned __int64)(NumberToFind - v22) >> 6)];
        while ( 1 )
        {
          v18 += 8;
          if ( v18 == v27 )
            break;
          if ( *(_QWORD *)v18 != -1LL )
            goto LABEL_15;
        }
        v28 = v26 & 0x3F;
        if ( !v28 )
          goto LABEL_27;
        v23 = !_BitScanForward64((unsigned __int64 *)&v29, ~*(_QWORD *)v18);
        if ( v23 )
          LODWORD(v29) = 64;
        if ( (unsigned int)v29 >= v28 )
          goto LABEL_27;
LABEL_15:
        while ( (unsigned __int64)v18 <= v21 )
        {
          v18 += 8;
          if ( *(_QWORD *)v18 == -1LL )
          {
            v23 = !_BitScanReverse64((unsigned __int64 *)&v25, ~*((_QWORD *)v18 - 1));
            if ( v23 )
              goto LABEL_13;
            v22 = 63 - v25;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_71:
    v14 = -1;
    v15 = -1;
LABEL_28:
    Buffer = v47;
    HintIndex = v46;
LABEL_29:
    if ( !v7 )
      break;
    v30 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v30 = SizeOfBitMap;
    v8 = v30 - 1;
    v7 = 0;
  }
  v6 = BitMapHeader;
  v9 = v14 - v11;
  if ( v14 == -1 )
    v9 = v15;
LABEL_78:
  if ( v9 != -1 )
    RtlClearBits(v6, v9, NumberToFind);
  return v9;
}
