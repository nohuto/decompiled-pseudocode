/*
 * XREFs of RtlFindSetBits @ 0x1400165A0
 * Callers:
 *     HvpRemoveFreeCellHint @ 0x14047A0F0 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14047A364 (HvpFindFreeCell.c)
 *     MiFindDriverNonPagedSections @ 0x140543ED0 (MiFindDriverNonPagedSections.c)
 *     SmcStorePlacementGet @ 0x14073CD78 (SmcStorePlacementGet.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140747E84 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindSetBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
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
  ULONG v24; // r9d
  int v25; // ecx
  char *v26; // rbx
  bool v27; // zf
  __int64 v28; // rax
  ULONG v29; // r8d
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // ecx
  char v35; // r8
  char *v36; // rcx
  unsigned int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // rdx
  bool v40; // sf
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rax
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
        v32 = v17 + 8;
        if ( (v13 & 0x3F) == 0 )
          v32 = (unsigned __int64)&v12[8 * v14];
        if ( v16 )
        {
          v15 += 8;
          if ( *(_QWORD *)v15 != -1LL )
            goto LABEL_55;
          v27 = !_BitScanReverse64((unsigned __int64 *)&v33, v16);
          if ( v27 )
LABEL_78:
            v34 = 64;
          else
            v34 = 63 - v33;
        }
        else
        {
          v34 = 0;
        }
LABEL_46:
        v20 = ((unsigned int)((v15 - v12) >> 3) << 6) - v34;
        if ( v20 > v13 )
          goto LABEL_16;
        v35 = NumberToFind - v34;
        v36 = &v15[8 * ((unsigned __int64)(NumberToFind - v34) >> 6)];
        while ( 1 )
        {
          v15 += 8;
          if ( v15 == v36 )
            break;
          if ( *(_QWORD *)v15 != -1LL )
            goto LABEL_55;
        }
        v37 = v35 & 0x3F;
        if ( v37 )
        {
          v27 = !_BitScanForward64((unsigned __int64 *)&v38, ~*(_QWORD *)v15);
          if ( v27 )
            LODWORD(v38) = 64;
          if ( (unsigned int)v38 < v37 )
          {
LABEL_55:
            while ( (unsigned __int64)v15 <= v32 )
            {
              v15 += 8;
              if ( *(_QWORD *)v15 == -1LL )
              {
                v27 = !_BitScanReverse64((unsigned __int64 *)&v39, ~*((_QWORD *)v15 - 1));
                if ( v27 )
                  goto LABEL_78;
                v34 = 63 - v39;
                goto LABEL_46;
              }
            }
            goto LABEL_16;
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
LABEL_24:
              v27 = !_BitScanForward64((unsigned __int64 *)&v28, v16);
              if ( v27 )
                LODWORD(v28) = 64;
              if ( v25 + (int)v28 >= NumberToFind )
              {
                LODWORD(v30) = -v25;
LABEL_31:
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
                  goto LABEL_31;
                }
              }
              if ( v15 == v26 )
                goto LABEL_16;
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
                goto LABEL_24;
              }
            }
          }
          else
          {
            while ( v16 == -1 )
            {
              v15 += 8;
              if ( (unsigned __int64)v15 > v17 )
                goto LABEL_16;
              v16 = ~*(_QWORD *)v15;
            }
            _BitScanForward64(&v19, ~v16);
            v20 = v19 + ((unsigned int)((v15 - v12) >> 3) << 6);
            v21 = v20 <= v13;
LABEL_11:
            if ( v21 )
              goto LABEL_12;
          }
LABEL_16:
          v20 = -1;
LABEL_17:
          Buffer = v44;
          goto LABEL_18;
        }
        do
        {
LABEL_62:
          v40 = v16 < 0;
          do
          {
            if ( v40 )
            {
              v15 += 8;
              if ( (unsigned __int64)v15 > v17 )
                goto LABEL_16;
              v16 = ~*(_QWORD *)v15;
              goto LABEL_62;
            }
            v27 = !_BitScanReverse64((unsigned __int64 *)&v41, v16);
            if ( !v27 )
              v18 = 63 - v41;
            v20 = (((unsigned int)((v15 - v12) >> 3) + 1) << 6) - v18;
            if ( v20 > v13 )
              goto LABEL_16;
            v42 = NumberToFind - v18;
            if ( NumberToFind == v18 )
              goto LABEL_12;
            v15 += 8;
            v18 = 64;
            v16 = ~*(_QWORD *)v15;
            if ( v42 < 0x40 )
              goto LABEL_68;
            v40 = v16 < 0;
          }
          while ( *(_QWORD *)v15 != -1LL );
          v42 -= 64;
          if ( !v42 )
            break;
          v15 += 8;
          v16 = ~*(_QWORD *)v15;
LABEL_68:
          v27 = !_BitScanForward64((unsigned __int64 *)&v43, v16);
          if ( v27 )
            LODWORD(v43) = 64;
        }
        while ( (unsigned int)v43 < v42 );
      }
LABEL_12:
      if ( v20 != -1 )
        break;
      goto LABEL_17;
    }
    v20 = -1;
LABEL_18:
    if ( !v6 )
      break;
    v9 = v45;
    v24 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v24 = SizeOfBitMap;
    v7 = v24 - 1;
    v6 = 0;
  }
  v22 = v20 - v10;
  if ( v20 == -1 )
    return -1;
  return v22;
}
