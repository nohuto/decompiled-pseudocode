/*
 * XREFs of ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02941B0
 * Callers:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C024B4D8 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0039204 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C003DEC0 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C003DFF0 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1C00B4214 (-bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00B4870 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x1C011CF88 (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C0293E50 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
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
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  struct _FD_GLYPHSET *v16[3]; // [rsp+48h] [rbp-18h] BYREF
  int v17; // [rsp+A8h] [rbp+48h]
  unsigned __int64 v18; // [rsp+B0h] [rbp+50h] BYREF
  struct _FD_GLYPHSET *v19; // [rsp+B8h] [rbp+58h] BYREF

  v4 = PDEVOBJ::cFonts(a2);
  v5 = 0;
  v6 = v4;
  v7 = *(_DWORD *)(*(_QWORD *)a2 + 32LL) & 0x8000;
  v15 = 0LL;
  v17 = v7;
  v18 = 0LL;
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
      FHMEMOBJ::FHMEMOBJ((__int64)v16, (_QWORD *)(*(_QWORD *)this + 104LL), 0, v6);
      FHMEMOBJ::FHMEMOBJ((__int64)v16, (_QWORD *)(*(_QWORD *)this + 112LL), 1, v6);
      FHMEMOBJ::FHMEMOBJ((__int64)v16, (_QWORD *)(*(_QWORD *)this + 120LL), 2, v6);
    }
    return 1;
  }
  while ( 1 )
  {
    v10 = PDEVOBJ::QueryFont((struct PDEV **)a2, *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL), 0LL, v9, &v15);
    if ( !v10 )
    {
      EngSetLastError(0x3EBu);
      return v5;
    }
    if ( v7 )
    {
      v11 = 0LL;
      v18 = 0LL;
      goto LABEL_14;
    }
    v19 = (struct _FD_GLYPHSET *)PFFOBJ::QueryFontTree(
                                   this,
                                   *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL),
                                   0LL,
                                   v9,
                                   3u,
                                   &v18);
    v11 = v19;
    if ( !v19 )
      break;
    if ( v10->jWinCharSet == 2 )
    {
      v16[0] = 0LL;
      if ( bExtendGlyphSet(&v19, v16) )
      {
        if ( *(_QWORD *)(*(_QWORD *)a2 + 3040LL) )
          PDEVOBJ::Free((struct PDEV **)a2, v19, v18, v12);
        v11 = v16[0];
      }
      else
      {
        v11 = v19;
      }
    }
LABEL_14:
    if ( !(unsigned int)PFFMEMOBJ::bAddEntry(this, v9, v11, v18, v10, v15, 0LL, 0LL) )
      goto LABEL_22;
    v7 = v17;
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
    Win32FreePool(v11, v13);
  }
  else
  {
LABEL_36:
    if ( v11 && *(_QWORD *)(*(_QWORD *)a2 + 3040LL) )
      PDEVOBJ::Free((struct PDEV **)a2, v11, v18, v14);
  }
LABEL_30:
  if ( v10 && *(_QWORD *)(*(_QWORD *)a2 + 3040LL) )
    PDEVOBJ::Free((struct PDEV **)a2, v10, v15, v14);
  return v5;
}
