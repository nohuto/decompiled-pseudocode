/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18002FF88
 * Callers:
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x180011990 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000D0D4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x18000E858 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180030080 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObje.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore,>(
        CDeviceGraphObjectsStore **a1)
{
  CDeviceGraphObjectsStore *v2; // rax
  CDeviceGraphObjectsStore *v3; // rbx
  const struct _GUID *v4; // rcx
  unsigned int v5; // edi

  *a1 = 0LL;
  v2 = (CDeviceGraphObjectsStore *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CDeviceGraphObjectsStore::CDeviceGraphObjectsStore(v2);
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_bc3cc03b_4ee4_495b_85ab_55c9f27372aa, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v3;
      (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v3 + 8LL))(v3);
      v5 = 0;
    }
    else if ( InlineIsEqualGUID(v4, v4) )
    {
      *a1 = v3;
      v5 = 0;
      (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v3 + 8LL))(v3);
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::Release(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
