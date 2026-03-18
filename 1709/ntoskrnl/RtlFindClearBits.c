/*
 * XREFs of RtlFindClearBits @ 0x1400A1B90
 * Callers:
 *     MiFindEmptyAddressRange @ 0x1404D06B0 (MiFindEmptyAddressRange.c)
 *     MiSelectRelocationStartHint @ 0x140504844 (MiSelectRelocationStartHint.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  ULONG v4; // ebp
  unsigned int v7; // r9d
  unsigned int *Buffer; // r14
  int v9; // esi
  __int64 v10; // rax
  unsigned int v11; // r10d
  char *v12; // r15
  ULONG v13; // ecx
  ULONG v14; // r11d
  unsigned __int64 v15; // r9
  unsigned __int64 *v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned int v19; // edx
  ULONG result; // eax
  int v21; // edx
  unsigned __int64 *v22; // rdi
  bool v23; // zf
  __int64 v24; // rcx
  ULONG v25; // r11d
  unsigned __int64 v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rcx
  ULONG v29; // r9d
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  char v33; // r9
  unsigned __int64 *v34; // r8
  unsigned int v35; // r9d
  __int64 v36; // r8
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  bool v39; // sf
  __int64 v40; // rcx
  int v41; // r8d
  unsigned int v42; // r10d
  __int64 v43; // rcx
  __int64 v44; // [rsp+40h] [rbp+8h]
  ULONG v45; // [rsp+48h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = HintIndex;
  if ( HintIndex >= BitMapHeader->SizeOfBitMap )
    v4 = 0;
  v7 = SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v4 & 0xFFFFFFF8;
  Buffer = BitMapHeader->Buffer;
  if ( ((unsigned __int8)Buffer & 4) != 0 )
  {
    v9 = 32;
    v10 = 4LL;
  }
  else
  {
    v9 = 0;
    v10 = 0LL;
  }
  v44 = v10;
  while ( 1 )
  {
    v11 = v9 + v7;
    v12 = (char *)Buffer - v10;
    v13 = v9 + v4;
    if ( v7 - v4 + 1 < NumberToFind )
    {
LABEL_79:
      v19 = -1;
      goto LABEL_40;
    }
    v14 = v11 - NumberToFind + 1;
    v45 = v14;
    v15 = (unsigned __int64)&v12[8 * ((unsigned __int64)v14 >> 6)];
    v16 = (unsigned __int64 *)&v12[8 * ((unsigned __int64)v13 >> 6)];
    v17 = ((1LL << (v13 & 0x3F)) - 1) | *v16;
    if ( NumberToFind > 0x7F )
    {
      v30 = v15 + 8;
      if ( (v14 & 0x3F) == 0 )
        v30 = (unsigned __int64)&v12[8 * ((unsigned __int64)v14 >> 6)];
      if ( v17 )
      {
        v31 = v16[1];
        ++v16;
        if ( v31 )
          goto LABEL_58;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v32, v17);
        if ( v23 )
          LODWORD(v17) = 64;
        else
          LODWORD(v17) = 63 - v32;
      }
LABEL_50:
      v19 = ((unsigned int)(((char *)v16 - v12) >> 3) << 6) - v17;
      if ( v19 > v14 )
        goto LABEL_39;
      v33 = NumberToFind - v17;
      v34 = &v16[(unsigned __int64)(NumberToFind - (unsigned int)v17) >> 6];
      for ( ++v16; v16 != v34; ++v16 )
      {
        if ( *v16 )
          goto LABEL_58;
      }
      v35 = v33 & 0x3F;
      if ( v35 )
      {
        v23 = !_BitScanForward64((unsigned __int64 *)&v36, *v16);
        if ( v23 )
          LODWORD(v36) = 64;
        if ( (unsigned int)v36 < v35 )
        {
LABEL_58:
          while ( (unsigned __int64)v16 <= v30 )
          {
            v37 = v16[1];
            ++v16;
            if ( !v37 )
            {
              v23 = !_BitScanReverse64((unsigned __int64 *)&v38, *(v16 - 1));
              if ( v23 )
                LODWORD(v17) = 64;
              else
                LODWORD(v17) = 63 - v38;
              goto LABEL_50;
            }
          }
          goto LABEL_39;
        }
      }
      goto LABEL_13;
    }
    if ( NumberToFind >= 0x40 )
    {
LABEL_62:
      v39 = v17 < 0;
      while ( !v39 )
      {
LABEL_64:
        v23 = !_BitScanReverse64((unsigned __int64 *)&v40, v17);
        if ( v23 )
          v41 = 64;
        else
          v41 = 63 - v40;
        v19 = (((unsigned int)(((char *)v16 - v12) >> 3) + 1) << 6) - v41;
        if ( v19 > v14 )
          goto LABEL_39;
        v42 = NumberToFind - v41;
        if ( NumberToFind == v41 )
          goto LABEL_13;
        v17 = v16[1];
        ++v16;
        if ( v42 < 0x40 )
          goto LABEL_69;
        v39 = v17 < 0;
        if ( !v17 )
        {
          v42 -= 64;
          if ( !v42 )
            goto LABEL_13;
          v17 = v16[1];
          ++v16;
LABEL_69:
          v23 = !_BitScanForward64((unsigned __int64 *)&v43, v17);
          if ( v23 )
            LODWORD(v43) = 64;
          if ( (unsigned int)v43 >= v42 )
            goto LABEL_13;
          goto LABEL_62;
        }
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v16 > v15 )
          goto LABEL_39;
        v17 = *v16;
        if ( (*v16 & 0x8000000000000000uLL) == 0LL )
          goto LABEL_64;
      }
    }
    if ( NumberToFind <= 1 )
    {
      if ( v17 != -1 )
      {
LABEL_12:
        _BitScanForward64(&v18, ~v17);
        v19 = v18 + ((unsigned int)(((char *)v16 - v12) >> 3) << 6);
        if ( v19 > v14 )
          goto LABEL_39;
        goto LABEL_13;
      }
      while ( (unsigned __int64)++v16 <= v15 )
      {
        v17 = *v16;
        if ( *v16 != -1LL )
          goto LABEL_12;
      }
LABEL_39:
      v19 = -1;
      goto LABEL_40;
    }
    v21 = 0;
    v22 = (unsigned __int64 *)&v12[8 * ((unsigned __int64)v11 >> 6)];
    while ( 1 )
    {
      if ( v17 == -1 )
      {
        while ( 1 )
        {
          if ( (unsigned __int64)++v16 > v15 )
            goto LABEL_79;
          v17 = *v16;
          if ( *v16 != -1LL )
          {
            v21 = 0;
            break;
          }
        }
      }
      v23 = !_BitScanForward64((unsigned __int64 *)&v24, v17);
      if ( v23 )
        LODWORD(v24) = 64;
      if ( v21 + (int)v24 >= NumberToFind )
        break;
      v25 = NumberToFind;
      v26 = ~v17;
      while ( 1 )
      {
        v26 &= v26 >> (v25 >> 1);
        if ( !v26 )
          break;
        v25 -= v25 >> 1;
        if ( v25 <= 1 )
        {
          _BitScanForward64((unsigned __int64 *)&v27, v26);
          goto LABEL_26;
        }
      }
      if ( v16 == v22 )
        goto LABEL_39;
      v23 = !_BitScanReverse64((unsigned __int64 *)&v28, v17);
      if ( v23 )
        v21 = 64;
      else
        v21 = 63 - v28;
      v17 = v16[1];
      ++v16;
    }
    LODWORD(v27) = -v21;
LABEL_26:
    v19 = ((unsigned int)(((char *)v16 - v12) >> 3) << 6) + v27;
    if ( v19 > v45 )
    {
      v19 = -1;
      goto LABEL_40;
    }
LABEL_13:
    if ( v19 != -1 )
      break;
LABEL_40:
    if ( !v4 )
      break;
    v10 = v44;
    v29 = NumberToFind + HintIndex;
    v4 = 0;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v29 = SizeOfBitMap;
    v7 = v29 - 1;
  }
  result = v19 - v9;
  if ( v19 == -1 )
    return -1;
  return result;
}
