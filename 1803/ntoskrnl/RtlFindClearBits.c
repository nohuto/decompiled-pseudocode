/*
 * XREFs of RtlFindClearBits @ 0x1400E6360
 * Callers:
 *     MiSelectRelocationStartHint @ 0x1404F1D2C (MiSelectRelocationStartHint.c)
 *     MiFindEmptyAddressRange @ 0x140594FE0 (MiFindEmptyAddressRange.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  ULONG v4; // ebp
  unsigned int v7; // r9d
  unsigned int *Buffer; // r8
  __int64 v9; // r14
  int v10; // esi
  unsigned int v11; // r10d
  ULONG v12; // edx
  char *v13; // r15
  ULONG v14; // r11d
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rcx
  unsigned int v20; // edx
  ULONG result; // eax
  int v22; // edx
  unsigned __int64 *v23; // rbx
  bool v24; // zf
  __int64 v25; // rcx
  ULONG v26; // r11d
  unsigned __int64 v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rcx
  ULONG v30; // r9d
  unsigned __int64 v31; // r10
  __int64 v32; // rcx
  char v33; // r9
  unsigned __int64 *v34; // r8
  unsigned int v35; // r9d
  __int64 v36; // r8
  __int64 v37; // rdx
  bool v38; // sf
  __int64 v39; // rcx
  int v40; // r8d
  unsigned int v41; // r10d
  __int64 v42; // rcx
  unsigned int *v43; // [rsp+0h] [rbp-58h]
  ULONG v44; // [rsp+68h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = HintIndex;
  if ( HintIndex >= BitMapHeader->SizeOfBitMap )
    v4 = 0;
  v7 = SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v4 & 0xFFFFFFF8;
  Buffer = BitMapHeader->Buffer;
  v9 = (unsigned __int8)Buffer & 4;
  v43 = Buffer;
  v10 = v9 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v7;
    v12 = v10 + v4;
    v13 = (char *)Buffer - (v9 != 0 ? 4 : 0);
    if ( v7 - v4 + 1 >= NumberToFind )
    {
      v14 = v11 - NumberToFind + 1;
      v44 = v14;
      v15 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
      v16 = (unsigned __int64)v12 >> 6;
      v17 = *(_QWORD *)&v13[8 * v16] | ((1LL << (v12 & 0x3F)) - 1);
      v18 = (unsigned __int64 *)&v13[8 * v16];
      if ( NumberToFind > 0x7F )
      {
        v31 = v15 + 8;
        if ( (v14 & 0x3F) == 0 )
          v31 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
        if ( v17 )
        {
          if ( *++v18 )
            goto LABEL_57;
          v24 = !_BitScanReverse64((unsigned __int64 *)&v32, v17);
          if ( v24 )
            LODWORD(v17) = 64;
          else
            LODWORD(v17) = 63 - v32;
        }
LABEL_49:
        v20 = ((unsigned int)(((char *)v18 - v13) >> 3) << 6) - v17;
        if ( v20 > v14 )
          goto LABEL_36;
        v33 = NumberToFind - v17;
        v34 = &v18[(unsigned __int64)(NumberToFind - (unsigned int)v17) >> 6];
        for ( ++v18; v18 != v34; ++v18 )
        {
          if ( *v18 )
            goto LABEL_57;
        }
        v35 = v33 & 0x3F;
        if ( v35 )
        {
          v24 = !_BitScanForward64((unsigned __int64 *)&v36, *v18);
          if ( v24 )
            LODWORD(v36) = 64;
          if ( (unsigned int)v36 < v35 )
          {
LABEL_57:
            while ( (unsigned __int64)v18 <= v31 )
            {
              if ( !*++v18 )
              {
                v24 = !_BitScanReverse64((unsigned __int64 *)&v37, *(v18 - 1));
                if ( v24 )
                  LODWORD(v17) = 64;
                else
                  LODWORD(v17) = 63 - v37;
                goto LABEL_49;
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
LABEL_61:
          v38 = v17 < 0;
          while ( !v38 )
          {
LABEL_63:
            v24 = !_BitScanReverse64((unsigned __int64 *)&v39, v17);
            if ( v24 )
              v40 = 64;
            else
              v40 = 63 - v39;
            v20 = (((unsigned int)(((char *)v18 - v13) >> 3) + 1) << 6) - v40;
            if ( v20 > v14 )
              goto LABEL_36;
            v41 = NumberToFind - v40;
            if ( NumberToFind == v40 )
              goto LABEL_11;
            v17 = v18[1];
            ++v18;
            if ( v41 < 0x40 )
              goto LABEL_68;
            v38 = v17 < 0;
            if ( !v17 )
            {
              v41 -= 64;
              if ( !v41 )
                goto LABEL_11;
              v17 = v18[1];
              ++v18;
LABEL_68:
              v24 = !_BitScanForward64((unsigned __int64 *)&v42, v17);
              if ( v24 )
                LODWORD(v42) = 64;
              if ( (unsigned int)v42 >= v41 )
                goto LABEL_11;
              goto LABEL_61;
            }
          }
          while ( 1 )
          {
            if ( (unsigned __int64)++v18 > v15 )
              goto LABEL_36;
            v17 = *v18;
            if ( (*v18 & 0x8000000000000000uLL) == 0LL )
              goto LABEL_63;
          }
        }
        if ( NumberToFind <= 1 )
        {
          if ( v17 == -1 )
          {
            while ( (unsigned __int64)++v18 <= v15 )
            {
              v17 = *v18;
              if ( *v18 != -1LL )
                goto LABEL_10;
            }
          }
          else
          {
LABEL_10:
            _BitScanForward64(&v19, ~v17);
            v20 = v19 + ((unsigned int)(((char *)v18 - v13) >> 3) << 6);
            if ( v20 <= v14 )
              goto LABEL_11;
          }
LABEL_36:
          v20 = -1;
LABEL_37:
          Buffer = v43;
          goto LABEL_38;
        }
        v22 = 0;
        v23 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v11 >> 6)];
        while ( 1 )
        {
          if ( v17 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v18 > v15 )
                goto LABEL_25;
              v17 = *v18;
              if ( *v18 != -1LL )
              {
                v22 = 0;
                break;
              }
            }
          }
          v24 = !_BitScanForward64((unsigned __int64 *)&v25, v17);
          if ( v24 )
            LODWORD(v25) = 64;
          if ( v22 + (int)v25 >= NumberToFind )
            break;
          v26 = NumberToFind;
          v27 = ~v17;
          while ( 1 )
          {
            v27 &= v27 >> (v26 >> 1);
            if ( !v27 )
              break;
            v26 -= v26 >> 1;
            if ( v26 <= 1 )
            {
              _BitScanForward64((unsigned __int64 *)&v28, v27);
              goto LABEL_24;
            }
          }
          if ( v18 == v23 )
            goto LABEL_36;
          v24 = !_BitScanReverse64((unsigned __int64 *)&v29, v17);
          if ( v24 )
            v22 = 64;
          else
            v22 = 63 - v29;
          v17 = v18[1];
          ++v18;
        }
        LODWORD(v28) = -v22;
LABEL_24:
        v20 = ((unsigned int)(((char *)v18 - v13) >> 3) << 6) + v28;
        if ( v20 > v44 )
        {
LABEL_25:
          v20 = -1;
          goto LABEL_37;
        }
      }
LABEL_11:
      if ( v20 != -1 )
        break;
      goto LABEL_37;
    }
    v20 = -1;
LABEL_38:
    if ( !v4 )
      break;
    v30 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v30 = SizeOfBitMap;
    v7 = v30 - 1;
    v4 = 0;
  }
  result = v20 - v10;
  if ( v20 == -1 )
    return -1;
  return result;
}
