/*
 * XREFs of RtlFindSetBits @ 0x18008EDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindSetBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  ULONG SizeOfBitMap; // r15d
  ULONG v6; // r11d
  ULONG v7; // r9d
  PULONG Buffer; // r8
  __int64 v9; // rcx
  int v10; // r12d
  ULONG v11; // ebx
  char *v12; // r14
  ULONG v13; // ebp
  unsigned __int64 v14; // rax
  char *v15; // r9
  signed __int64 v16; // r10
  unsigned __int64 v17; // rdi
  int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  bool v21; // cc
  ULONG v22; // eax
  ULONG v23; // r11d
  int v25; // ecx
  char *v26; // rbx
  bool v27; // zf
  __int64 v28; // rax
  ULONG v29; // r8d
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  bool v32; // sf
  __int64 v33; // rax
  unsigned int v34; // ecx
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  int v38; // ecx
  char v39; // r8
  char *v40; // rcx
  unsigned int v41; // r8d
  __int64 v42; // rcx
  ULONG v43; // r9d
  __int64 v44; // rdx
  ULONG *v45; // [rsp+38h] [rbp+8h]
  __int64 v46; // [rsp+50h] [rbp+20h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  Buffer = BitMapHeader->Buffer;
  v45 = Buffer;
  if ( !NumberToFind )
    return v6 & 0xFFFFFFF8;
  v9 = (unsigned __int8)Buffer & 4;
  v46 = v9;
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
        v36 = v17 + 8;
        if ( (v13 & 0x3F) == 0 )
          v36 = (unsigned __int64)&v12[8 * v14];
        if ( v16 )
        {
          v15 += 8;
          if ( *(_QWORD *)v15 != -1LL )
            goto LABEL_66;
          v27 = !_BitScanReverse64((unsigned __int64 *)&v37, v16);
          if ( v27 )
LABEL_77:
            v38 = 64;
          else
            v38 = 63 - v37;
        }
        else
        {
          v38 = 0;
        }
LABEL_57:
        v20 = ((unsigned int)((v15 - v12) >> 3) << 6) - v38;
        if ( v20 > v13 )
          goto LABEL_33;
        v39 = NumberToFind - v38;
        v40 = &v15[8 * ((unsigned __int64)(NumberToFind - v38) >> 6)];
        while ( 1 )
        {
          v15 += 8;
          if ( v15 == v40 )
            break;
          if ( *(_QWORD *)v15 != -1LL )
            goto LABEL_66;
        }
        v41 = v39 & 0x3F;
        if ( v41 )
        {
          v27 = !_BitScanForward64((unsigned __int64 *)&v42, ~*(_QWORD *)v15);
          if ( v27 )
            LODWORD(v42) = 64;
          if ( (unsigned int)v42 < v41 )
          {
LABEL_66:
            while ( (unsigned __int64)v15 <= v36 )
            {
              v15 += 8;
              if ( *(_QWORD *)v15 == -1LL )
              {
                v27 = !_BitScanReverse64((unsigned __int64 *)&v44, ~*((_QWORD *)v15 - 1));
                if ( v27 )
                  goto LABEL_77;
                v38 = 63 - v44;
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
            v25 = 0;
            v26 = &v12[8 * ((unsigned __int64)v11 >> 6)];
            while ( v16 != -1 )
            {
LABEL_21:
              v27 = !_BitScanForward64((unsigned __int64 *)&v28, v16);
              if ( v27 )
                LODWORD(v28) = 64;
              if ( v25 + (int)v28 >= NumberToFind )
              {
                LODWORD(v30) = -v25;
LABEL_32:
                v20 = ((unsigned int)((v15 - v12) >> 3) << 6) + v30;
                v21 = v20 <= v13;
                goto LABEL_11;
              }
              v29 = NumberToFind;
              v30 = ~v16;
              while ( 1 )
              {
                v30 &= v30 >> (v29 >> 1);
                if ( !v30 )
                  break;
                v29 -= v29 >> 1;
                if ( v29 <= 1 )
                {
                  _BitScanForward64(&v30, v30);
                  goto LABEL_32;
                }
              }
              if ( v15 == v26 )
                goto LABEL_33;
              v27 = !_BitScanReverse64((unsigned __int64 *)&v31, v16);
              if ( v27 )
                v25 = 64;
              else
                v25 = 63 - v31;
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
                v25 = 0;
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
          v22 = -1;
LABEL_34:
          Buffer = v45;
          goto LABEL_72;
        }
        do
        {
LABEL_35:
          v32 = v16 < 0;
          do
          {
            if ( v32 )
            {
              v15 += 8;
              if ( (unsigned __int64)v15 > v17 )
                goto LABEL_33;
              v16 = ~*(_QWORD *)v15;
              goto LABEL_35;
            }
            v27 = !_BitScanReverse64((unsigned __int64 *)&v33, v16);
            if ( !v27 )
              v18 = 63 - v33;
            v20 = (((unsigned int)((v15 - v12) >> 3) + 1) << 6) - v18;
            if ( v20 > v13 )
              goto LABEL_33;
            v34 = NumberToFind - v18;
            if ( NumberToFind == v18 )
              goto LABEL_12;
            v15 += 8;
            v18 = 64;
            v16 = ~*(_QWORD *)v15;
            if ( v34 < 0x40 )
              goto LABEL_47;
            v32 = v16 < 0;
          }
          while ( *(_QWORD *)v15 != -1LL );
          v34 -= 64;
          if ( !v34 )
            break;
          v15 += 8;
          v16 = ~*(_QWORD *)v15;
LABEL_47:
          v27 = !_BitScanForward64((unsigned __int64 *)&v35, v16);
          if ( v27 )
            LODWORD(v35) = 64;
        }
        while ( (unsigned int)v35 < v34 );
      }
LABEL_12:
      v22 = v20;
      if ( v20 != -1 )
        break;
      goto LABEL_34;
    }
    v20 = -1;
    v22 = -1;
LABEL_72:
    if ( !v6 )
      break;
    v9 = v46;
    v43 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v43 = SizeOfBitMap;
    v7 = v43 - 1;
    v6 = 0;
  }
  v23 = v20 - v10;
  if ( v20 == -1 )
    return v22;
  return v23;
}
