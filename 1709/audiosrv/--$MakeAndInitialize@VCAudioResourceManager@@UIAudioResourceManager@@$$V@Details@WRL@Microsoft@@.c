/*
 * XREFs of ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x180098020
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063FBC (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A110 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaD_ea_18005A110.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceManager@@UIAudioResourceControl@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceManager@@UIAudioResourceControl@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180097F58 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceMa.c)
 *     ??0CAudioResourceManager@@QEAA@XZ @ 0x180098760 (--0CAudioResourceManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager,>()
{
  CAudioResourceManager *v0; // rax
  unsigned int v1; // edi
  CAudioResourceManager *v2; // rbx

  g_AudioResourceManager = 0LL;
  v0 = (CAudioResourceManager *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    v2 = CAudioResourceManager::CAudioResourceManager(v0);
    *((_BYTE *)v2 + 88) = 1;
    v1 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>>(
           (__int64)v2,
           &GUID_68324e3c_49f0_43af_b384_db5f107416ab,
           &g_AudioResourceManager);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ISaDeviceProxy,IInspectable>::Release((volatile signed __int64 *)v2);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
