/*
 * XREFs of ?GetBounds@CInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180168800
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x1801685C0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1801689F0 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::GetBounds(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  struct ID2D1Ink *v4; // rdi
  struct ID2D1InkStyle *v5; // r14
  signed int v7; // eax
  unsigned int v8; // ebx
  signed int ID2D1InkAndInkStyle; // eax
  signed int v10; // eax
  struct ID2D1Ink *v12; // [rsp+30h] [rbp-30h] BYREF
  struct ID2D1InkStyle *v13; // [rsp+38h] [rbp-28h] BYREF
  CD2DInk *v14; // [rsp+40h] [rbp-20h] BYREF
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v7 = CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::FindOrCreateResourceNoRef(
         (struct IDeviceResourceNotify *)(a1 + 56),
         0LL,
         &v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x18u);
  }
  else
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v14, &v12, &v13);
    v8 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ID2D1InkAndInkStyle, 0x1Au);
      v4 = v12;
      v5 = v13;
    }
    else
    {
      v4 = v12;
      v5 = v13;
      v10 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, struct ID2D1InkStyle *, _QWORD, __int128 *))(*(_QWORD *)v12 + 104LL))(
              v12,
              v13,
              0LL,
              &v15);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x1Cu);
      else
        *a4 = v15;
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v4);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v5);
  return v8;
}
