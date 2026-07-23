/*
 * XREFs of RtlFindSetBitsEx @ 0x140153ED0
 * Callers:
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1404822C8 (IopLiveDumpGetCapturePagesNoLock.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140482A34 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiDeleteLeakedSessionPool @ 0x1405ED150 (MiDeleteLeakedSessionPool.c)
 *     MiUnlockHotPatchPages @ 0x14074CD58 (MiUnlockHotPatchPages.c)
 *     MiCleanPhysicalProcessPages @ 0x14074F9E0 (MiCleanPhysicalProcessPages.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

ULONG64 __cdecl RtlFindSetBitsEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  unsigned __int64 SizeOfBitMap; // r15
  unsigned __int64 *Buffer; // r14
  ULONG64 v7; // r11
  unsigned __int64 v8; // r10
  ULONG64 v9; // rdx
  ULONG64 v12; // rbp
  unsigned __int64 *v13; // rdi
  unsigned __int64 *v14; // r8
  signed __int64 v15; // r9
  bool v16; // zf
  __int64 v17; // rcx
  unsigned int v18; // eax
  ULONG64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 *v21; // r10
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rdx
  unsigned __int64 *v25; // r9
  unsigned int v26; // r9d
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 *v30; // rsi
  __int64 v31; // rax
  unsigned int v32; // r10d
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  ULONG64 v35; // r10

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v7 = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap);
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v7 & 0xFFFFFFFFFFFFFFF8uLL;
  while ( 1 )
  {
    if ( v8 - v7 + 1 < NumberToFind )
    {
LABEL_3:
      v9 = -1LL;
      goto LABEL_4;
    }
    v12 = v8 - NumberToFind + 1;
    v13 = &Buffer[v12 >> 6];
    v14 = &Buffer[v7 >> 6];
    v15 = ~*v14 | ((1LL << (v7 & 0x3F)) - 1);
    if ( NumberToFind > 0x7F )
    {
      v21 = v13 + 1;
      if ( (v12 & 0x3F) == 0 )
        v21 = &Buffer[v12 >> 6];
      if ( !v15 )
      {
        v23 = 0;
        goto LABEL_35;
      }
      if ( *++v14 != -1LL )
        goto LABEL_31;
      v16 = !_BitScanReverse64((unsigned __int64 *)&v22, v15);
      if ( !v16 )
      {
        v23 = 63 - v22;
        goto LABEL_35;
      }
LABEL_71:
      v23 = 64;
LABEL_35:
      while ( 1 )
      {
        v9 = ((v14 - Buffer) << 6) - v23;
        if ( v9 > v12 )
          goto LABEL_3;
        v25 = &v14[(NumberToFind - v23) >> 6];
        while ( ++v14 != v25 )
        {
          if ( *v14 != -1LL )
            goto LABEL_31;
        }
        v26 = ((_BYTE)NumberToFind - (_BYTE)v23) & 0x3F;
        if ( (((_BYTE)NumberToFind - (_BYTE)v23) & 0x3F) == 0 )
          goto LABEL_73;
        v16 = !_BitScanForward64((unsigned __int64 *)&v27, ~*v14);
        if ( v16 )
          LODWORD(v27) = 64;
        if ( (unsigned int)v27 >= v26 )
          goto LABEL_73;
        do
        {
LABEL_31:
          if ( v14 > v21 )
            goto LABEL_3;
          ++v14;
        }
        while ( *v14 != -1LL );
        v16 = !_BitScanReverse64((unsigned __int64 *)&v24, ~*(v14 - 1));
        if ( v16 )
          goto LABEL_71;
        v23 = 63 - v24;
      }
    }
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v15 < 0 )
          {
            if ( ++v14 > v13 )
              goto LABEL_3;
            v15 = ~*v14;
          }
          v16 = !_BitScanReverse64((unsigned __int64 *)&v17, v15);
          if ( v16 )
            v18 = 64;
          else
            v18 = 63 - v17;
          v9 = ((v14 - Buffer + 1) << 6) - v18;
          if ( v9 > v12 )
            goto LABEL_3;
          v19 = NumberToFind - v18;
          if ( NumberToFind == v18 )
            goto LABEL_73;
          v15 = ~*++v14;
          if ( v19 >= 0x40 )
            break;
LABEL_20:
          v16 = !_BitScanForward64(&v20, v15);
          if ( v16 )
            v20 = 64LL;
          if ( v20 >= v19 )
            goto LABEL_73;
        }
        if ( *v14 == -1LL )
        {
          v19 -= 64LL;
          if ( !v19 )
            goto LABEL_73;
          v15 = ~*++v14;
          goto LABEL_20;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v29 = 0LL;
      v30 = &Buffer[v8 >> 6];
      while ( 1 )
      {
        if ( v15 == -1 )
        {
          do
          {
            if ( ++v14 > v13 )
              goto LABEL_3;
            v15 = ~*v14;
          }
          while ( v15 == -1 );
          v29 = 0LL;
        }
        v16 = !_BitScanForward64((unsigned __int64 *)&v31, v15);
        if ( v16 )
          LODWORD(v31) = 64;
        if ( (unsigned int)(v29 + v31) >= NumberToFind )
          break;
        v32 = NumberToFind;
        v33 = ~v15;
        while ( 1 )
        {
          v33 &= v33 >> (v32 >> 1);
          if ( !v33 )
            break;
          v32 -= v32 >> 1;
          if ( v32 <= 1 )
          {
            _BitScanForward64(&v33, v33);
            goto LABEL_62;
          }
        }
        if ( v14 == v30 )
          goto LABEL_3;
        v16 = !_BitScanReverse64((unsigned __int64 *)&v34, v15);
        if ( v16 )
          v29 = 64LL;
        else
          v29 = (unsigned int)(63 - v34);
        v15 = ~*++v14;
      }
      v33 = -v29;
LABEL_62:
      v9 = ((v14 - Buffer) << 6) + v33;
    }
    else
    {
      while ( v15 == -1 )
      {
        if ( ++v14 > v13 )
          goto LABEL_3;
        v15 = ~*v14;
      }
      _BitScanForward64(&v28, ~v15);
      v9 = v28 + ((v14 - Buffer) << 6);
    }
    if ( v9 > v12 )
      goto LABEL_3;
LABEL_73:
    if ( v9 != -1LL )
      return v9;
LABEL_4:
    if ( !v7 )
      return v9;
    v35 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v35 = SizeOfBitMap;
    v8 = v35 - 1;
    v7 = 0LL;
  }
}
