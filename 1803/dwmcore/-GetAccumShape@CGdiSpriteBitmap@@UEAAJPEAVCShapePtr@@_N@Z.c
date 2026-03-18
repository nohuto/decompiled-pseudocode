/*
 * XREFs of ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x1800943C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002148C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063D14 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18007D9BC (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008C1F8 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetAccumShape(CGdiSpriteBitmap *this, CRectanglesShape **a2, char a3)
{
  unsigned int v3; // ebx
  int appended; // eax
  struct ID2D1RegionGeometry **v8; // r14
  int v9; // eax
  int v11; // eax
  struct CShape *v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+54h] [rbp-ACh]
  unsigned int v16; // [rsp+58h] [rbp-A8h]
  _BYTE v17[512]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = 0;
  if ( (*((_BYTE *)this + 60) & 0x40) != 0 )
  {
    v14 = 32;
    v13[0] = (__int64)v17;
    v15 = 32;
    v13[1] = (__int64)v17;
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)v17,
      0x10uLL,
      0x20uLL,
      (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
    v16 = 0;
    appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(
                 (CGdiSpriteBitmap *)((char *)this + 152),
                 (__int64)v13);
    v3 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x25Du);
    }
    else
    {
      v8 = (struct ID2D1RegionGeometry **)((char *)this + 224);
      v9 = CRegionShape::BuildFromRects((__int64)this + 224, v13[0], v16);
      v3 = v9;
      if ( v9 >= 0 )
      {
        *((_BYTE *)this + 60) &= ~0x40u;
        DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v13);
        goto LABEL_5;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x260u);
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v13);
    return v3;
  }
  v8 = (struct ID2D1RegionGeometry **)((char *)this + 224);
LABEL_5:
  if ( a3 )
  {
    v11 = CShape::CopyShape(v8, 0LL, &v12);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x26Du);
    }
    else
    {
      CShapePtr::Release(a2);
      *a2 = v12;
      *((_BYTE *)a2 + 8) = 1;
      **((_DWORD **)this + 19) = 0;
      ReleaseInterface<ID2D1Geometry>((__int64 *)this + 30);
    }
  }
  else
  {
    CShapePtr::Release(a2);
    *a2 = (CRectanglesShape *)v8;
    *((_BYTE *)a2 + 8) = 0;
  }
  return v3;
}
