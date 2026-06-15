/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18002ECB8
 * Callers:
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000BD10 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180008C40 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009D40 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x18000B42C (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rbx
  CDeviceGraphObjectsStore *v3; // rax
  const struct _GUID *v4; // rcx
  unsigned int v5; // edi

  *a1 = 0LL;
  v2 = 0LL;
  v3 = (CDeviceGraphObjectsStore *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v2 = (volatile signed __int32 *)CDeviceGraphObjectsStore::CDeviceGraphObjectsStore(v3);
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_9a2be8d5_927d_41b2_85e2_eb3cb617429a, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v2;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      v5 = 0;
    }
    else if ( InlineIsEqualGUID(v4, v4) )
    {
      *a1 = v2;
      v5 = 0;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
    else
    {
      v5 = -2147467262;
    }
  }
  else
  {
    v5 = -2147024882;
  }
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  return v5;
}
