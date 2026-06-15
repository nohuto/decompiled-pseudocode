/*
 * XREFs of ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x18006E344
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063FBC (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000D0D4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0CVolumeProvider@@QEAA@XZ @ 0x18006E5CC (--0CVolumeProvider@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006ED90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider,>()
{
  CVolumeProvider *v0; // rax
  unsigned int v1; // edi
  CVolumeProvider *v2; // rax
  CVolumeProvider *v3; // rbx
  const struct _GUID *v4; // rcx

  g_pVolumeProvider = 0LL;
  v0 = (CVolumeProvider *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    v2 = CVolumeProvider::CVolumeProvider(v0);
    g_pVolumeProvider = 0LL;
    v3 = v2;
    if ( InlineIsEqualGUID(&GUID_20b2a72d_4632_4a08_bd47_6aca4e517f6a, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      g_pVolumeProvider = v3;
      (*(void (__fastcall **)(CVolumeProvider *))(*(_QWORD *)v3 + 8LL))(v3);
      v1 = 0;
    }
    else if ( InlineIsEqualGUID(v4, v4) )
    {
      g_pVolumeProvider = v3;
      v1 = 0;
      (*(void (__fastcall **)(CVolumeProvider *))(*(_QWORD *)v3 + 8LL))(v3);
    }
    else
    {
      v1 = -2147467262;
    }
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::Release(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
