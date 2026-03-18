/*
 * XREFs of ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18006EE94
 * Callers:
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180024DCC (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18006F2DC (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z @ 0x1801B0814 (-Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800429E0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z @ 0x18004C31C (-CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionShape::Init(__int64 a1, const struct tagRECT *a2, unsigned int a3)
{
  __int64 v3; // rbp
  struct ID2D1Geometry *v4; // rdi
  unsigned int v7; // ebx
  CD3DDeviceManager *v8; // rcx
  int D2DFactoryNoRef; // eax
  int v10; // eax
  int v11; // eax
  struct ID2D1Geometry *v13; // [rsp+50h] [rbp+8h] BYREF
  CD2DFactory *v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = a1 + 8;
  v4 = 0LL;
  v13 = 0LL;
  v7 = 0;
  ReleaseInterface<ID2D1Geometry>((__int64 *)(a1 + 8));
  if ( a3 )
  {
    v14 = 0LL;
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v8, &v14);
    v7 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0x141u);
    }
    else
    {
      v10 = CD2DFactory::CreateRegionGeometry(v14, a2, a3, &v13);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x145u);
        v4 = v13;
      }
      else
      {
        v4 = v13;
        v11 = (**(__int64 (__fastcall ***)(struct ID2D1Geometry *, GUID *, __int64))v13)(
                v13,
                &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010,
                v3);
        v7 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x14Bu);
      }
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v4);
  return v7;
}
