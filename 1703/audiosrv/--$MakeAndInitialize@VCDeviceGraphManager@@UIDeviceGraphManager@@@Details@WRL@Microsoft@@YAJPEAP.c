/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphManager@@@Z @ 0x180037BCC
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x1800379F0 (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180008C40 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180037CB0 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Deta.c)
 *     ??0CDeviceGraphManager@@QEAA@XZ @ 0x180037CE0 (--0CDeviceGraphManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@VNil@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800A5328 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceL_ea_1800A5328.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphManager,IDeviceGraphManager>()
{
  CDeviceGraphManager *v0; // rax
  CDeviceGraphManager *v1; // rax
  CDeviceGraphManager *v2; // rdi
  const struct _GUID *v3; // rcx
  const struct _GUID *v4; // rcx
  const struct _GUID *v5; // r9
  __int64 v6; // rdx
  CDeviceGraphManager *v7; // r8
  int CanCastTo; // ebx

  g_DeviceGraphManager = 0LL;
  v0 = (CDeviceGraphManager *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v0 )
    return (unsigned int)-2147024882;
  v1 = CDeviceGraphManager::CDeviceGraphManager(v0);
  g_DeviceGraphManager = 0LL;
  v2 = v1;
  if ( InlineIsEqualGUID(&GUID_db97c98d_f3b4_496d_a227_7c66f5ed2ab4, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    g_DeviceGraphManager = v2;
    (*(void (__fastcall **)(CDeviceGraphManager *))(*(_QWORD *)v2 + 8LL))(v2);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v4, v5) )
    {
      g_DeviceGraphManager = v7;
      CanCastTo = 0;
LABEL_6:
      (*(void (__fastcall **)(CDeviceGraphManager *))(*(_QWORD *)v7 + 8LL))(v7);
      goto LABEL_7;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>::CanCastTo(
                  (char *)v7 + 8,
                  v6,
                  &g_DeviceGraphManager);
    if ( CanCastTo >= 0 )
    {
      v7 = g_DeviceGraphManager;
      goto LABEL_6;
    }
  }
LABEL_7:
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v2);
  return (unsigned int)CanCastTo;
}
