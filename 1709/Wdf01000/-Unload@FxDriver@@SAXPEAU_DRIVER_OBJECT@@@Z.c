/*
 * XREFs of ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C007E5D0
 * Callers:
 *     imp_WdfDriverMiniportUnload @ 0x1C007AAA0 (imp_WdfDriverMiniportUnload.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     FxDestroy @ 0x1C008056C (FxDestroy.c)
 */

void __fastcall FxDriver::Unload(_DRIVER_OBJECT *DriverObject)
{
  __int64 v2; // rbx
  _FX_DRIVER_GLOBALS *v3; // rdi
  const void *_a1; // rcx
  void (__fastcall *v5)(unsigned __int64); // rax
  const void *v6; // rbp
  unsigned __int64 v7; // rcx

  v2 = *(_QWORD *)IoGetDriverObjectExtension(DriverObject, FxDriver::GetFxDriver);
  if ( v2 )
  {
    v3 = *(_FX_DRIVER_GLOBALS **)(v2 + 16);
    if ( v3->FxVerboseOn )
    {
      _a1 = (const void *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(v2 + 10) )
        _a1 = 0LL;
      WPP_IFR_SF_qq(v3, 5u, 0x11u, 0xCu, WPP_FxDriver_cpp_Traceguids, _a1, DriverObject);
    }
    v5 = *(void (__fastcall **)(unsigned __int64))(v2 + 352);
    if ( v5 )
    {
      v6 = (const void *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v7 = v2 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(v2 + 10) )
        v7 = 0LL;
      v5(v7);
      if ( v3->FxVerboseOn )
      {
        if ( !*(_WORD *)(v2 + 10) )
          v6 = 0LL;
        WPP_IFR_SF_qq(v3, 5u, 0x11u, 0xDu, WPP_FxDriver_cpp_Traceguids, v6, DriverObject);
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    v3->Driver = 0LL;
    FxDestroy(v3);
  }
}
