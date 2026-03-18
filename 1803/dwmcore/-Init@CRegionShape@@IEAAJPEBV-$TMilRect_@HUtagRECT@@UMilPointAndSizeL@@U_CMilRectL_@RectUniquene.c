/*
 * XREFs of ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063E84
 * Callers:
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180002F4C (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063D14 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002148C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionShape::Init(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v6; // ebx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64); // rsi
  CD3DDeviceManager *v8; // rcx
  int D2DFactoryNoRef; // eax
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-28h]
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64); // [rsp+50h] [rbp+8h] BYREF
  struct CD2DFactory *v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = a1 + 16;
  v6 = 0;
  v7 = 0LL;
  ReleaseInterface<ID2D1Geometry>((__int64 *)(a1 + 16));
  if ( !a3 )
    goto LABEL_7;
  v14 = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v8, &v14);
  v6 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v12 = 360;
    goto LABEL_12;
  }
  v13 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64)))(**((_QWORD **)v14 + 4) + 24LL))(
          *((_QWORD *)v14 + 4),
          a2,
          a3,
          &v13);
  v6 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x9Au);
  }
  else
  {
    v7 = v13;
    v13 = 0LL;
  }
  ReleaseInterface<ID2D1Geometry>((__int64 *)&v13);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x16Cu);
    goto LABEL_7;
  }
  D2DFactoryNoRef = (**v7)(v7, &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010, v3);
  v6 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v12 = 370;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DFactoryNoRef, v12);
  }
LABEL_7:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v7);
  return (unsigned int)v6;
}
