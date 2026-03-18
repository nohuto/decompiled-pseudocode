/*
 * XREFs of ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180034EDC
 * Callers:
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180034D74 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x18008695C (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ?Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z @ 0x1801CBC04 (-Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

__int64 __fastcall CRegionShape::Init(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  int v6; // ebx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64); // rsi
  struct CD2DFactory *v8; // rbp
  enum D2D1_FACTORY_TYPE v9; // ecx
  struct CD2DFactory *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-38h]
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64); // [rsp+60h] [rbp+8h] BYREF

  v3 = a1 + 8;
  v6 = 0;
  v7 = 0LL;
  ReleaseInterface<IBitmapLock>((__int64 *)(a1 + 8));
  if ( !a3 )
    goto LABEL_10;
  v8 = 0LL;
  EnterCriticalSection(&CriticalSection);
  v10 = qword_18026EF28;
  if ( qword_18026EF28 )
    goto LABEL_3;
  v15 = CD2DFactory::Create(v9, 0, &qword_18026EF28);
  v6 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x10Fu);
  }
  else
  {
    v16 = CMesh2DEffect::Register(qword_18026EF28);
    v6 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x13Fu);
    if ( v6 >= 0 )
    {
      v10 = qword_18026EF28;
LABEL_3:
      v8 = v10;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x111u);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x3FFu);
LABEL_4:
  LeaveCriticalSection(&CriticalSection);
  if ( v6 < 0 )
  {
    v17 = 360;
    goto LABEL_22;
  }
  v11 = *((_QWORD *)v8 + 4);
  v18 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64)))(*(_QWORD *)v11 + 24LL))(
          v11,
          a2,
          a3,
          &v18);
  v6 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x9Au);
  }
  else
  {
    v7 = v18;
    v18 = 0LL;
  }
  ReleaseInterface<ID2D1Geometry>(&v18);
  if ( v6 < 0 )
  {
    v17 = 364;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v17);
    goto LABEL_10;
  }
  v13 = (**v7)(v7, &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010, v3);
  v6 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x172u);
LABEL_10:
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v7);
  return (unsigned int)v6;
}
