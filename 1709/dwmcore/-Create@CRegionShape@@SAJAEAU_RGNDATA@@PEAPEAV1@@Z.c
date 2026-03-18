/*
 * XREFs of ?Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z @ 0x1801CBC04
 * Callers:
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x18018B8C4 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180034E90 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180034EDC (-Init@CRegionShape@@IEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRegionShape::Create(struct _RGNDATA *a1, struct CRegionShape **a2)
{
  CRegionShape *v4; // rax
  CRegionShape *v5; // rbx
  unsigned int v6; // edi
  signed int v7; // eax

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
    v7 = CRegionShape::Init((__int64)v5, (__int64)a1->Buffer, a1->rdh.nCount);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x3Bu);
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x37u);
  }
  return v6;
}
