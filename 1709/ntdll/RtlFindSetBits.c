/*
 * XREFs of RtlFindSetBits @ 0x18008C820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindSetBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  ULONG v6; // r11d
  unsigned int v7; // r9d
  unsigned int *Buffer; // r8
  __int64 v9; // rcx
  int v10; // r12d
  unsigned int v11; // ebx
  char *v12; // r14
  ULONG v13; // ebp
  unsigned __int64 v14; // rax
  char *v15; // r9
  signed __int64 v16; // r10
  unsigned __int64 v17; // rsi
  int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  bool v21; // cc
  ULONG v22; // r11d
  int v24; // ecx
  char *v25; // rbx
  bool v26; // zf
  __int64 v27; // rax
  ULONG v28; // r8d
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  bool v31; // sf
  __int64 v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rax
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  int v37; // ecx
  char v38; // r8
  char *v39; // rcx
  unsigned int v40; // r8d
  __int64 v41; // rcx
  ULONG v42; // r9d
  __int64 v43; // rdx
  unsigned int *v44; // [rsp+38h] [rbp+8h]
  __int64 v45; // [rsp+50h] [rbp+20h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v6 & 0xFFFFFFF8;
  Buffer = BitMapHeader->Buffer;
  v44 = Buffer;
  v9 = (unsigned __int8)Buffer & 4;
  v45 = v9;
  v10 = v9 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v7;
    v12 = (char *)Buffer - (v9 != 0 ? 4 : 0);
    if ( v7 - v6 + 1 >= NumberToFind )
    {
      v13 = v11 - NumberToFind + 1;
      v14 = (unsigned __int64)v13 >> 6;
      v15 = &v12[8 * ((unsigned __int64)(v10 + v6) >> 6)];
      v16 = ((1LL << ((v10 + v6) & 0x3F)) - 1) | ~*(_QWORD *)v15;
      v17 = (unsigned __int64)&v12[8 * v14];
      if ( NumberToFind > 0x7F )
      {
        v35 = v17 + 8;
        if ( (v13 & 0x3F) == 0 )
          v35 = (unsigned __int64)&v12[8 * v14];
        if ( v16 )
        {
          v15 += 8;
          if ( *(_QWORD *)v15 != -1LL )
            goto LABEL_76;
          v26 = !_BitScanReverse64((unsigned __int64 *)&v36, v16);
          if ( v26 )
LABEL_75:
            v37 = 64;
          else
            v37 = 63 - v36;
        }
        else
        {
          v37 = 0;
        }
LABEL_57:
        v20 = ((unsigned int)((v15 - v12) >> 3) << 6) - v37;
        if ( v20 > v13 )
          goto LABEL_33;
        v38 = NumberToFind - v37;
        v39 = &v15[8 * ((unsigned __int64)(NumberToFind - v37) >> 6)];
        while ( 1 )
        {
          v15 += 8;
          if ( v15 == v39 )
            break;
          if ( *(_QWORD *)v15 != -1LL )
            goto LABEL_76;
        }
        v40 = v38 & 0x3F;
        if ( v40 )
        {
          v26 = !_BitScanForward64((unsigned __int64 *)&v41, ~*(_QWORD *)v15);
          if ( v26 )
            LODWORD(v41) = 64;
          if ( (unsigned int)v41 < v40 )
          {
LABEL_76:
            while ( (unsigned __int64)v15 <= v35 )
            {
              v15 += 8;
              if ( *(_QWORD *)v15 == -1LL )
              {
                v26 = !_BitScanReverse64((unsigned __int64 *)&v43, ~*((_QWORD *)v15 - 1));
                if ( v26 )
                  goto LABEL_75;
                v37 = 63 - v43;
                goto LABEL_57;
              }
            }
            goto LABEL_33;
          }
        }
      }
      else
      {
        v18 = 64;
        if ( NumberToFind < 0x40 )
        {
          if ( NumberToFind > 1 )
          {
            v24 = 0;
            v25 = &v12[8 * ((unsigned __int64)v11 >> 6)];
            while ( v16 != -1 )
            {
LABEL_21:
              v26 = !_BitScanForward64((unsigned __int64 *)&v27, v16);
              if ( v26 )
                LODWORD(v27) = 64;
              if ( v24 + (int)v27 >= NumberToFind )
              {
                LODWORD(v29) = -v24;
LABEL_32:
                v20 = ((unsigned int)((v15 - v12) >> 3) << 6) + v29;
                v21 = v20 <= v13;
                goto LABEL_11;
              }
              v28 = NumberToFind;
              v29 = ~v16;
              while ( 1 )
              {
                v29 &= v29 >> (v28 >> 1);
                if ( !v29 )
                  break;
                v28 -= v28 >> 1;
                if ( v28 <= 1 )
                {
                  _BitScanForward64(&v29, v29);
                  goto LABEL_32;
                }
              }
              if ( v15 == v25 )
                goto LABEL_33;
              v26 = !_BitScanReverse64((unsigned __int64 *)&v30, v16);
              if ( v26 )
                v24 = 64;
              else
                v24 = 63 - v30;
              v15 += 8;
              v16 = ~*(_QWORD *)v15;
            }
            while ( 1 )
            {
              v15 += 8;
              if ( (unsigned __int64)v15 > v17 )
                break;
              v16 = ~*(_QWORD *)v15;
              if ( *(_QWORD *)v15 )
              {
                v24 = 0;
                goto LABEL_21;
              }
            }
          }
          else
          {
            while ( v16 == -1 )
            {
              v15 += 8;
              if ( (unsigned __int64)v15 > v17 )
                goto LABEL_33;
              v16 = ~*(_QWORD *)v15;
            }
            _BitScanForward64(&v19, ~v16);
            v20 = v19 + ((unsigned int)((v15 - v12) >> 3) << 6);
            v21 = v20 <= v13;
LABEL_11:
            if ( v21 )
              goto LABEL_12;
          }
LABEL_33:
          v20 = -1;
LABEL_34:
          Buffer = v44;
          goto LABEL_71;
        }
        do
        {
LABEL_35:
          v31 = v16 < 0;
          do
          {
            if ( v31 )
            {
              v15 += 8;
              if ( (unsigned __int64)v15 > v17 )
                goto LABEL_33;
              v16 = ~*(_QWORD *)v15;
              goto LABEL_35;
            }
            v26 = !_BitScanReverse64((unsigned __int64 *)&v32, v16);
            if ( !v26 )
              v18 = 63 - v32;
            v20 = (((unsigned int)((v15 - v12) >> 3) + 1) << 6) - v18;
            if ( v20 > v13 )
              goto LABEL_33;
            v33 = NumberToFind - v18;
            if ( NumberToFind == v18 )
              goto LABEL_12;
            v15 += 8;
            v18 = 64;
            v16 = ~*(_QWORD *)v15;
            if ( v33 < 0x40 )
              goto LABEL_47;
            v31 = v16 < 0;
          }
          while ( *(_QWORD *)v15 != -1LL );
          v33 -= 64;
          if ( !v33 )
            break;
          v15 += 8;
          v16 = ~*(_QWORD *)v15;
LABEL_47:
          v26 = !_BitScanForward64((unsigned __int64 *)&v34, v16);
          if ( v26 )
            LODWORD(v34) = 64;
        }
        while ( (unsigned int)v34 < v33 );
      }
LABEL_12:
      if ( v20 != -1 )
        break;
      goto LABEL_34;
    }
    v20 = -1;
LABEL_71:
    if ( !v6 )
      break;
    v9 = v45;
    v42 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v42 = SizeOfBitMap;
    v7 = v42 - 1;
    v6 = 0;
  }
  v22 = v20 - v10;
  if ( v20 == -1 )
    return -1;
  return v22;
}
