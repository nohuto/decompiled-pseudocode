/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@@Z @ 0x18005F454
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005C0D8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristicsCache@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005F500 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpoint.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristicsCache@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005F560 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEn_ea_18005F560.c)
 *     ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x18005F5B4 (--0CEndpointCharacteristicsCache@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJXZ @ 0x18005F624 (-RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,>()
{
  CEndpointCharacteristicsCache *v0; // rax
  CEndpointCharacteristicsCache *v1; // rbx
  int v2; // edi
  __int64 (__fastcall *v3)(CEndpointCharacteristicsCache *, GUID *, CEndpointCharacteristicsCache **); // rax
  int Interface; // eax
  void (__fastcall *v5)(CEndpointCharacteristicsCache *); // rax

  g_pEndpointCharacteristicsCache = 0LL;
  v0 = (CEndpointCharacteristicsCache *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    v1 = CEndpointCharacteristicsCache::CEndpointCharacteristicsCache(v0);
    v2 = CEndpointCharacteristicsCache::RuntimeClassInitialize(v1);
    if ( v2 >= 0 )
    {
      v3 = **(__int64 (__fastcall ***)(CEndpointCharacteristicsCache *, GUID *, CEndpointCharacteristicsCache **))v1;
      if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristicsCache>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristicsCache>::QueryInterface(
                      v1,
                      &GUID_b436cff3_d73b_4d4f_8bec_cb7440eeb656,
                      &g_pEndpointCharacteristicsCache);
      else
        Interface = v3(v1, &GUID_b436cff3_d73b_4d4f_8bec_cb7440eeb656, &g_pEndpointCharacteristicsCache);
      v2 = Interface;
    }
    if ( v1 )
    {
      v5 = *(void (__fastcall **)(CEndpointCharacteristicsCache *))(*(_QWORD *)v1 + 16LL);
      if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristicsCache>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristicsCache>::Release(v1);
      else
        v5(v1);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v2;
}
