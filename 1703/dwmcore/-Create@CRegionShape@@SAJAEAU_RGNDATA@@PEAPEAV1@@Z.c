/*
 * XREFs of ?Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z @ 0x1801B0814
 * Callers:
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800D0830 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18006EE94 (-Init@CRegionShape@@IEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18006F290 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CRegionShape::Create(struct _RGNDATA *a1, struct CRegionShape **a2)
{
  CRegionShape *v4; // rax
  CRegionShape *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax

  v4 = (CRegionShape *)operator new(0x10uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 1) = 0LL;
    *(_QWORD *)v4 = &CRegionShape::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v7 = CRegionShape::Init((__int64)v5, (const struct tagRECT *)a1->Buffer, a1->rdh.nCount);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x3Bu);
      CRegionShape::`vector deleting destructor'(v5, 1);
    }
    else
    {
      *a2 = v5;
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x37u);
  }
  return v6;
}
