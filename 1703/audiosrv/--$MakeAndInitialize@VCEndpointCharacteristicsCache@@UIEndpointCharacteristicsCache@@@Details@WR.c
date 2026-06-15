/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@@Z @ 0x180033C7C
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003543C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x180033BCC (--0CEndpointCharacteristicsCache@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJXZ @ 0x180033C3C (-RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJXZ.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristicsCache@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180033D30 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristicsCache@@VNil@Details@WRL.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristicsCache@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180033DA0 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristicsCache@@VNil@Details@WRL@Micros.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache>()
{
  RTL_SRWLOCK *v0; // rbx
  CEndpointCharacteristicsCache *v1; // rax
  __int64 v2; // rdx
  int v3; // edi
  __int64 (__fastcall *v4)(RTL_SRWLOCK *, GUID *, struct IEndpointCharacteristicsCache **); // rax
  int Interface; // eax
  void (__fastcall *v6)(RTL_SRWLOCK *); // rax

  g_pEndpointCharacteristicsCache = 0LL;
  v0 = 0LL;
  v1 = (CEndpointCharacteristicsCache *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v1 )
  {
    v0 = (RTL_SRWLOCK *)CEndpointCharacteristicsCache::CEndpointCharacteristicsCache(v1, v2);
    v3 = CEndpointCharacteristicsCache::RuntimeClassInitialize(v0);
    if ( v3 >= 0 )
    {
      v4 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, GUID *, struct IEndpointCharacteristicsCache **))v0->Ptr;
      if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristicsCache,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristicsCache,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                      v0,
                      &GUID_b436cff3_d73b_4d4f_8bec_cb7440eeb656,
                      &g_pEndpointCharacteristicsCache);
      else
        Interface = v4(v0, &GUID_b436cff3_d73b_4d4f_8bec_cb7440eeb656, &g_pEndpointCharacteristicsCache);
      v3 = Interface;
    }
  }
  else
  {
    v3 = -2147024882;
  }
  if ( v0 )
  {
    v6 = (void (__fastcall *)(RTL_SRWLOCK *))*((_QWORD *)v0->Ptr + 2);
    if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristicsCache,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristicsCache,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v0);
    else
      v6(v0);
  }
  return (unsigned int)v3;
}
