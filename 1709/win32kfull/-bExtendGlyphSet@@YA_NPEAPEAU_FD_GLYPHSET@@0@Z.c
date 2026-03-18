/*
 * XREFs of ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C0293E50
 * Callers:
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C003C284 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02941B0 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ConvertToAndFromWideChar @ 0x1C00F1C50 (ConvertToAndFromWideChar.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

char __fastcall bExtendGlyphSet(struct _FD_GLYPHSET **a1, struct _FD_GLYPHSET **a2)
{
  __int64 v2; // rbp
  char v3; // bl
  __int64 v4; // rsi
  unsigned int v6; // edi
  _WORD *v7; // rdx
  unsigned int v8; // r8d
  ULONG v9; // r15d
  struct _FD_GLYPHSET *v10; // r14
  unsigned int v11; // r11d
  __int16 *v12; // rdx
  __int64 v13; // r9
  unsigned int v14; // r10d
  unsigned int v15; // r8d
  __int16 v16; // r12
  __int64 v17; // rax
  WCHAR v18; // cx
  USHORT v19; // cx
  unsigned int v20; // eax
  int v21; // edx
  __int64 v22; // rdx
  unsigned int v23; // r13d
  char *v24; // rdi
  WCRUN *awcrun; // r12
  __int64 v26; // r15
  WCHAR v27; // ax
  __int64 v28; // rax
  __int64 v29; // r15
  int v30; // r10d
  unsigned __int16 *v31; // r8
  __int64 v32; // r11
  unsigned int i; // r9d
  unsigned __int8 v34; // cl
  char *v35; // rdi
  unsigned __int16 *v36; // rbx
  __int64 v37; // r15
  __int64 v38; // rsi
  __int64 v39; // rax
  USHORT AnsiCodePage[2]; // [rsp+30h] [rbp-358h] BYREF
  USHORT OemCodePage; // [rsp+34h] [rbp-354h] BYREF
  struct _FD_GLYPHSET **v42; // [rsp+38h] [rbp-350h]
  CHAR v43[256]; // [rsp+40h] [rbp-348h] BYREF
  WCHAR v44[256]; // [rsp+140h] [rbp-248h] BYREF

  v2 = (__int64)*a1;
  v3 = 0;
  v42 = a2;
  v4 = *(unsigned int *)(v2 + 12);
  if ( !(_DWORD)v4 )
    return 0;
  v6 = *(_DWORD *)(v2 + 8);
  if ( v6 > 0x100 )
    return 0;
  if ( (unsigned __int16)(*(_WORD *)(v2 + 16LL * (unsigned int)(v4 - 1) + 16)
                        + *(_WORD *)(v2 + 16LL * (unsigned int)(v4 - 1) + 18)
                        - 1) >= 0xF020u )
  {
    v7 = (_WORD *)(v2 + 16);
    if ( *(_WORD *)(v2 + 16) <= 0xF0FFu )
    {
      v8 = 0;
      if ( (_DWORD)v4 == 1 )
        return 0;
      while ( (unsigned __int16)(*v7 + v7[1] - 1) >= 0xF020u || *(_WORD *)(v2 + 16 * (v8 + 1 + 1LL)) <= 0xF0FFu )
      {
        ++v8;
        v7 += 8;
        if ( v8 >= (int)v4 - 1 )
          return 0;
      }
    }
  }
  v9 = 4 * (v6 + 4 * (v4 + 58));
  v10 = (struct _FD_GLYPHSET *)PALLOCMEM2(v9, 1936484167LL, 1);
  if ( v10 )
  {
    memset(v43, 0, sizeof(v43));
    v11 = 0;
    v12 = (__int16 *)(v2 + 16);
    v13 = v4;
    do
    {
      v14 = (unsigned __int16)v12[1];
      v15 = 0;
      if ( v12[1] )
      {
        v16 = *v12;
        do
        {
          v17 = v11;
          v18 = v15 + v16;
          ++v11;
          ++v15;
          v44[v17] = v18;
        }
        while ( v15 < v14 );
      }
      v12 += 8;
      --v13;
    }
    while ( v13 );
    RtlGetDefaultCodePage(AnsiCodePage, &OemCodePage);
    v19 = AnsiCodePage[0];
    v20 = AnsiCodePage[0];
    if ( (unsigned __int16)(AnsiCodePage[0] - 932) <= 0x12u )
    {
      v21 = 393233;
      LOWORD(v20) = AnsiCodePage[0] - 932;
      if ( _bittest(&v21, v20) )
      {
        v19 = 1252;
        AnsiCodePage[0] = 1252;
      }
    }
    if ( (unsigned int)ConvertToAndFromWideChar(v19, v44, 2 * v6, v43, 0x100u, 0) == -1 )
    {
      Win32FreePool(v10, v22);
      return 0;
    }
    v10->cjThis = v9;
    v23 = 0;
    v10->flAccel = *(_DWORD *)(v2 + 4) | 0x10;
    v10->cGlyphsSupported = v6 + 224;
    v10->cRuns = v4 + 1;
    v24 = (char *)&v10->awcrun[(unsigned int)(v4 + 1)];
    awcrun = v10->awcrun;
    v26 = v2 - (_QWORD)v10;
    do
    {
      v27 = *(WCHAR *)((char *)&awcrun->wcLow + v26);
      if ( v27 >= 0xF020u )
        break;
      awcrun->wcLow = v27;
      awcrun->cGlyphs = *(USHORT *)((char *)&awcrun->cGlyphs + v26);
      awcrun->phg = (HGLYPH *)v24;
      memmove(
        v24,
        *(const void **)((char *)&awcrun->phg + v26),
        4LL * *(unsigned __int16 *)((char *)&awcrun->cGlyphs + v26));
      v28 = *(unsigned __int16 *)((char *)&awcrun->cGlyphs + v26);
      ++v23;
      ++awcrun;
      v24 += 4 * v28;
    }
    while ( v23 < (unsigned int)v4 );
    v29 = v23;
    *(_DWORD *)&v10->awcrun[v29].wcLow = 14741536;
    v10->awcrun[v29].phg = (HGLYPH *)v24;
    memset(v24, 0, 0x380uLL);
    v30 = 0;
    v31 = (unsigned __int16 *)(v2 + 18);
    v32 = v4;
    do
    {
      for ( i = 0; i < *v31; ++i )
      {
        v34 = v43[v30];
        if ( v34 >= 0x20u )
          *(_DWORD *)&v24[4 * v34 - 128] = *(_DWORD *)(*(_QWORD *)(v31 + 3) + 4LL * i);
        ++v30;
      }
      v31 += 8;
      --v32;
    }
    while ( v32 );
    v35 = v24 + 896;
    if ( v23 < (unsigned int)v4 )
    {
      v36 = (unsigned __int16 *)(v29 * 16 + v2 + 18);
      v37 = (__int64)&v10[1].cjThis + 16 * v23 + 2;
      v38 = (unsigned int)v4 - v23;
      do
      {
        *(_WORD *)(v37 - 2) = *(v36 - 1);
        *(_WORD *)v37 = *v36;
        *(_QWORD *)(v37 + 6) = v35;
        memmove(v35, *(const void **)(v36 + 3), 4LL * *v36);
        v39 = *v36;
        v37 += 16LL;
        v36 += 8;
        v35 += 4 * v39;
        --v38;
      }
      while ( v38 );
    }
    v3 = 1;
    *v42 = v10;
  }
  return v3;
}
