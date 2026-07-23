/*
 * XREFs of RtlFindSetBitsEx @ 0x14013E9A0
 * Callers:
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x140416788 (IopLiveDumpGetCapturePagesNoLock.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140416ED0 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiDeleteLeakedSessionPool @ 0x14057AA70 (MiDeleteLeakedSessionPool.c)
 *     MiUnlockHotPatchPages @ 0x1406B5D94 (MiUnlockHotPatchPages.c)
 *     MiCleanPhysicalProcessPages @ 0x1406B87E4 (MiCleanPhysicalProcessPages.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

ULONG64 __cdecl RtlFindSetBitsEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  unsigned __int64 SizeOfBitMap; // r15
  unsigned __int64 *Buffer; // r14
  ULONG64 v7; // r11
  unsigned __int64 v8; // r10
  ULONG64 v9; // rbp
  unsigned __int64 *v10; // rdi
  unsigned __int64 *v11; // r8
  signed __int64 v12; // r9
  unsigned __int64 v13; // rax
  ULONG64 v14; // rdx
  __int64 v17; // rdx
  unsigned __int64 *v18; // rsi
  bool v19; // zf
  __int64 v20; // rax
  unsigned int v21; // r10d
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 *v24; // r10
  __int64 v25; // rdx
  unsigned int v26; // ecx
  unsigned __int64 *v27; // r9
  unsigned int v28; // r9d
  __int64 v29; // rcx
  bool v30; // sf
  __int64 v31; // rcx
  unsigned int v32; // eax
  ULONG64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  ULONG64 v36; // r10

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v7 = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap);
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v7 & 0xFFFFFFFFFFFFFFF8uLL;
  while ( 1 )
  {
    if ( v8 - v7 + 1 < NumberToFind )
      goto LABEL_31;
    v9 = v8 - NumberToFind + 1;
    v10 = &Buffer[v9 >> 6];
    v11 = &Buffer[v7 >> 6];
    v12 = ((1LL << (v7 & 0x3F)) - 1) | ~*v11;
    if ( NumberToFind > 0x7F )
    {
      v24 = v10 + 1;
      if ( (v9 & 0x3F) == 0 )
        v24 = &Buffer[v9 >> 6];
      if ( !v12 )
      {
        v26 = 0;
        goto LABEL_43;
      }
      if ( *++v11 != -1LL )
      {
        while ( 1 )
        {
          do
          {
LABEL_39:
            if ( v11 > v24 )
              goto LABEL_31;
            ++v11;
          }
          while ( *v11 != -1LL );
          v19 = !_BitScanReverse64((unsigned __int64 *)&v25, ~*(v11 - 1));
          if ( v19 )
LABEL_73:
            v26 = 64;
          else
            v26 = 63 - v25;
LABEL_43:
          v14 = ((v11 - Buffer) << 6) - v26;
          if ( v14 > v9 )
            goto LABEL_31;
          v27 = &v11[(NumberToFind - v26) >> 6];
          while ( ++v11 != v27 )
          {
            if ( *v11 != -1LL )
              goto LABEL_39;
          }
          v28 = ((_BYTE)NumberToFind - (_BYTE)v26) & 0x3F;
          if ( (((_BYTE)NumberToFind - (_BYTE)v26) & 0x3F) != 0 )
          {
            v19 = !_BitScanForward64((unsigned __int64 *)&v29, ~*v11);
            if ( v19 )
              LODWORD(v29) = 64;
            if ( (unsigned int)v29 < v28 )
              continue;
          }
          goto LABEL_11;
        }
      }
      v19 = !_BitScanReverse64((unsigned __int64 *)&v35, v12);
      if ( !v19 )
      {
        v26 = 63 - v35;
        goto LABEL_43;
      }
      goto LABEL_73;
    }
    if ( NumberToFind >= 0x40 )
    {
      do
      {
LABEL_56:
        v30 = v12 < 0;
        do
        {
          if ( v30 )
          {
            if ( ++v11 > v10 )
              goto LABEL_31;
            v12 = ~*v11;
            goto LABEL_56;
          }
          v19 = !_BitScanReverse64((unsigned __int64 *)&v31, v12);
          if ( v19 )
            v32 = 64;
          else
            v32 = 63 - v31;
          v14 = ((v11 - Buffer + 1) << 6) - v32;
          if ( v14 > v9 )
            goto LABEL_31;
          v33 = NumberToFind - v32;
          if ( NumberToFind == v32 )
            goto LABEL_11;
          v12 = ~*++v11;
          if ( v33 < 0x40 )
            goto LABEL_65;
          v30 = v12 < 0;
        }
        while ( *v11 != -1LL );
        v33 -= 64LL;
        if ( !v33 )
          break;
        v12 = ~*++v11;
LABEL_65:
        v19 = !_BitScanForward64(&v34, v12);
        if ( v19 )
          v34 = 64LL;
      }
      while ( v34 < v33 );
    }
    else
    {
      if ( NumberToFind > 1 )
      {
        v17 = 0LL;
        v18 = &Buffer[v8 >> 6];
        while ( v12 != -1 )
        {
LABEL_16:
          v19 = !_BitScanForward64((unsigned __int64 *)&v20, v12);
          if ( v19 )
            LODWORD(v20) = 64;
          if ( (unsigned int)(v17 + v20) >= NumberToFind )
          {
            v22 = -v17;
LABEL_27:
            v14 = ((v11 - Buffer) << 6) + v22;
            goto LABEL_10;
          }
          v21 = NumberToFind;
          v22 = ~v12;
          while ( 1 )
          {
            v22 &= v22 >> (v21 >> 1);
            if ( !v22 )
              break;
            v21 -= v21 >> 1;
            if ( v21 <= 1 )
            {
              _BitScanForward64(&v22, v22);
              goto LABEL_27;
            }
          }
          if ( v11 == v18 )
            goto LABEL_31;
          v19 = !_BitScanReverse64((unsigned __int64 *)&v23, v12);
          if ( v19 )
            v17 = 64LL;
          else
            v17 = (unsigned int)(63 - v23);
          v12 = ~*++v11;
        }
        while ( ++v11 <= v10 )
        {
          v12 = ~*v11;
          if ( v12 != -1 )
          {
            v17 = 0LL;
            goto LABEL_16;
          }
        }
LABEL_31:
        v14 = -1LL;
        goto LABEL_32;
      }
      while ( v12 == -1 )
      {
        if ( ++v11 > v10 )
          goto LABEL_31;
        v12 = ~*v11;
      }
      _BitScanForward64(&v13, ~v12);
      v14 = v13 + ((v11 - Buffer) << 6);
LABEL_10:
      if ( v14 > v9 )
        goto LABEL_31;
    }
LABEL_11:
    if ( v14 != -1LL )
      return v14;
LABEL_32:
    if ( !v7 )
      return v14;
    v36 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v36 = SizeOfBitMap;
    v8 = v36 - 1;
    v7 = 0LL;
  }
}
