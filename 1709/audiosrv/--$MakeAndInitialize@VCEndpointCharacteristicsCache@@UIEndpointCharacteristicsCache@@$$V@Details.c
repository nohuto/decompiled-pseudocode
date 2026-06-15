/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@@Z @ 0x1800AF5F4
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063FBC (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x1800AFBF8 (--0CEndpointCharacteristicsCache@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJXZ @ 0x1800B7EEC (-RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJXZ.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,>()
{
  CEndpointCharacteristicsCache *v0; // rax
  int v1; // edi
  CEndpointCharacteristicsCache *v2; // rbx

  g_pEndpointCharacteristicsCache = 0LL;
  v0 = (CEndpointCharacteristicsCache *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    v2 = CEndpointCharacteristicsCache::CEndpointCharacteristicsCache(v0);
    v1 = CEndpointCharacteristicsCache::RuntimeClassInitialize(v2);
    if ( v1 >= 0 )
      v1 = (**(__int64 (__fastcall ***)(CEndpointCharacteristicsCache *, GUID *, CEndpointCharacteristicsCache **))v2)(
             v2,
             &GUID_b436cff3_d73b_4d4f_8bec_cb7440eeb656,
             &g_pEndpointCharacteristicsCache);
    if ( v2 )
      (*(void (__fastcall **)(CEndpointCharacteristicsCache *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v1;
}
