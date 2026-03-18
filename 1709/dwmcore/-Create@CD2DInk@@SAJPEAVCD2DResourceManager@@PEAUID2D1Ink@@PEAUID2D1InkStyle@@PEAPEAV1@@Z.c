/*
 * XREFs of ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x1801B3D10
 * Callers:
 *     ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x1801A9680 (-CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DIn.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x1800465AC (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DInk::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1Ink *a2,
        struct ID2D1InkStyle *a3,
        struct CD2DInk **a4)
{
  unsigned int v4; // ebx
  CD2DResource *v9; // rax
  struct CD2DInk *v10; // rdi

  v4 = 0;
  *a4 = 0LL;
  v9 = (CD2DResource *)operator new(0x78uLL);
  v10 = v9;
  if ( v9 )
  {
    CD2DResource::CD2DResource(v9, a1, 0);
    *((_QWORD *)v10 + 13) = 0LL;
    *((_QWORD *)v10 + 2) = &CD2DEffect::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v10 = &CD2DInk::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v10 + 14) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    (*(void (__fastcall **)(struct CD2DInk *))(*(_QWORD *)v10 + 8LL))(v10);
    *((_QWORD *)v10 + 13) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_QWORD *)v10 + 14) = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)a3 + 8LL))(a3);
    *a4 = v10;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x13u);
  }
  ReleaseInterfaceNoNULL<CManipulationManager>(0LL);
  return v4;
}
