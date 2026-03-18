/*
 * XREFs of ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x18009DA90
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180034D74 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x180088D38 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRE.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetAccumShape(CGdiSpriteBitmap *this, CRegionShape **a2, char a3)
{
  unsigned int v3; // ebx
  signed int appended; // eax
  signed int v8; // eax
  signed int v10; // eax
  struct CShape *v11; // [rsp+30h] [rbp-D0h] BYREF
  void *v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+54h] [rbp-ACh]
  unsigned int v15; // [rsp+58h] [rbp-A8h]
  _BYTE v16[512]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = 0;
  if ( (*((_BYTE *)this + 60) & 0x40) == 0 )
    goto LABEL_5;
  v13 = 32;
  v12[0] = v16;
  v14 = 32;
  v12[1] = v16;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v16,
    16LL,
    32LL,
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  v15 = 0;
  appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,16,0>>(
               (CGdiSpriteBitmap *)((char *)this + 152),
               (__int64)v12);
  v3 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, appended, 0x25Du);
    goto LABEL_10;
  }
  v8 = CRegionShape::BuildFromRects((__int64)this + 224, (__int64)v12[0], v15);
  v3 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x260u);
LABEL_10:
    DynArrayImpl<1>::~DynArrayImpl<1>(v12);
    return v3;
  }
  *((_BYTE *)this + 60) &= ~0x40u;
  DynArrayImpl<1>::~DynArrayImpl<1>(v12);
LABEL_5:
  if ( a3 )
  {
    v10 = CShape::CopyShape((CGdiSpriteBitmap *)((char *)this + 224), 0LL, &v11);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x26Du);
    }
    else
    {
      CShapePtr::Release(a2);
      *a2 = v11;
      *((_BYTE *)a2 + 8) = 1;
      **((_DWORD **)this + 19) = 0;
      ReleaseInterface<IBitmapLock>((__int64 *)this + 29);
    }
  }
  else
  {
    CShapePtr::Release(a2);
    *((_BYTE *)a2 + 8) = 0;
    *a2 = (CGdiSpriteBitmap *)((char *)this + 224);
  }
  return v3;
}
