/*
 * XREFs of ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x1800BECE4
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063FBC (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000D0D4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x1800BF1AC (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioResourceManager@@UIAudioAppVolumePolicyChange@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C1990 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISp_ea_1800C1990.c)
 *     ?RuntimeClassInitialize@CSpatialAudioResourceManager@Sarm@@QEAAJPEAUIAudioPolicyManager@@@Z @ 0x1800C1EC8 (-RuntimeClassInitialize@CSpatialAudioResourceManager@Sarm@@QEAAJPEAUIAudioPolicyManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
        __int64 a1,
        struct IAudioPolicyManager **a2)
{
  Sarm::CSpatialAudioResourceManager *v3; // rax
  int v4; // ebx
  __int64 v5; // rdi
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  __int64 v8; // r8

  g_SpatialAudioResourceManager = 0LL;
  v3 = (Sarm::CSpatialAudioResourceManager *)operator new(0x2F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v3 )
    return (unsigned int)-2147024882;
  v5 = Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager(v3);
  v4 = Sarm::CSpatialAudioResourceManager::RuntimeClassInitialize((Sarm::CSpatialAudioResourceManager *)v5, *a2);
  if ( v4 >= 0 )
  {
    g_SpatialAudioResourceManager = 0LL;
    if ( InlineIsEqualGUID(&GUID_7f299b05_3e79_4c05_b9ac_9418573ffd42, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      g_SpatialAudioResourceManager = (Sarm::CSpatialAudioResourceManager *)v5;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v4 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v6, v6) )
      {
        v8 = v5;
        g_SpatialAudioResourceManager = (Sarm::CSpatialAudioResourceManager *)v5;
        v4 = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(v7, &GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b) )
        {
          v8 = v5 + 8;
          g_SpatialAudioResourceManager = (Sarm::CSpatialAudioResourceManager *)(v5 + 8);
          v4 = 0;
        }
        else
        {
          v4 = -2147467262;
        }
        if ( v4 < 0 )
          goto LABEL_13;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
LABEL_13:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioResourceManager,IAudioAppVolumePolicyChange>::Release(v5);
  return (unsigned int)v4;
}
