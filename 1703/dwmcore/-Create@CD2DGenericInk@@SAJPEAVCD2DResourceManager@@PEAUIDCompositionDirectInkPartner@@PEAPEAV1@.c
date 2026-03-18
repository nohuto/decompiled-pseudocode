/*
 * XREFs of ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkPartner@@PEAPEAV1@@Z @ 0x18019E9EC
 * Callers:
 *     ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x180197DC0 (-CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18004BDD4 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DGenericInk::Create(
        struct CD2DResourceManager *a1,
        struct IDCompositionDirectInkPartner *a2,
        struct CD2DGenericInk **a3)
{
  unsigned int v3; // edi
  CD2DResource *v7; // rax
  struct CD2DGenericInk *v8; // rbx
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v7 = (CD2DResource *)operator new(0x70uLL);
  v8 = v7;
  if ( v7 )
  {
    CD2DResource::CD2DResource(v7, a1, 0);
    *((_QWORD *)v8 + 2) = &CD2DGenericInk::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v8 = &CD2DGenericInk::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v8 + 13) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CD2DGenericInk *))(*(_QWORD *)v8 + 8LL))(v8);
    if ( *((struct IDCompositionDirectInkPartner **)v8 + 13) != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IDCompositionDirectInkPartner *))(*(_QWORD *)a2 + 8LL))(a2);
      v10 = *((_QWORD *)v8 + 13);
      *((_QWORD *)v8 + 13) = a2;
      Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v10);
    }
    *a3 = v8;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x12u);
  }
  return v3;
}
