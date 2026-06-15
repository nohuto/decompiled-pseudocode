/*
 * XREFs of ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x18005E4D4
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005C0D8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DEE0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x18005E5AC (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSpatialAudioResourceManager@Sarm@@QEAAJPEAUIAudioPolicyManager@@@Z @ 0x18005E708 (-RuntimeClassInitialize@CSpatialAudioResourceManager@Sarm@@QEAAJPEAUIAudioPolicyManager@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioResourceManager@@UIAudioAppVolumePolicyChange@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005EA00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioRes.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
        __int64 a1,
        struct IAudioPolicyManager **a2)
{
  Sarm::CSpatialAudioResourceManager *v3; // rax
  Sarm::CSpatialAudioResourceManager *v4; // rbx
  int v5; // edi
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  Sarm::CSpatialAudioResourceManager *v8; // rcx
  __int64 v9; // rax

  g_SpatialAudioResourceManager = 0LL;
  v3 = (Sarm::CSpatialAudioResourceManager *)operator new(0x2F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v3 )
    return (unsigned int)-2147024882;
  v4 = (Sarm::CSpatialAudioResourceManager *)Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager(v3);
  v5 = Sarm::CSpatialAudioResourceManager::RuntimeClassInitialize(v4, *a2);
  if ( v5 >= 0 )
  {
    g_SpatialAudioResourceManager = 0LL;
    if ( InlineIsEqualGUID(&GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      g_SpatialAudioResourceManager = v4;
      v9 = *(_QWORD *)v4;
      v8 = v4;
      goto LABEL_7;
    }
    if ( InlineIsEqualGUID(v6, v6) )
    {
      v8 = v4;
LABEL_6:
      g_SpatialAudioResourceManager = v8;
      v9 = *(_QWORD *)v8;
LABEL_7:
      (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(v9 + 8))(v8);
      v5 = 0;
      goto LABEL_8;
    }
    if ( InlineIsEqualGUID(v7, &GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b) )
    {
      v8 = (Sarm::CSpatialAudioResourceManager *)((char *)v4 + 8);
      goto LABEL_6;
    }
    v5 = -2147467262;
  }
LABEL_8:
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioResourceManager,IAudioAppVolumePolicyChange>::Release(v4);
  return (unsigned int)v5;
}
