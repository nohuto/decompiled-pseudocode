/*
 * XREFs of RtlFindClearBits @ 0x180001010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  ULONG SizeOfBitMap; // r15d
  ULONG v6; // r10d
  ULONG v7; // r9d
  PULONG Buffer; // r8
  __int64 v9; // rcx
  int v10; // r12d
  ULONG v11; // r11d
  ULONG v12; // edx
  char *v13; // r14
  ULONG v14; // ebp
  unsigned __int64 *v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  bool v21; // cc
  ULONG v22; // eax
  ULONG v23; // r10d
  int v25; // ecx
  unsigned __int64 *v26; // rbx
  __int64 v27; // rax
  ULONG v28; // r11d
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // r11
  bool v33; // zf
  __int64 v34; // rax
  int v35; // edx
  unsigned __int64 v36; // rax
  char v37; // dl
  unsigned __int64 *v38; // r8
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // r8d
  unsigned int v43; // edx
  __int64 v44; // rax
  ULONG v45; // r9d
  ULONG *v46; // [rsp+38h] [rbp+8h]
  __int64 v47; // [rsp+50h] [rbp+20h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  Buffer = BitMapHeader->Buffer;
  v46 = Buffer;
  if ( !NumberToFind )
    return v6 & 0xFFFFFFF8;
  v9 = (unsigned __int8)Buffer & 4;
  v47 = v9;
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
        v32 = v18 + 8;
        if ( (v14 & 0x3F) == 0 )
          v32 = (unsigned __int64)&v13[8 * v16];
        if ( v17 )
        {
          if ( *++v15 )
            goto LABEL_49;
          v33 = !_BitScanReverse64((unsigned __int64 *)&v34, v17);
          goto LABEL_43;
        }
        v35 = 0;
        while ( 1 )
        {
          v20 = ((unsigned int)(((char *)v15 - v13) >> 3) << 6) - v35;
          if ( v20 > v14 )
            goto LABEL_16;
          v36 = NumberToFind - v35;
          v37 = NumberToFind - v35;
          v38 = &v15[v36 >> 6];
          while ( ++v15 != v38 )
          {
            if ( *v15 )
              goto LABEL_49;
          }
          v39 = v37 & 0x3F;
          if ( !v39 )
            goto LABEL_12;
          v33 = !_BitScanForward64((unsigned __int64 *)&v40, *v15);
          if ( v33 )
            LODWORD(v40) = 64;
          if ( (unsigned int)v40 >= v39 )
            goto LABEL_12;
          do
          {
LABEL_49:
            if ( (unsigned __int64)v15 > v32 )
              goto LABEL_16;
            ++v15;
          }
          while ( *v15 );
          v33 = !_BitScanReverse64((unsigned __int64 *)&v34, *(v15 - 1));
LABEL_43:
          if ( v33 )
            v35 = 64;
          else
            v35 = 63 - v34;
        }
      }
      if ( NumberToFind < 0x40 )
      {
        if ( NumberToFind > 1 )
        {
          v25 = 0;
          v26 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v11 >> 6)];
          while ( v17 != -1 )
          {
LABEL_25:
            v33 = !_BitScanForward64((unsigned __int64 *)&v27, v17);
            if ( v33 )
              LODWORD(v27) = 64;
            if ( v25 + (int)v27 >= NumberToFind )
            {
              LODWORD(v31) = -v25;
LABEL_36:
              v20 = ((unsigned int)(((char *)v15 - v13) >> 3) << 6) + v31;
              v21 = v20 <= v14;
              goto LABEL_11;
            }
            v28 = NumberToFind;
            v29 = ~v17;
            while ( 1 )
            {
              v29 &= v29 >> (v28 >> 1);
              if ( !v29 )
                break;
              v28 -= v28 >> 1;
              if ( v28 <= 1 )
              {
                _BitScanForward64((unsigned __int64 *)&v31, v29);
                goto LABEL_36;
              }
            }
            if ( v15 == v26 )
              goto LABEL_16;
            v33 = !_BitScanReverse64((unsigned __int64 *)&v30, v17);
            if ( v33 )
              v25 = 64;
            else
              v25 = 63 - v30;
            v17 = *++v15;
          }
          while ( (unsigned __int64)++v15 <= v18 )
          {
            v17 = *v15;
            if ( *v15 != -1LL )
            {
              v25 = 0;
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
            v22 = v20;
            if ( v20 != -1 )
              break;
            goto LABEL_17;
          }
        }
LABEL_16:
        v20 = -1;
        v22 = -1;
LABEL_17:
        Buffer = v46;
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
          v33 = !_BitScanReverse64((unsigned __int64 *)&v41, v17);
          if ( v33 )
            v42 = 64;
          else
            v42 = 63 - v41;
          v20 = (((unsigned int)(((char *)v15 - v13) >> 3) + 1) << 6) - v42;
          if ( v20 > v14 )
            goto LABEL_16;
          v43 = NumberToFind - v42;
          if ( NumberToFind == v42 )
            goto LABEL_12;
          v17 = *++v15;
          if ( v43 >= 0x40 )
            break;
LABEL_69:
          v33 = !_BitScanForward64((unsigned __int64 *)&v44, v17);
          if ( v33 )
            LODWORD(v44) = 64;
          if ( (unsigned int)v44 >= v43 )
            goto LABEL_12;
        }
        if ( !v17 )
        {
          v43 -= 64;
          if ( !v43 )
            goto LABEL_12;
          v17 = *++v15;
          goto LABEL_69;
        }
      }
    }
    v20 = -1;
    v22 = -1;
LABEL_18:
    if ( !v6 )
      break;
    v9 = v47;
    v45 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v45 = SizeOfBitMap;
    v7 = v45 - 1;
    v6 = 0;
  }
  v23 = v20 - v10;
  if ( v20 == -1 )
    return v22;
  return v23;
}
