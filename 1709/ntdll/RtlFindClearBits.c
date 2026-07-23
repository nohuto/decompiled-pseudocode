/*
 * XREFs of RtlFindClearBits @ 0x180001010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  ULONG v6; // r10d
  unsigned int v7; // r9d
  unsigned int *Buffer; // r8
  __int64 v9; // rcx
  int v10; // r12d
  unsigned int v11; // r11d
  ULONG v12; // edx
  char *v13; // r14
  ULONG v14; // ebp
  unsigned __int64 *v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  bool v21; // cc
  ULONG v22; // r10d
  int v24; // ecx
  unsigned __int64 *v25; // rbx
  __int64 v26; // rax
  ULONG v27; // r11d
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // r11
  bool v31; // zf
  __int64 v32; // rax
  int v33; // ecx
  unsigned __int64 v34; // rax
  char v35; // cl
  unsigned __int64 *v36; // r8
  unsigned int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r8d
  unsigned int v41; // ecx
  __int64 v42; // rax
  ULONG v43; // r9d
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
    v12 = v10 + v6;
    v13 = (char *)Buffer - (v9 != 0 ? 4 : 0);
    if ( v7 - v6 + 1 >= NumberToFind )
    {
      v14 = v11 - NumberToFind + 1;
      v15 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v12 >> 6)];
      v16 = (unsigned __int64)v14 >> 6;
      v17 = ((1LL << (v12 & 0x3F)) - 1) | *v15;
      v18 = (unsigned __int64)&v13[8 * v16];
      if ( NumberToFind > 0x7F )
      {
        v30 = v18 + 8;
        if ( (v14 & 0x3F) == 0 )
          v30 = (unsigned __int64)&v13[8 * v16];
        if ( v17 )
        {
          if ( *++v15 )
            goto LABEL_73;
          v31 = !_BitScanReverse64((unsigned __int64 *)&v32, v17);
          goto LABEL_43;
        }
        v33 = 0;
        while ( 1 )
        {
          v20 = ((unsigned int)(((char *)v15 - v13) >> 3) << 6) - v33;
          if ( v20 > v14 )
            goto LABEL_16;
          v34 = NumberToFind - v33;
          v35 = NumberToFind - v33;
          v36 = &v15[v34 >> 6];
          while ( ++v15 != v36 )
          {
            if ( *v15 )
              goto LABEL_73;
          }
          v37 = v35 & 0x3F;
          if ( !v37 )
            goto LABEL_12;
          v31 = !_BitScanForward64((unsigned __int64 *)&v38, *v15);
          if ( v31 )
            LODWORD(v38) = 64;
          if ( (unsigned int)v38 >= v37 )
            goto LABEL_12;
          do
          {
LABEL_73:
            if ( (unsigned __int64)v15 > v30 )
              goto LABEL_16;
            ++v15;
          }
          while ( *v15 );
          v31 = !_BitScanReverse64((unsigned __int64 *)&v32, *(v15 - 1));
LABEL_43:
          if ( v31 )
            v33 = 64;
          else
            v33 = 63 - v32;
        }
      }
      if ( NumberToFind < 0x40 )
      {
        if ( NumberToFind > 1 )
        {
          v24 = 0;
          v25 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v11 >> 6)];
          while ( v17 != -1 )
          {
LABEL_25:
            v31 = !_BitScanForward64((unsigned __int64 *)&v26, v17);
            if ( v31 )
              LODWORD(v26) = 64;
            if ( v24 + (int)v26 >= NumberToFind )
            {
              LODWORD(v28) = -v24;
LABEL_36:
              v20 = ((unsigned int)(((char *)v15 - v13) >> 3) << 6) + v28;
              v21 = v20 <= v14;
              goto LABEL_11;
            }
            v27 = NumberToFind;
            v28 = ~v17;
            while ( 1 )
            {
              v28 &= v28 >> (v27 >> 1);
              if ( !v28 )
                break;
              v27 -= v27 >> 1;
              if ( v27 <= 1 )
              {
                _BitScanForward64(&v28, v28);
                goto LABEL_36;
              }
            }
            if ( v15 == v25 )
              goto LABEL_16;
            v31 = !_BitScanReverse64((unsigned __int64 *)&v29, v17);
            if ( v31 )
              v24 = 64;
            else
              v24 = 63 - v29;
            v17 = *++v15;
          }
          while ( (unsigned __int64)++v15 <= v18 )
          {
            v17 = *v15;
            if ( *v15 != -1LL )
            {
              v24 = 0;
              goto LABEL_25;
            }
          }
        }
        else
        {
          while ( v17 == -1 )
          {
            if ( (unsigned __int64)++v15 > v18 )
              goto LABEL_16;
            v17 = *v15;
          }
          _BitScanForward64(&v19, ~v17);
          v20 = v19 + ((unsigned int)(((char *)v15 - v13) >> 3) << 6);
          v21 = v20 <= v14;
LABEL_11:
          if ( v21 )
          {
LABEL_12:
            if ( v20 != -1 )
              break;
            goto LABEL_17;
          }
        }
LABEL_16:
        v20 = -1;
LABEL_17:
        Buffer = v44;
        goto LABEL_18;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v17 < 0 )
          {
            if ( (unsigned __int64)++v15 > v18 )
              goto LABEL_16;
            v17 = *v15;
          }
          v31 = !_BitScanReverse64((unsigned __int64 *)&v39, v17);
          if ( v31 )
            v40 = 64;
          else
            v40 = 63 - v39;
          v20 = (((unsigned int)(((char *)v15 - v13) >> 3) + 1) << 6) - v40;
          if ( v20 > v14 )
            goto LABEL_16;
          v41 = NumberToFind - v40;
          if ( NumberToFind == v40 )
            goto LABEL_12;
          v17 = *++v15;
          if ( v41 >= 0x40 )
            break;
LABEL_63:
          v31 = !_BitScanForward64((unsigned __int64 *)&v42, v17);
          if ( v31 )
            LODWORD(v42) = 64;
          if ( (unsigned int)v42 >= v41 )
            goto LABEL_12;
        }
        if ( !v17 )
        {
          v41 -= 64;
          if ( !v41 )
            goto LABEL_12;
          v17 = *++v15;
          goto LABEL_63;
        }
      }
    }
    v20 = -1;
LABEL_18:
    if ( !v6 )
      break;
    v9 = v45;
    v43 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v43 = SizeOfBitMap;
    v7 = v43 - 1;
    v6 = 0;
  }
  v22 = v20 - v10;
  if ( v20 == -1 )
    return -1;
  return v22;
}
