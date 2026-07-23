/*
 * XREFs of RtlFindClearBitsAndSet @ 0x1400BB560
 * Callers:
 *     MiGetUltraHugeAlreadyActive @ 0x140134D14 (MiGetUltraHugeAlreadyActive.c)
 *     BgpFwReserveAllocate @ 0x14013E858 (BgpFwReserveAllocate.c)
 *     MiAssignSharedUserRanges @ 0x140143C30 (MiAssignSharedUserRanges.c)
 *     SepAddLuidToIndexEntry @ 0x14048CF8C (SepAddLuidToIndexEntry.c)
 *     MiObtainRelocationBits @ 0x14050475C (MiObtainRelocationBits.c)
 *     MiReserveDriverPtes @ 0x140541558 (MiReserveDriverPtes.c)
 *     SepGetLowBoxNumberEntry @ 0x14056403C (SepGetLowBoxNumberEntry.c)
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 *     PspStorageAllocSlot @ 0x1405C76F8 (PspStorageAllocSlot.c)
 *     MiAllocatePartitionId @ 0x1406E27D0 (MiAllocatePartitionId.c)
 *     TtmiCreateTerminal @ 0x14070E208 (TtmiCreateTerminal.c)
 *     ViAllocateFromContiguousMemory @ 0x1407ACECC (ViAllocateFromContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140839F54 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x1408522C4 (MiAssignSessionRanges.c)
 * Callees:
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 */

ULONG __stdcall RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
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
  unsigned __int64 v31; // r10
  __int64 v32; // rax
  int v33; // ecx
  char v34; // r8
  unsigned __int64 *v35; // rcx
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rdx
  bool v39; // sf
  __int64 v40; // rax
  int v41; // r8d
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
        v31 = v17 + 8;
        if ( (v13 & 0x3F) == 0 )
          v31 = (unsigned __int64)&v12[8 * v15];
        if ( v16 )
        {
          if ( *++v14 )
            goto LABEL_57;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v32, v16);
          if ( v25 )
            v33 = 64;
          else
            v33 = 63 - v32;
        }
        else
        {
          v33 = 0;
        }
LABEL_48:
        v19 = ((unsigned int)(((char *)v14 - v12) >> 3) << 6) - v33;
        if ( v19 > v13 )
          goto LABEL_36;
        v34 = NumberToFind - v33;
        v35 = &v14[(unsigned __int64)(NumberToFind - v33) >> 6];
        while ( ++v14 != v35 )
        {
          if ( *v14 )
            goto LABEL_57;
        }
        v36 = v34 & 0x3F;
        if ( v36 )
        {
          v25 = !_BitScanForward64((unsigned __int64 *)&v37, *v14);
          if ( v25 )
            LODWORD(v37) = 64;
          if ( (unsigned int)v37 < v36 )
          {
LABEL_57:
            while ( (unsigned __int64)v14 <= v31 )
            {
              if ( !*++v14 )
              {
                v25 = !_BitScanReverse64((unsigned __int64 *)&v38, *(v14 - 1));
                if ( v25 )
                  v33 = 64;
                else
                  v33 = 63 - v38;
                goto LABEL_48;
              }
            }
            goto LABEL_36;
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
LABEL_20:
              v25 = !_BitScanForward64((unsigned __int64 *)&v26, v16);
              if ( v25 )
                LODWORD(v26) = 64;
              if ( v23 + (int)v26 >= NumberToFind )
              {
                LODWORD(v28) = -v23;
LABEL_27:
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
                  goto LABEL_27;
                }
              }
              if ( v14 == v24 )
                goto LABEL_36;
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
                goto LABEL_20;
              }
            }
          }
          else
          {
            while ( v16 == -1 )
            {
              if ( (unsigned __int64)++v14 > v17 )
                goto LABEL_36;
              v16 = *v14;
            }
            _BitScanForward64(&v18, ~v16);
            v19 = v18 + ((unsigned int)(((char *)v14 - v12) >> 3) << 6);
            v20 = v19 <= v13;
LABEL_11:
            if ( v20 )
              goto LABEL_12;
          }
LABEL_36:
          v19 = -1;
LABEL_37:
          HintIndex = v45;
          goto LABEL_38;
        }
        do
        {
LABEL_65:
          v39 = v16 < 0;
          do
          {
            if ( v39 )
            {
              if ( (unsigned __int64)++v14 > v17 )
                goto LABEL_36;
              v16 = *v14;
              goto LABEL_65;
            }
            v25 = !_BitScanReverse64((unsigned __int64 *)&v40, v16);
            if ( v25 )
              v41 = 64;
            else
              v41 = 63 - v40;
            v19 = (((unsigned int)(((char *)v14 - v12) >> 3) + 1) << 6) - v41;
            if ( v19 > v13 )
              goto LABEL_36;
            v42 = NumberToFind - v41;
            if ( NumberToFind == v41 )
              goto LABEL_12;
            v16 = *++v14;
            if ( v42 < 0x40 )
              goto LABEL_71;
            v39 = v16 < 0;
          }
          while ( v16 );
          v42 -= 64;
          if ( !v42 )
            break;
          v16 = *++v14;
LABEL_71:
          v25 = !_BitScanForward64((unsigned __int64 *)&v43, v16);
          if ( v25 )
            LODWORD(v43) = 64;
        }
        while ( (unsigned int)v43 < v42 );
      }
LABEL_12:
      if ( v19 != -1 )
        break;
      goto LABEL_37;
    }
    v19 = -1;
LABEL_38:
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
