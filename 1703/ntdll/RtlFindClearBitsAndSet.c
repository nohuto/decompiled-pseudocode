/*
 * XREFs of RtlFindClearBitsAndSet @ 0x180059710
 * Callers:
 *     sub_1800593D8 @ 0x1800593D8 (sub_1800593D8.c)
 *     RtlFlsAlloc @ 0x180059530 (RtlFlsAlloc.c)
 * Callees:
 *     RtlSetBits @ 0x180059A60 (RtlSetBits.c)
 */

ULONG __cdecl RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  ULONG SizeOfBitMap; // r15d
  PULONG Buffer; // rdi
  _RTL_BITMAP *v6; // r13
  ULONG v7; // ebx
  ULONG v8; // r9d
  __int64 v9; // r13
  int v10; // r12d
  ULONG v11; // r10d
  ULONG v12; // edx
  char *v13; // r14
  ULONG v14; // ebp
  unsigned __int64 *v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  bool v21; // cc
  int v22; // eax
  ULONG v23; // ebx
  int v25; // ecx
  unsigned __int64 *v26; // rdi
  bool v27; // zf
  __int64 v28; // rax
  ULONG v29; // r10d
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  ULONG v33; // r9d
  unsigned __int64 v34; // r10
  __int64 v35; // rax
  int v36; // edx
  unsigned __int64 v37; // rax
  char v38; // dl
  unsigned __int64 *v39; // r8
  unsigned int v40; // edx
  __int64 v41; // rax
  bool v42; // sf
  __int64 v43; // rax
  int v44; // r8d
  unsigned int v45; // edx
  __int64 v46; // rax
  ULONG v48; // [rsp+70h] [rbp+18h]
  ULONG *v49; // [rsp+78h] [rbp+20h]

  v48 = HintIndex;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v6 = BitMapHeader;
  v49 = Buffer;
  v7 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v23 = v7 & 0xFFFFFFF8;
    goto LABEL_15;
  }
  v9 = (unsigned __int8)Buffer & 4;
  v10 = v9 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v8;
    v12 = v10 + v7;
    v13 = (char *)Buffer - (v9 != 0 ? 4 : 0);
    if ( v8 - v7 + 1 >= NumberToFind )
    {
      v14 = v11 - NumberToFind + 1;
      v15 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v12 >> 6)];
      v16 = (unsigned __int64)v14 >> 6;
      v17 = ((1LL << (v12 & 0x3F)) - 1) | *v15;
      v18 = (unsigned __int64)&v13[8 * v16];
      if ( NumberToFind > 0x7F )
      {
        v34 = v18 + 8;
        if ( (v14 & 0x3F) == 0 )
          v34 = (unsigned __int64)&v13[8 * v16];
        if ( v17 )
        {
          if ( *++v15 )
            goto LABEL_60;
          v27 = !_BitScanReverse64((unsigned __int64 *)&v35, v17);
          if ( v27 )
            v36 = 64;
          else
LABEL_47:
            v36 = 63 - v35;
        }
        else
        {
          v36 = 0;
        }
LABEL_48:
        v20 = ((unsigned int)(((char *)v15 - v13) >> 3) << 6) - v36;
        if ( v20 > v14 )
          goto LABEL_35;
        v37 = NumberToFind - v36;
        v38 = NumberToFind - v36;
        v39 = &v15[v37 >> 6];
        while ( ++v15 != v39 )
        {
          if ( *v15 )
            goto LABEL_60;
        }
        v40 = v38 & 0x3F;
        if ( v40 )
        {
          v27 = !_BitScanForward64((unsigned __int64 *)&v41, *v15);
          if ( v27 )
            LODWORD(v41) = 64;
          if ( (unsigned int)v41 < v40 )
          {
LABEL_60:
            while ( (unsigned __int64)v15 <= v34 )
            {
              if ( !*++v15 )
              {
                v27 = !_BitScanReverse64((unsigned __int64 *)&v35, *(v15 - 1));
                if ( !v27 )
                  goto LABEL_47;
                v36 = 64;
                goto LABEL_48;
              }
            }
            goto LABEL_35;
          }
        }
      }
      else
      {
        if ( NumberToFind < 0x40 )
        {
          if ( NumberToFind > 1 )
          {
            v25 = 0;
            v26 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v11 >> 6)];
            while ( v17 != -1 )
            {
LABEL_23:
              v27 = !_BitScanForward64((unsigned __int64 *)&v28, v17);
              if ( v27 )
                LODWORD(v28) = 64;
              if ( v25 + (int)v28 >= NumberToFind )
              {
                LODWORD(v32) = -v25;
LABEL_34:
                v20 = ((unsigned int)(((char *)v15 - v13) >> 3) << 6) + v32;
                v21 = v20 <= v14;
                goto LABEL_11;
              }
              v29 = NumberToFind;
              v30 = ~v17;
              while ( 1 )
              {
                v30 &= v30 >> (v29 >> 1);
                if ( !v30 )
                  break;
                v29 -= v29 >> 1;
                if ( v29 <= 1 )
                {
                  _BitScanForward64((unsigned __int64 *)&v32, v30);
                  goto LABEL_34;
                }
              }
              if ( v15 == v26 )
                goto LABEL_35;
              v27 = !_BitScanReverse64((unsigned __int64 *)&v31, v17);
              if ( v27 )
                v25 = 64;
              else
                v25 = 63 - v31;
              v17 = *++v15;
            }
            while ( (unsigned __int64)++v15 <= v18 )
            {
              v17 = *v15;
              if ( *v15 != -1LL )
              {
                v25 = 0;
                goto LABEL_23;
              }
            }
          }
          else
          {
            while ( v17 == -1 )
            {
              if ( (unsigned __int64)++v15 > v18 )
                goto LABEL_35;
              v17 = *v15;
            }
            _BitScanForward64(&v19, ~v17);
            v20 = v19 + ((unsigned int)(((char *)v15 - v13) >> 3) << 6);
            v21 = v20 <= v14;
LABEL_11:
            if ( v21 )
              goto LABEL_12;
          }
LABEL_35:
          v20 = -1;
          v22 = -1;
LABEL_36:
          HintIndex = v48;
          goto LABEL_37;
        }
        do
        {
LABEL_65:
          v42 = v17 < 0;
          do
          {
            if ( v42 )
            {
              if ( (unsigned __int64)++v15 > v18 )
                goto LABEL_35;
              v17 = *v15;
              goto LABEL_65;
            }
            v27 = !_BitScanReverse64((unsigned __int64 *)&v43, v17);
            if ( v27 )
              v44 = 64;
            else
              v44 = 63 - v43;
            v20 = (((unsigned int)(((char *)v15 - v13) >> 3) + 1) << 6) - v44;
            if ( v20 > v14 )
              goto LABEL_35;
            v45 = NumberToFind - v44;
            if ( NumberToFind == v44 )
              goto LABEL_12;
            v17 = *++v15;
            if ( v45 < 0x40 )
              goto LABEL_74;
            v42 = v17 < 0;
          }
          while ( v17 );
          v45 -= 64;
          if ( !v45 )
            break;
          v17 = *++v15;
LABEL_74:
          v27 = !_BitScanForward64((unsigned __int64 *)&v46, v17);
          if ( v27 )
            LODWORD(v46) = 64;
        }
        while ( (unsigned int)v46 < v45 );
      }
LABEL_12:
      v22 = v20;
      if ( v20 != -1 )
        break;
      goto LABEL_36;
    }
    v20 = -1;
    v22 = -1;
LABEL_37:
    if ( !v7 )
      break;
    Buffer = v49;
    v33 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v33 = SizeOfBitMap;
    v8 = v33 - 1;
    v7 = 0;
  }
  v6 = BitMapHeader;
  v23 = v20 - v10;
  if ( v20 == -1 )
    v23 = v22;
LABEL_15:
  if ( v23 != -1 )
    RtlSetBits(v6, v23, NumberToFind);
  return v23;
}
