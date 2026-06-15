/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphStore@@UIDeviceGraphStore@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphStore@@@Z @ 0x180091B54
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x1800941B8 (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000D0D4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0CDeviceGraphStore@@QEAA@XZ @ 0x180092248 (--0CDeviceGraphStore@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180094A10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphStor.c)
 */

// Hidden C++ exception states: #wind=2
__int64 Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphStore,IDeviceGraphStore,>()
{
  CDeviceGraphStore *v0; // rax
  unsigned int v1; // edi
  CDeviceGraphStore *v2; // rbx
  const struct _GUID *v3; // rcx

  g_DeviceGraphStore = 0LL;
  v0 = (CDeviceGraphStore *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    v2 = CDeviceGraphStore::CDeviceGraphStore(v0);
    g_DeviceGraphStore = 0LL;
    if ( InlineIsEqualGUID(&GUID_dd4e1953_892c_477b_8524_b1e06c951cd8, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      g_DeviceGraphStore = v2;
      (*(void (__fastcall **)(CDeviceGraphStore *))(*(_QWORD *)v2 + 8LL))(v2);
      v1 = 0;
    }
    else if ( InlineIsEqualGUID(v3, v3) )
    {
      g_DeviceGraphStore = v2;
      v1 = 0;
      (*(void (__fastcall **)(CDeviceGraphStore *))(*(_QWORD *)v2 + 8LL))(v2);
    }
    else
    {
      v1 = -2147467262;
    }
    if ( v2 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphStore>::Release(v2);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
