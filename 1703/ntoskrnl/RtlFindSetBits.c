/*
 * XREFs of RtlFindSetBits @ 0x140052C70
 * Callers:
 *     HvpRemoveFreeCellHint @ 0x14048CBE0 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14048D43C (HvpFindFreeCell.c)
 *     MiFindDriverNonPagedSections @ 0x1404B34E4 (MiFindDriverNonPagedSections.c)
 *     SmcStorePlacementGet @ 0x140704A74 (SmcStorePlacementGet.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14070C7F8 (EtwQueryPerformanceTraceInformation.c)
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
  unsigned __int64 v17; // rdi
  int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  bool v21; // cc
  ULONG v22; // eax
  ULONG v23; // r11d
  ULONG v25; // r9d
  int v26; // ecx
  char *v27; // rbx
  bool v28; // zf
  __int64 v29; // rax
  ULONG v30; // r8d
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  bool v33; // sf
  __int64 v34; // rax
  unsigned int v35; // ecx
  __int64 v36; // rax
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // ecx
  char v40; // r8
  char *v41; // rcx
  unsigned int v42; // r8d
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned int *v45; // [rsp+38h] [rbp+8h]
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
        v37 = v17 + 8;
        if ( (v13 & 0x3F) == 0 )
          v37 = (unsigned __int64)&v12[8 * v14];
        if ( v16 )
        {
          v15 += 8;
          if ( *(_QWORD *)v15 != -1LL )
            goto LABEL_68;
          v28 = !_BitScanReverse64((unsigned __int64 *)&v38, v16);
          if ( v28 )
LABEL_78:
            v39 = 64;
          else
            v39 = 63 - v38;
        }
        else
        {
          v39 = 0;
        }
LABEL_59:
        v20 = ((unsigned int)((v15 - v12) >> 3) << 6) - v39;
        if ( v20 > v13 )
          goto LABEL_16;
        v40 = NumberToFind - v39;
        v41 = &v15[8 * ((unsigned __int64)(NumberToFind - v39) >> 6)];
        while ( 1 )
        {
          v15 += 8;
          if ( v15 == v41 )
            break;
          if ( *(_QWORD *)v15 != -1LL )
            goto LABEL_68;
        }
        v42 = v40 & 0x3F;
        if ( v42 )
        {
          v28 = !_BitScanForward64((unsigned __int64 *)&v43, ~*(_QWORD *)v15);
          if ( v28 )
            LODWORD(v43) = 64;
          if ( (unsigned int)v43 < v42 )
          {
LABEL_68:
            while ( (unsigned __int64)v15 <= v37 )
            {
              v15 += 8;
              if ( *(_QWORD *)v15 == -1LL )
              {
                v28 = !_BitScanReverse64((unsigned __int64 *)&v44, ~*((_QWORD *)v15 - 1));
                if ( v28 )
                  goto LABEL_78;
                v39 = 63 - v44;
                goto LABEL_59;
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
            v26 = 0;
            v27 = &v12[8 * ((unsigned __int64)v11 >> 6)];
            while ( v16 != -1 )
            {
LABEL_24:
              v28 = !_BitScanForward64((unsigned __int64 *)&v29, v16);
              if ( v28 )
                LODWORD(v29) = 64;
              if ( v26 + (int)v29 >= NumberToFind )
              {
                LODWORD(v31) = -v26;
LABEL_31:
                v20 = ((unsigned int)((v15 - v12) >> 3) << 6) + v31;
                v21 = v20 <= v13;
                goto LABEL_11;
              }
              v30 = NumberToFind;
              v31 = ~v16;
              while ( 1 )
              {
                v31 &= v31 >> (v30 >> 1);
                if ( !v31 )
                  break;
                v30 -= v30 >> 1;
                if ( v30 <= 1 )
                {
                  _BitScanForward64(&v31, v31);
                  goto LABEL_31;
                }
              }
              if ( v15 == v27 )
                goto LABEL_16;
              v28 = !_BitScanReverse64((unsigned __int64 *)&v32, v16);
              if ( v28 )
                v26 = 64;
              else
                v26 = 63 - v32;
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
                v26 = 0;
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
          v22 = -1;
LABEL_17:
          Buffer = v45;
          goto LABEL_18;
        }
        do
        {
LABEL_43:
          v33 = v16 < 0;
          do
          {
            if ( v33 )
            {
              v15 += 8;
              if ( (unsigned __int64)v15 > v17 )
                goto LABEL_16;
              v16 = ~*(_QWORD *)v15;
              goto LABEL_43;
            }
            v28 = !_BitScanReverse64((unsigned __int64 *)&v34, v16);
            if ( !v28 )
              v18 = 63 - v34;
            v20 = (((unsigned int)((v15 - v12) >> 3) + 1) << 6) - v18;
            if ( v20 > v13 )
              goto LABEL_16;
            v35 = NumberToFind - v18;
            if ( NumberToFind == v18 )
              goto LABEL_12;
            v15 += 8;
            v18 = 64;
            v16 = ~*(_QWORD *)v15;
            if ( v35 < 0x40 )
              goto LABEL_49;
            v33 = v16 < 0;
          }
          while ( *(_QWORD *)v15 != -1LL );
          v35 -= 64;
          if ( !v35 )
            break;
          v15 += 8;
          v16 = ~*(_QWORD *)v15;
LABEL_49:
          v28 = !_BitScanForward64((unsigned __int64 *)&v36, v16);
          if ( v28 )
            LODWORD(v36) = 64;
        }
        while ( (unsigned int)v36 < v35 );
      }
LABEL_12:
      v22 = v20;
      if ( v20 != -1 )
        break;
      goto LABEL_17;
    }
    v20 = -1;
    v22 = -1;
LABEL_18:
    if ( !v6 )
      break;
    v9 = v46;
    v25 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v25 = SizeOfBitMap;
    v7 = v25 - 1;
    v6 = 0;
  }
  v23 = v20 - v10;
  if ( v20 == -1 )
    return v22;
  return v23;
}
