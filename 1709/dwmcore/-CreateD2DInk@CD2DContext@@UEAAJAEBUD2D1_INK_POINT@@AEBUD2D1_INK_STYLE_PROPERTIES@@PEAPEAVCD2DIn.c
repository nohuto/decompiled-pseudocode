/*
 * XREFs of ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x1801A9680
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x1801B3D10 (-Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::CreateD2DInk(
        CD2DContext *this,
        const struct D2D1_INK_POINT *a2,
        const struct D2D1_INK_STYLE_PROPERTIES *a3,
        struct CD2DInk **a4)
{
  signed int v7; // eax
  unsigned int v8; // ebx
  signed int v9; // eax
  signed int v10; // eax
  struct ID2D1InkStyle *v12; // [rsp+30h] [rbp-18h] BYREF
  struct ID2D1Ink *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D1_INK_STYLE_PROPERTIES *, struct ID2D1InkStyle **))(**((_QWORD **)this + 22) + 768LL))(
         *((_QWORD *)this + 22),
         a3,
         &v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x1B4u);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D1_INK_POINT *, struct ID2D1Ink **))(**((_QWORD **)this + 22)
                                                                                              + 760LL))(
           *((_QWORD *)this + 22),
           a2,
           &v13);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x1B6u);
    }
    else
    {
      v10 = CD2DInk::Create(*((struct CD2DResourceManager **)this + 18), v13, v12, a4);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x1B8u);
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v13);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v12);
  return v8;
}
