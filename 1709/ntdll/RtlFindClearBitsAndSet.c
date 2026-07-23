/*
 * XREFs of RtlFindClearBitsAndSet @ 0x18001CF80
 * Callers:
 *     LdrpAcquireTlsIndex @ 0x18001CC28 (LdrpAcquireTlsIndex.c)
 *     RtlFlsAlloc @ 0x18001CDA0 (RtlFlsAlloc.c)
 * Callees:
 *     RtlSetBits @ 0x18001D2C0 (RtlSetBits.c)
 */

ULONG __cdecl RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  _RTL_BITMAP *v5; // r13
  ULONG v6; // ebx
  unsigned int v7; // r9d
  unsigned int *Buffer; // rdi
  int v9; // r12d
  unsigned int v10; // r10d
  ULONG v11; // edx
  char *v12; // r14
  ULONG v13; // ebp
  unsigned __int64 *v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  bool v20; // cc
  ULONG v21; // ebx
  int v23; // ecx
  unsigned __int64 *v24; // rdi
  bool v25; // zf
  __int64 v26; // rax
  ULONG v27; // r10d
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  ULONG v30; // r9d
  bool v31; // sf
  __int64 v32; // rax
  int v33; // r8d
  unsigned int v34; // ecx
  __int64 v35; // rax
  unsigned __int64 v36; // r10
  __int64 v37; // rax
  int v38; // ecx
  unsigned __int64 v39; // rax
  char v40; // cl
  unsigned __int64 *v41; // r8
  unsigned int v42; // ecx
  __int64 v43; // rax
  ULONG v45; // [rsp+70h] [rbp+18h]
  unsigned int *v46; // [rsp+78h] [rbp+20h]

  v45 = HintIndex;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = BitMapHeader;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v21 = v6 & 0xFFFFFFF8;
    goto LABEL_15;
  }
  Buffer = BitMapHeader->Buffer;
  v46 = Buffer;
  v9 = ((unsigned __int8)Buffer & 4) != 0LL ? 0x20 : 0;
  while ( 1 )
  {
    v10 = v9 + v7;
    v11 = v9 + v6;
    v12 = (char *)Buffer - (((unsigned __int8)v46 & 4) != 0LL ? 4 : 0);
    if ( v7 - v6 + 1 >= NumberToFind )
    {
      v13 = v10 - NumberToFind + 1;
      v14 = (unsigned __int64 *)&v12[8 * ((unsigned __int64)v11 >> 6)];
      v15 = (unsigned __int64)v13 >> 6;
      v16 = ((1LL << (v11 & 0x3F)) - 1) | *v14;
      v17 = (unsigned __int64)&v12[8 * v15];
      if ( NumberToFind > 0x7F )
      {
        v36 = v17 + 8;
        if ( (v13 & 0x3F) == 0 )
          v36 = (unsigned __int64)&v12[8 * v15];
        if ( v16 )
        {
          if ( *++v14 )
            goto LABEL_78;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v37, v16);
          if ( v25 )
            v38 = 64;
          else
LABEL_60:
            v38 = 63 - v37;
        }
        else
        {
          v38 = 0;
        }
LABEL_61:
        v19 = ((unsigned int)(((char *)v14 - v12) >> 3) << 6) - v38;
        if ( v19 > v13 )
          goto LABEL_35;
        v39 = NumberToFind - v38;
        v40 = NumberToFind - v38;
        v41 = &v14[v39 >> 6];
        while ( ++v14 != v41 )
        {
          if ( *v14 )
            goto LABEL_78;
        }
        v42 = v40 & 0x3F;
        if ( v42 )
        {
          v25 = !_BitScanForward64((unsigned __int64 *)&v43, *v14);
          if ( v25 )
            LODWORD(v43) = 64;
          if ( (unsigned int)v43 < v42 )
          {
LABEL_78:
            while ( (unsigned __int64)v14 <= v36 )
            {
              if ( !*++v14 )
              {
                v25 = !_BitScanReverse64((unsigned __int64 *)&v37, *(v14 - 1));
                if ( !v25 )
                  goto LABEL_60;
                v38 = 64;
                goto LABEL_61;
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
            v23 = 0;
            v24 = (unsigned __int64 *)&v12[8 * ((unsigned __int64)v10 >> 6)];
            while ( v16 != -1 )
            {
LABEL_23:
              v25 = !_BitScanForward64((unsigned __int64 *)&v26, v16);
              if ( v25 )
                LODWORD(v26) = 64;
              if ( v23 + (int)v26 >= NumberToFind )
              {
                LODWORD(v28) = -v23;
LABEL_34:
                v19 = ((unsigned int)(((char *)v14 - v12) >> 3) << 6) + v28;
                v20 = v19 <= v13;
                goto LABEL_11;
              }
              v27 = NumberToFind;
              v28 = ~v16;
              while ( 1 )
              {
                v28 &= v28 >> (v27 >> 1);
                if ( !v28 )
                  break;
                v27 -= v27 >> 1;
                if ( v27 <= 1 )
                {
                  _BitScanForward64(&v28, v28);
                  goto LABEL_34;
                }
              }
              if ( v14 == v24 )
                goto LABEL_35;
              v25 = !_BitScanReverse64((unsigned __int64 *)&v29, v16);
              if ( v25 )
                v23 = 64;
              else
                v23 = 63 - v29;
              v16 = *++v14;
            }
            while ( (unsigned __int64)++v14 <= v17 )
            {
              v16 = *v14;
              if ( *v14 != -1LL )
              {
                v23 = 0;
                goto LABEL_23;
              }
            }
          }
          else
          {
            while ( v16 == -1 )
            {
              if ( (unsigned __int64)++v14 > v17 )
                goto LABEL_35;
              v16 = *v14;
            }
            _BitScanForward64(&v18, ~v16);
            v19 = v18 + ((unsigned int)(((char *)v14 - v12) >> 3) << 6);
            v20 = v19 <= v13;
LABEL_11:
            if ( v20 )
              goto LABEL_12;
          }
LABEL_35:
          v19 = -1;
LABEL_36:
          HintIndex = v45;
          goto LABEL_37;
        }
        do
        {
LABEL_45:
          v31 = v16 < 0;
          do
          {
            if ( v31 )
            {
              if ( (unsigned __int64)++v14 > v17 )
                goto LABEL_35;
              v16 = *v14;
              goto LABEL_45;
            }
            v25 = !_BitScanReverse64((unsigned __int64 *)&v32, v16);
            if ( v25 )
              v33 = 64;
            else
              v33 = 63 - v32;
            v19 = (((unsigned int)(((char *)v14 - v12) >> 3) + 1) << 6) - v33;
            if ( v19 > v13 )
              goto LABEL_35;
            v34 = NumberToFind - v33;
            if ( NumberToFind == v33 )
              goto LABEL_12;
            v16 = *++v14;
            if ( v34 < 0x40 )
              goto LABEL_51;
            v31 = v16 < 0;
          }
          while ( v16 );
          v34 -= 64;
          if ( !v34 )
            break;
          v16 = *++v14;
LABEL_51:
          v25 = !_BitScanForward64((unsigned __int64 *)&v35, v16);
          if ( v25 )
            LODWORD(v35) = 64;
        }
        while ( (unsigned int)v35 < v34 );
      }
LABEL_12:
      if ( v19 != -1 )
        break;
      goto LABEL_36;
    }
    v19 = -1;
LABEL_37:
    if ( !v6 )
      break;
    Buffer = v46;
    v30 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v30 = SizeOfBitMap;
    v7 = v30 - 1;
    v6 = 0;
  }
  v5 = BitMapHeader;
  v21 = v19 - v9;
  if ( v19 == -1 )
    v21 = -1;
LABEL_15:
  if ( v21 != -1 )
    RtlSetBits(v5, v21, NumberToFind);
  return v21;
}
