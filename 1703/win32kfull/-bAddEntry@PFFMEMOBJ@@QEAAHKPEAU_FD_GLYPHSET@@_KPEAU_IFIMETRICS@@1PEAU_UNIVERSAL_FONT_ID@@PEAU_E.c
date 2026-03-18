/*
 * XREFs of ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00294BC
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00299AC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C0297AE0 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0029CB4 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C002B64C (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C00301F0 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?IsCHSBaseFont@@YAHPEBGI@Z @ 0x1C013F7F0 (-IsCHSBaseFont@@YAHPEBGI@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bAddEntry(
        PFFMEMOBJ *this,
        unsigned int a2,
        struct _FD_GLYPHSET *a3,
        unsigned __int64 a4,
        struct _IFIMETRICS *a5,
        unsigned __int64 a6,
        struct _UNIVERSAL_FONT_ID *a7,
        struct _EUDCLOAD *a8)
{
  __int64 v9; // rdx
  struct _EUDCLOAD *v11; // rbx
  int v12; // eax
  _QWORD *v13; // rdi
  unsigned int v14; // ebp
  const unsigned __int16 *v15; // rdx
  __int64 v16; // rbx
  unsigned int v17; // esi
  __int16 v18; // si
  __int64 v19; // rax
  const unsigned __int16 *v20; // rdi
  int v21; // r15d
  struct _FLENTRY *BaseFontEntry; // rsi
  __int64 v23; // rax
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF

  v9 = *(_QWORD *)this;
  v25 = *(_QWORD *)(*(_QWORD *)this + 224LL) + *(_DWORD *)(*(_QWORD *)this + 216LL) * (a2 - 1);
  if ( !v25 )
    return 0;
  v11 = a8;
  v12 = 0;
  v13 = a8 ? *(_QWORD **)a8 : 0LL;
  LOBYTE(v12) = a8 != 0LL;
  if ( !(unsigned int)PFEMEMOBJ::bInit(
                        (PFEMEMOBJ *)&v25,
                        (struct PFF *)v9,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        *(_QWORD *)(v9 + 80) == 0LL,
                        a7,
                        v12) )
    return 0;
  v14 = 1;
  if ( v11 )
  {
    v15 = (const unsigned __int16 *)*((_QWORD *)v11 + 1);
    v16 = v25;
    if ( v15 )
    {
      if ( a2 != 1 )
      {
        v18 = *(_WORD *)(*(int *)(*(_QWORD *)(v25 + 32) + 16LL) + *(_QWORD *)(v25 + 32));
        if ( !PFEOBJ::bCheckFamilyName((PFEOBJ *)&v25, v15, 1, 0LL) )
          goto LABEL_17;
        v13[v18 == 64] = v16;
        if ( v18 == 64 )
          goto LABEL_17;
        goto LABEL_16;
      }
    }
    else
    {
      v17 = a2 - 1;
      if ( v17 )
      {
        if ( v17 != 1 || *(_WORD *)(*(int *)(*(_QWORD *)(v25 + 32) + 16LL) + *(_QWORD *)(v25 + 32)) != 64 )
          goto LABEL_17;
        goto LABEL_16;
      }
    }
    *v13 = v25;
LABEL_16:
    v13[1] = v16;
    goto LABEL_17;
  }
  v16 = v25;
  v19 = *(_QWORD *)(v25 + 32);
  v20 = (const unsigned __int16 *)(v19 + *(int *)(v19 + 8));
  v21 = *(_DWORD *)(v19 + 48) & 0x8000000;
  BaseFontEntry = FindBaseFontEntry(v20);
  if ( BaseFontEntry )
    goto LABEL_31;
  if ( v21 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v20[v23] );
    BaseFontEntry = FindBaseFontEntry(&v20[v23 + 1]);
    if ( BaseFontEntry )
    {
LABEL_31:
      if ( (unsigned int)IsCHSBaseFont(
                           *(const unsigned __int16 **)(*(_QWORD *)this + 24LL),
                           *(_DWORD *)(*(_QWORD *)this + 32LL)) )
        *(_DWORD *)(*(_QWORD *)this + 52LL) |= 0x8000u;
      *(_QWORD *)(v16 + 128) = BaseFontEntry;
      goto LABEL_26;
    }
  }
LABEL_17:
  *(_QWORD *)(v16 + 128) = 0LL;
LABEL_26:
  *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 144LL))++ + 224) = v16;
  return v14;
}
