/*
 * XREFs of ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x180001E98
 * Callers:
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x18000FE90 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18004BDD4 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DEffect::Create(struct CD2DResourceManager *a1, struct ID2D1Effect *a2, struct CD2DEffect **a3)
{
  unsigned int v3; // ebx
  CD2DResource *v7; // rax
  struct CD2DEffect *v8; // rdi

  v3 = 0;
  *a3 = 0LL;
  v7 = (CD2DResource *)operator new(0x70uLL);
  v8 = v7;
  if ( v7 )
  {
    CD2DResource::CD2DResource(v7, a1, 0);
    *((_QWORD *)v8 + 13) = 0LL;
    *((_QWORD *)v8 + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v8 = &CD2DEffect::`vftable'{for `CMILCOMBase'};
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CD2DEffect *))(*(_QWORD *)v8 + 8LL))(v8);
    *((_QWORD *)v8 + 13) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)a2 + 8LL))(a2);
    *a3 = v8;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13u);
  }
  return v3;
}
