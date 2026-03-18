/*
 * XREFs of ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180024DCC
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000B598 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x180026CC8 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18006EE94 (-Init@CRegionShape@@IEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18006F290 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x180073DA8 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRE.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CRegionShape::Create(const struct CRegion *a1, struct CRegionShape **a2)
{
  struct CRegionShape *v4; // rdi
  int appended; // eax
  unsigned int v6; // ebx
  struct CRegionShape *v7; // rax
  int v8; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v11; // [rsp+48h] [rbp-120h]

  v4 = 0LL;
  DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>(v10);
  *a2 = 0LL;
  v11 = 0;
  appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,16,0>>(a1, v10);
  v6 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x1Bu);
  }
  else
  {
    v7 = (struct CRegionShape *)operator new(0x10uLL);
    v4 = v7;
    if ( v7 )
    {
      *((_QWORD *)v7 + 1) = 0LL;
      *(_QWORD *)v7 = &CRegionShape::`vftable';
    }
    else
    {
      v4 = 0LL;
    }
    if ( !v4 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Eu);
      goto LABEL_7;
    }
    v8 = CRegionShape::Init(v4, v10[0], v11);
    v6 = v8;
    if ( v8 >= 0 )
    {
      *a2 = v4;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x22u);
  }
  if ( v4 )
    CRegionShape::`vector deleting destructor'(v4, 1u);
LABEL_7:
  DynArrayImpl<1>::~DynArrayImpl<1>(v10);
  return v6;
}
