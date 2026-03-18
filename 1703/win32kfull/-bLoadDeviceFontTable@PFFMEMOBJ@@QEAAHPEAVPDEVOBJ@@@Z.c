/*
 * XREFs of ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C0297AE0
 * Callers:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C0249B10 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1C0029420 (-bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00294BC (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     ?QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0032114 (-QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C00321C4 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C00322E4 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x1C0113828 (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C0297784 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bLoadDeviceFontTable(PFFMEMOBJ *this, struct PDEVOBJ *a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  int v7; // edi
  __int64 result; // rax
  unsigned int v9; // r12d
  struct _IFIMETRICS *v10; // r14
  struct _FD_GLYPHSET *v11; // rdi
  unsigned __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  struct _FD_GLYPHSET *v13[3]; // [rsp+48h] [rbp-18h] BYREF
  int v14; // [rsp+A8h] [rbp+48h]
  unsigned __int64 v15; // [rsp+B0h] [rbp+50h] BYREF
  struct _FD_GLYPHSET *v16; // [rsp+B8h] [rbp+58h] BYREF

  v4 = PDEVOBJ::cFonts(a2);
  v5 = 0;
  v6 = v4;
  v7 = *(_DWORD *)(*(_QWORD *)a2 + 32LL) & 0x8000;
  v12 = 0LL;
  v14 = v7;
  v15 = 0LL;
  if ( v4 )
  {
    result = PFFMEMOBJ::bAllocPFEData(this, v4);
    if ( !(_DWORD)result )
      return result;
  }
  v9 = 1;
  if ( !v6 )
  {
LABEL_16:
    if ( v6 )
    {
      FHMEMOBJ::FHMEMOBJ((__int64)v13, (_QWORD *)(*(_QWORD *)this + 104LL), 0, v6);
      FHMEMOBJ::FHMEMOBJ((__int64)v13, (_QWORD *)(*(_QWORD *)this + 112LL), 1, v6);
      FHMEMOBJ::FHMEMOBJ((__int64)v13, (_QWORD *)(*(_QWORD *)this + 120LL), 2, v6);
    }
    return 1;
  }
  while ( 1 )
  {
    v10 = PDEVOBJ::QueryFont(a2, *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL), 0LL, v9, &v12);
    if ( !v10 )
    {
      EngSetLastError(0x3EBu);
      return v5;
    }
    if ( v7 )
    {
      v11 = 0LL;
      v15 = 0LL;
      goto LABEL_14;
    }
    v16 = (struct _FD_GLYPHSET *)PDEVOBJ::QueryFontTree(
                                   a2,
                                   *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL),
                                   0LL,
                                   v9,
                                   3u,
                                   &v15);
    v11 = v16;
    if ( !v16 )
      break;
    if ( v10->jWinCharSet == 2 )
    {
      v13[0] = 0LL;
      if ( bExtendGlyphSet(&v16, v13) )
      {
        if ( *(_QWORD *)(*(_QWORD *)a2 + 3040LL) )
          PDEVOBJ::Free(a2, v16, v15);
        v11 = v13[0];
      }
      else
      {
        v11 = v16;
      }
    }
LABEL_14:
    if ( !(unsigned int)PFFMEMOBJ::bAddEntry(this, v9, v11, v15, v10, v12, 0LL, 0LL) )
      goto LABEL_22;
    v7 = v14;
    if ( ++v9 > v6 )
      goto LABEL_16;
  }
  EngSetLastError(0x3EBu);
LABEL_22:
  if ( !v10 || v10->jWinCharSet != 2 )
    goto LABEL_36;
  if ( !v11 )
    goto LABEL_30;
  if ( (v11->flAccel & 0x10) != 0 )
  {
    Win32FreePool(v11);
  }
  else
  {
LABEL_36:
    if ( v11 && *(_QWORD *)(*(_QWORD *)a2 + 3040LL) )
      PDEVOBJ::Free(a2, v11, v15);
  }
LABEL_30:
  if ( v10 && *(_QWORD *)(*(_QWORD *)a2 + 3040LL) )
    PDEVOBJ::Free(a2, v10, v12);
  return v5;
}
