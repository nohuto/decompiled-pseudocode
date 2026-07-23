/*
 * XREFs of RtlFindClearBitsAndSet @ 0x14005ED00
 * Callers:
 *     BgpFwReserveAllocate @ 0x140142F24 (BgpFwReserveAllocate.c)
 *     MiAssignSharedUserRanges @ 0x1401592B0 (MiAssignSharedUserRanges.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14015CF08 (MiGetUltraHugeAlreadyActive.c)
 *     SepGetLowBoxNumberEntry @ 0x140462158 (SepGetLowBoxNumberEntry.c)
 *     MiObtainRelocationBits @ 0x140495FBC (MiObtainRelocationBits.c)
 *     SepAddLuidToIndexEntry @ 0x1404A1810 (SepAddLuidToIndexEntry.c)
 *     MiReserveDriverPtes @ 0x14055D0C4 (MiReserveDriverPtes.c)
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     PspStorageAllocSlot @ 0x14059F4C8 (PspStorageAllocSlot.c)
 *     MiAllocatePartitionId @ 0x1406B607C (MiAllocatePartitionId.c)
 *     TtmiCreateTerminal @ 0x1406D7E80 (TtmiCreateTerminal.c)
 *     ViAllocateFromContiguousMemory @ 0x14076B1FC (ViAllocateFromContiguousMemory.c)
 *     MiAssignSystemVa @ 0x14081142C (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x140812DC8 (MiAssignSessionRanges.c)
 * Callees:
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 */

ULONG __stdcall RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  unsigned int *Buffer; // rdi
  _RTL_BITMAP *v6; // r13
  ULONG v7; // ebx
  unsigned int v8; // r9d
  __int64 v9; // r13
  int v10; // r12d
  unsigned int v11; // r10d
  ULONG v12; // edx
  char *v13; // r14
  ULONG v14; // ebp
  unsigned __int64 *v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
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
  ULONG v32; // r9d
  bool v33; // sf
  __int64 v34; // rax
  int v35; // r8d
  unsigned int v36; // ecx
  __int64 v37; // rax
  unsigned __int64 v38; // r10
  __int64 v39; // rax
  int v40; // ecx
  char v41; // r8
  unsigned __int64 *v42; // rcx
  unsigned int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rdx
  ULONG v47; // [rsp+70h] [rbp+18h]
  unsigned int *v48; // [rsp+78h] [rbp+20h]

  v47 = HintIndex;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v6 = BitMapHeader;
  v48 = Buffer;
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
        v38 = v18 + 8;
        if ( (v14 & 0x3F) == 0 )
          v38 = (unsigned __int64)&v13[8 * v16];
        if ( v17 )
        {
          if ( *++v15 )
            goto LABEL_70;
          v27 = !_BitScanReverse64((unsigned __int64 *)&v39, v17);
          if ( v27 )
            v40 = 64;
          else
            v40 = 63 - v39;
        }
        else
        {
          v40 = 0;
        }
LABEL_61:
        v20 = ((unsigned int)(((char *)v15 - v13) >> 3) << 6) - v40;
        if ( v20 > v14 )
          goto LABEL_35;
        v41 = NumberToFind - v40;
        v42 = &v15[(unsigned __int64)(NumberToFind - v40) >> 6];
        while ( ++v15 != v42 )
        {
          if ( *v15 )
            goto LABEL_70;
        }
        v43 = v41 & 0x3F;
        if ( v43 )
        {
          v27 = !_BitScanForward64((unsigned __int64 *)&v44, *v15);
          if ( v27 )
            LODWORD(v44) = 64;
          if ( (unsigned int)v44 < v43 )
          {
LABEL_70:
            while ( (unsigned __int64)v15 <= v38 )
            {
              if ( !*++v15 )
              {
                v27 = !_BitScanReverse64((unsigned __int64 *)&v45, *(v15 - 1));
                if ( v27 )
                  v40 = 64;
                else
                  v40 = 63 - v45;
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
            v25 = 0;
            v26 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v11 >> 6)];
            while ( v17 != -1 )
            {
LABEL_20:
              v27 = !_BitScanForward64((unsigned __int64 *)&v28, v17);
              if ( v27 )
                LODWORD(v28) = 64;
              if ( v25 + (int)v28 >= NumberToFind )
              {
                LODWORD(v30) = -v25;
LABEL_27:
                v20 = ((unsigned int)(((char *)v15 - v13) >> 3) << 6) + v30;
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
                  _BitScanForward64(&v30, v30);
                  goto LABEL_27;
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
                goto LABEL_20;
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
          HintIndex = v47;
          goto LABEL_37;
        }
        do
        {
LABEL_45:
          v33 = v17 < 0;
          do
          {
            if ( v33 )
            {
              if ( (unsigned __int64)++v15 > v18 )
                goto LABEL_35;
              v17 = *v15;
              goto LABEL_45;
            }
            v27 = !_BitScanReverse64((unsigned __int64 *)&v34, v17);
            if ( v27 )
              v35 = 64;
            else
              v35 = 63 - v34;
            v20 = (((unsigned int)(((char *)v15 - v13) >> 3) + 1) << 6) - v35;
            if ( v20 > v14 )
              goto LABEL_35;
            v36 = NumberToFind - v35;
            if ( NumberToFind == v35 )
              goto LABEL_12;
            v17 = *++v15;
            if ( v36 < 0x40 )
              goto LABEL_51;
            v33 = v17 < 0;
          }
          while ( v17 );
          v36 -= 64;
          if ( !v36 )
            break;
          v17 = *++v15;
LABEL_51:
          v27 = !_BitScanForward64((unsigned __int64 *)&v37, v17);
          if ( v27 )
            LODWORD(v37) = 64;
        }
        while ( (unsigned int)v37 < v36 );
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
    Buffer = v48;
    v32 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v32 = SizeOfBitMap;
    v8 = v32 - 1;
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
