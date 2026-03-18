/*
 * XREFs of ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x1800CB9B0
 * Callers:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800429E0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 * Callees:
 *     ?Init@CD2DFactory@@AEAAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@@Z @ 0x18004C294 (-Init@CD2DFactory@@AEAAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::Create(enum D2D1_FACTORY_TYPE a1, struct D2D1_FACTORY_OPTIONS a2, void ***a3)
{
  void **v5; // rax
  void **v6; // rdi
  enum D2D1_FACTORY_TYPE v7; // edx
  int v8; // eax
  unsigned int v9; // ebx

  v5 = (void **)operator new(0x28uLL);
  v6 = v5;
  if ( v5 )
  {
    v5[1] = &CMILRefCountBase::`vftable';
    *((_DWORD *)v5 + 4) = 0;
    v5[3] = 0LL;
    v5[4] = 0LL;
    *v5 = &CD2DFactory::`vftable'{for `IUnknown'};
    v5[1] = &CD2DFactory::`vftable'{for `CMILRefCountBase'};
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    (*((void (__fastcall **)(void **))*v6 + 1))(v6);
    v8 = CD2DFactory::Init(v6, v7, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x20u);
      (*((void (__fastcall **)(void **))*v6 + 2))(v6);
    }
    else
    {
      *a3 = v6;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x19u);
  }
  return v9;
}
