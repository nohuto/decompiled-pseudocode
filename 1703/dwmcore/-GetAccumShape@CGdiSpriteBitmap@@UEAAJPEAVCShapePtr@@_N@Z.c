/*
 * XREFs of ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x180055120
 * Callers:
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800502B8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18006F2DC (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18007258C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x180073DA8 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRE.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetAccumShape(CGdiSpriteBitmap *this, struct CShapePtr *a2, char a3)
{
  unsigned int v3; // ebx
  int appended; // eax
  int v8; // eax
  int v10; // eax
  struct CShape *v11; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+54h] [rbp-ACh]
  unsigned int v15; // [rsp+58h] [rbp-A8h]
  _BYTE v16[512]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = 0;
  if ( *((_BYTE *)this + 60) < 0x80u )
    goto LABEL_5;
  v15 = 0;
  v12[0] = v16;
  v12[1] = v16;
  v13 = 32;
  v14 = 32;
  appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,16,0>>((char *)this + 152, v12);
  v3 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x2EFu);
    goto LABEL_10;
  }
  v8 = CRegionShape::BuildFromRects((char *)this + 224, v12[0], v15);
  v3 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2F2u);
LABEL_10:
    DynArrayImpl<1>::~DynArrayImpl<1>(v12);
    return v3;
  }
  *((_BYTE *)this + 60) &= ~0x80u;
  DynArrayImpl<1>::~DynArrayImpl<1>(v12);
LABEL_5:
  if ( a3 )
  {
    v10 = CShape::CopyShape((CGdiSpriteBitmap *)((char *)this + 224), 0LL, &v11);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2FFu);
    }
    else
    {
      CShapePtr::Release(a2);
      *(_QWORD *)a2 = v11;
      *((_BYTE *)a2 + 8) = 1;
      **((_DWORD **)this + 19) = 0;
      ReleaseInterface<ID2D1Geometry>((__int64 *)this + 29);
    }
  }
  else
  {
    CShapePtr::Release(a2);
    *((_BYTE *)a2 + 8) = 0;
    *(_QWORD *)a2 = (char *)this + 224;
  }
  return v3;
}
