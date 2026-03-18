/*
 * XREFs of lGGOBitmap @ 0x1C022E970
 * Callers:
 *     ttfdGlyphBitmap @ 0x1C022FC08 (ttfdGlyphBitmap.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     fs_NewContourGridFit @ 0x1C022E928 (fs_NewContourGridFit.c)
 *     pvSetMemoryBases @ 0x1C022FA0C (pvSetMemoryBases.c)
 *     vFillGLYPHDATA @ 0x1C02307B8 (vFillGLYPHDATA.c)
 *     vShiftBitmapInfo @ 0x1C0233968 (vShiftBitmapInfo.c)
 *     fs_ContourScan @ 0x1C02B4134 (fs_ContourScan.c)
 *     fs_FindBitMapSize @ 0x1C02B4CD4 (fs_FindBitMapSize.c)
 *     fs_NewGlyph @ 0x1C02B5CE0 (fs_NewGlyph.c)
 */

__int64 __fastcall lGGOBitmap(__int64 a1, int a2, __int64 a3, _BYTE *a4, int a5)
{
  __int16 v5; // ax
  int v6; // r14d
  __int64 v7; // r12
  __int64 v9; // rbp
  ULONG v10; // ebx
  int v13; // esi
  int v14; // eax
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // esi
  int v19; // eax
  const void *v20; // rdx
  __int16 v22; // [rsp+40h] [rbp-168h]
  int v23; // [rsp+44h] [rbp-164h]
  _BYTE v24[8]; // [rsp+48h] [rbp-160h] BYREF
  _BYTE v25[32]; // [rsp+50h] [rbp-158h] BYREF
  _BYTE v26[240]; // [rsp+70h] [rbp-138h] BYREF

  v5 = *(_WORD *)(a1 + 402);
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 184);
  v9 = *(_QWORD *)(a1 + 176);
  v10 = 0;
  *(_DWORD *)(a1 + 32) = 1;
  v22 = v5;
  v13 = 0;
  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = -1;
  *(_DWORD *)(v9 + 108) = 0;
  *(_DWORD *)(v9 + 112) = 0;
  *(_WORD *)(v9 + 106) = a2;
  *(_WORD *)(v9 + 104) = -1;
  if ( (unsigned int)fs_NewGlyph(v9, v7)
    || (v14 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 36LL),
        *(_QWORD *)(v9 + 104) = 0LL,
        *(_QWORD *)(v9 + 112) = 0LL,
        *(_DWORD *)(v9 + 120) = 0,
        v23 = v14,
        (unsigned int)fs_NewContourGridFit(v9, v7, *(_DWORD *)(a1 + 40)))
    || (unsigned int)fs_FindBitMapSize(v9, v7) )
  {
    v10 = 1003;
LABEL_27:
    EngSetLastError(v10);
    v13 = -1;
    goto LABEL_28;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)(a1 + 308) && (*(_DWORD *)(a1 + 304) & 2) != 0 )
    {
      v6 = *(_DWORD *)(a1 + 312);
      vShiftBitmapInfo(a1, v26, *(_QWORD *)(a1 + 184));
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 184);
    }
    vFillGLYPHDATA(v6, v23, a1, v15, a3, (__int64)v25, (__int64)v24);
  }
  if ( a4 )
  {
    if ( !a5 )
      goto LABEL_13;
    if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
    {
      *a4 = 0;
    }
    else
    {
      v16 = pvSetMemoryBases(*(_QWORD *)(a1 + 184), v9, v22 != 0);
      *(_QWORD *)(a1 + 24) = v16;
      if ( !v16 )
      {
        v10 = 8;
        goto LABEL_27;
      }
      if ( (unsigned int)fs_ContourScan(v9, v7) )
        goto LABEL_25;
      v17 = *(_QWORD *)(a1 + 184);
      v18 = *(__int16 *)(v17 + 102) - *(__int16 *)(v17 + 98);
      v19 = *(__int16 *)(v17 + 96);
      v20 = *(const void **)(v17 + 88);
      v13 = v19 * v18;
      if ( a5 < v13 )
        v13 = a5;
      if ( !v20 )
LABEL_25:
        v10 = 1003;
      else
        memmove(a4, v20, v13);
      EngFreeMem(*(PVOID *)(a1 + 24));
      *(_QWORD *)(a1 + 24) = 0LL;
      if ( v10 )
        goto LABEL_27;
    }
  }
  else
  {
    if ( a5 )
    {
LABEL_13:
      v10 = 87;
      goto LABEL_27;
    }
    v13 = *(__int16 *)(*(_QWORD *)(a1 + 184) + 96LL)
        * (*(__int16 *)(*(_QWORD *)(a1 + 184) + 102LL) - *(__int16 *)(*(_QWORD *)(a1 + 184) + 98LL));
  }
LABEL_28:
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = -1;
  return (unsigned int)v13;
}
