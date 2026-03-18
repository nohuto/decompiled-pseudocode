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

unsigned __int64 __fastcall RtlFindSetBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  _QWORD *v14; // r8
  signed __int64 v15; // r9
  bool v16; // zf
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r10
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rdx
  _QWORD *v25; // r9
  unsigned int v26; // r9d
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rsi
  __int64 v31; // rax
  unsigned int v32; // r10d
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // r10

  v3 = *a1;
  v5 = a1[1];
  v7 = a3 & -(__int64)(a3 < *a1);
  v8 = *a1 - 1;
  if ( !a2 )
    return v7 & 0xFFFFFFFFFFFFFFF8uLL;
  while ( 1 )
  {
    if ( v8 - v7 + 1 < a2 )
    {
LABEL_3:
      v9 = -1LL;
      goto LABEL_4;
    }
    v12 = v8 - a2 + 1;
    v13 = v5 + 8 * (v12 >> 6);
    v14 = (_QWORD *)(v5 + 8 * (v7 >> 6));
    v15 = ~*v14 | ((1LL << (v7 & 0x3F)) - 1);
    if ( a2 > 0x7F )
    {
      v21 = v13 + 8;
      if ( (v12 & 0x3F) == 0 )
        v21 = v5 + 8 * (v12 >> 6);
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
        v9 = ((__int64)((__int64)v14 - v5) >> 3 << 6) - v23;
        if ( v9 > v12 )
          goto LABEL_3;
        v25 = &v14[(a2 - v23) >> 6];
        while ( ++v14 != v25 )
        {
          if ( *v14 != -1LL )
            goto LABEL_31;
        }
        v26 = ((_BYTE)a2 - (_BYTE)v23) & 0x3F;
        if ( (((_BYTE)a2 - (_BYTE)v23) & 0x3F) == 0 )
          goto LABEL_73;
        v16 = !_BitScanForward64((unsigned __int64 *)&v27, ~*v14);
        if ( v16 )
          LODWORD(v27) = 64;
        if ( (unsigned int)v27 >= v26 )
          goto LABEL_73;
        do
        {
LABEL_31:
          if ( (unsigned __int64)v14 > v21 )
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
    if ( a2 >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v15 < 0 )
          {
            if ( (unsigned __int64)++v14 > v13 )
              goto LABEL_3;
            v15 = ~*v14;
          }
          v16 = !_BitScanReverse64((unsigned __int64 *)&v17, v15);
          if ( v16 )
            v18 = 64;
          else
            v18 = 63 - v17;
          v9 = ((((__int64)((__int64)v14 - v5) >> 3) + 1) << 6) - v18;
          if ( v9 > v12 )
            goto LABEL_3;
          v19 = a2 - v18;
          if ( a2 == v18 )
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
    if ( a2 > 1 )
    {
      v29 = 0LL;
      v30 = (_QWORD *)(v5 + 8 * (v8 >> 6));
      while ( 1 )
      {
        if ( v15 == -1 )
        {
          do
          {
            if ( (unsigned __int64)++v14 > v13 )
              goto LABEL_3;
            v15 = ~*v14;
          }
          while ( v15 == -1 );
          v29 = 0LL;
        }
        v16 = !_BitScanForward64((unsigned __int64 *)&v31, v15);
        if ( v16 )
          LODWORD(v31) = 64;
        if ( (unsigned int)(v29 + v31) >= a2 )
          break;
        v32 = a2;
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
      v9 = ((__int64)((__int64)v14 - v5) >> 3 << 6) + v33;
    }
    else
    {
      while ( v15 == -1 )
      {
        if ( (unsigned __int64)++v14 > v13 )
          goto LABEL_3;
        v15 = ~*v14;
      }
      _BitScanForward64(&v28, ~v15);
      v9 = v28 + ((__int64)((__int64)v14 - v5) >> 3 << 6);
    }
    if ( v9 > v12 )
      goto LABEL_3;
LABEL_73:
    if ( v9 != -1LL )
      return v9;
LABEL_4:
    if ( !v7 )
      return v9;
    v35 = a2 + a3;
    if ( a2 + a3 > v3 )
      v35 = v3;
    v8 = v35 - 1;
    v7 = 0LL;
  }
}
