/*
 * XREFs of RtlFindClearBits @ 0x14009B310
 * Callers:
 *     MiSelectRelocationStartHint @ 0x1404960A4 (MiSelectRelocationStartHint.c)
 *     MiFindEmptyAddressRange @ 0x140513B70 (MiFindEmptyAddressRange.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  bool v4; // cf
  ULONG v5; // r14d
  unsigned int *Buffer; // r8
  unsigned int v9; // r9d
  __int64 v10; // rbp
  int v11; // edi
  unsigned int v12; // r10d
  ULONG v13; // edx
  char *v14; // r15
  ULONG v15; // r11d
  unsigned __int64 v16; // r9
  unsigned __int64 *v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned int v20; // edx
  ULONG v21; // ecx
  ULONG result; // eax
  int v23; // edx
  unsigned __int64 *v24; // rsi
  bool v25; // zf
  __int64 v26; // rcx
  ULONG v27; // r11d
  unsigned __int64 v28; // r10
  __int64 v29; // rdx
  __int64 v30; // rcx
  ULONG v31; // r9d
  bool v32; // sf
  __int64 v33; // rcx
  int v34; // r8d
  unsigned int v35; // r10d
  __int64 v36; // rcx
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  char v40; // r9
  unsigned __int64 *v41; // r8
  unsigned int v42; // r9d
  __int64 v43; // r8
  unsigned __int64 v44; // rcx
  __int64 v45; // rdx
  unsigned int *v46; // [rsp+40h] [rbp+8h]
  ULONG v47; // [rsp+48h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = HintIndex < BitMapHeader->SizeOfBitMap;
  v5 = HintIndex;
  Buffer = BitMapHeader->Buffer;
  if ( !v4 )
    v5 = 0;
  v46 = BitMapHeader->Buffer;
  v9 = SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v5 & 0xFFFFFFF8;
  v10 = (__int64)BitMapHeader->Buffer & 4;
  v11 = v10 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v12 = v11 + v9;
    v13 = v11 + v5;
    v14 = (char *)Buffer - (v10 != 0 ? 4 : 0);
    if ( v9 - v5 + 1 >= NumberToFind )
    {
      v15 = v12 - NumberToFind + 1;
      v47 = v15;
      v16 = (unsigned __int64)&v14[8 * ((unsigned __int64)v15 >> 6)];
      v17 = (unsigned __int64 *)&v14[8 * ((unsigned __int64)v13 >> 6)];
      v18 = ((1LL << (v13 & 0x3F)) - 1) | *v17;
      if ( NumberToFind > 0x7F )
      {
        v37 = v16 + 8;
        if ( (v15 & 0x3F) == 0 )
          v37 = (unsigned __int64)&v14[8 * ((unsigned __int64)v15 >> 6)];
        if ( v18 )
        {
          v38 = v17[1];
          ++v17;
          if ( v38 )
            goto LABEL_68;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v39, v18);
          if ( v25 )
            LODWORD(v18) = 64;
          else
            LODWORD(v18) = 63 - v39;
        }
LABEL_60:
        v20 = ((unsigned int)(((char *)v17 - v14) >> 3) << 6) - v18;
        if ( v20 > v15 )
          goto LABEL_36;
        v40 = NumberToFind - v18;
        v41 = &v17[(unsigned __int64)(NumberToFind - (unsigned int)v18) >> 6];
        for ( ++v17; v17 != v41; ++v17 )
        {
          if ( *v17 )
            goto LABEL_68;
        }
        v42 = v40 & 0x3F;
        if ( v42 )
        {
          v25 = !_BitScanForward64((unsigned __int64 *)&v43, *v17);
          if ( v25 )
            LODWORD(v43) = 64;
          if ( (unsigned int)v43 < v42 )
          {
LABEL_68:
            while ( (unsigned __int64)v17 <= v37 )
            {
              v44 = v17[1];
              ++v17;
              if ( !v44 )
              {
                v25 = !_BitScanReverse64((unsigned __int64 *)&v45, *(v17 - 1));
                if ( v25 )
                  LODWORD(v18) = 64;
                else
                  LODWORD(v18) = 63 - v45;
                goto LABEL_60;
              }
            }
            goto LABEL_36;
          }
        }
      }
      else
      {
        if ( NumberToFind >= 0x40 )
        {
LABEL_43:
          v32 = v18 < 0;
          while ( !v32 )
          {
LABEL_45:
            v25 = !_BitScanReverse64((unsigned __int64 *)&v33, v18);
            if ( v25 )
              v34 = 64;
            else
              v34 = 63 - v33;
            v20 = (((unsigned int)(((char *)v17 - v14) >> 3) + 1) << 6) - v34;
            if ( v20 > v15 )
              goto LABEL_36;
            v35 = NumberToFind - v34;
            if ( NumberToFind == v34 )
              goto LABEL_11;
            v18 = v17[1];
            ++v17;
            if ( v35 < 0x40 )
              goto LABEL_50;
            v32 = v18 < 0;
            if ( !v18 )
            {
              v35 -= 64;
              if ( !v35 )
                goto LABEL_11;
              v18 = v17[1];
              ++v17;
LABEL_50:
              v25 = !_BitScanForward64((unsigned __int64 *)&v36, v18);
              if ( v25 )
                LODWORD(v36) = 64;
              if ( (unsigned int)v36 >= v35 )
                goto LABEL_11;
              goto LABEL_43;
            }
          }
          while ( 1 )
          {
            if ( (unsigned __int64)++v17 > v16 )
              goto LABEL_36;
            v18 = *v17;
            if ( (*v17 & 0x8000000000000000uLL) == 0LL )
              goto LABEL_45;
          }
        }
        if ( NumberToFind <= 1 )
        {
          if ( v18 == -1 )
          {
            while ( (unsigned __int64)++v17 <= v16 )
            {
              v18 = *v17;
              if ( *v17 != -1LL )
                goto LABEL_10;
            }
          }
          else
          {
LABEL_10:
            _BitScanForward64(&v19, ~v18);
            v20 = v19 + ((unsigned int)(((char *)v17 - v14) >> 3) << 6);
            if ( v20 <= v15 )
              goto LABEL_11;
          }
LABEL_36:
          v20 = -1;
          v21 = -1;
LABEL_37:
          Buffer = v46;
          goto LABEL_38;
        }
        v23 = 0;
        v24 = (unsigned __int64 *)&v14[8 * ((unsigned __int64)v12 >> 6)];
        while ( 1 )
        {
          if ( v18 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v17 > v16 )
                goto LABEL_25;
              v18 = *v17;
              if ( *v17 != -1LL )
              {
                v23 = 0;
                break;
              }
            }
          }
          v25 = !_BitScanForward64((unsigned __int64 *)&v26, v18);
          if ( v25 )
            LODWORD(v26) = 64;
          if ( v23 + (int)v26 >= NumberToFind )
            break;
          v27 = NumberToFind;
          v28 = ~v18;
          while ( 1 )
          {
            v28 &= v28 >> (v27 >> 1);
            if ( !v28 )
              break;
            v27 -= v27 >> 1;
            if ( v27 <= 1 )
            {
              _BitScanForward64((unsigned __int64 *)&v29, v28);
              goto LABEL_24;
            }
          }
          if ( v17 == v24 )
            goto LABEL_36;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v30, v18);
          if ( v25 )
            v23 = 64;
          else
            v23 = 63 - v30;
          v18 = v17[1];
          ++v17;
        }
        LODWORD(v29) = -v23;
LABEL_24:
        v20 = ((unsigned int)(((char *)v17 - v14) >> 3) << 6) + v29;
        if ( v20 > v47 )
        {
LABEL_25:
          v20 = -1;
          v21 = -1;
          goto LABEL_37;
        }
      }
LABEL_11:
      v21 = v20;
      if ( v20 != -1 )
        break;
      goto LABEL_37;
    }
    v20 = -1;
    v21 = -1;
LABEL_38:
    if ( !v5 )
      break;
    v31 = NumberToFind + HintIndex;
    v5 = 0;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v31 = SizeOfBitMap;
    v9 = v31 - 1;
  }
  result = v20 - v11;
  if ( v20 == -1 )
    return v21;
  return result;
}
