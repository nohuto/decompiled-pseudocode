/*
 * XREFs of ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x1800C1A04
 * Callers:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Init@CD2DFactory@@AEAAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@@Z @ 0x1800C1B28 (-Init@CD2DFactory@@AEAAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::Create(
        enum D2D1_FACTORY_TYPE a1,
        struct D2D1_FACTORY_OPTIONS a2,
        struct CD2DFactory **a3)
{
  CD2DFactory *v5; // rax
  CD2DFactory *v6; // rdi
  enum D2D1_FACTORY_TYPE v7; // edx
  int v8; // eax
  unsigned int v9; // ebx

  v5 = (CD2DFactory *)operator new(0x28uLL);
  v6 = v5;
  if ( v5 )
  {
    *((_QWORD *)v5 + 1) = &CMILRefCountBase::`vftable';
    *((_DWORD *)v5 + 4) = 0;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *(_QWORD *)v5 = &CD2DFactory::`vftable'{for `IUnknown'};
    *((_QWORD *)v5 + 1) = &CD2DFactory::`vftable'{for `CMILRefCountBase'};
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(CD2DFactory *))(*(_QWORD *)v6 + 8LL))(v6);
    v8 = CD2DFactory::Init(v6, v7, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x20u);
      (*(void (__fastcall **)(CD2DFactory *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      *a3 = v6;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x19u);
  }
  return v9;
}
