/*
 * XREFs of ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x1800341A8
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003543C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180008C40 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x180033DC0 (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISpatialAudioResourceManager@@U?$InterfaceList@UIAudioAppVolumePolicyChange@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800342A0 (-Release@-$RuntimeClass@U-$InterfaceList@UISpatialAudioResourceManager@@U-$InterfaceList@UIAudio.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
        __int64 a1,
        __int64 *a2)
{
  Sarm::CSpatialAudioResourceManager *v3; // rbx
  Sarm::CSpatialAudioResourceManager *v4; // rax
  __int64 v5; // rdi
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  Sarm::CSpatialAudioResourceManager *v8; // rcx
  unsigned int v9; // edi
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp+20h] BYREF

  g_SpatialAudioResourceManager = 0LL;
  v3 = 0LL;
  v4 = (Sarm::CSpatialAudioResourceManager *)operator new(0x2C0uLL, (const struct std::nothrow_t *)&std::nothrow);
  Frequency.QuadPart = (LONGLONG)v4;
  if ( v4 )
  {
    v3 = Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager(v4);
    v5 = *a2;
    QueryPerformanceFrequency(&Frequency);
    g_u64QPCFrequency = Frequency.QuadPart;
    *((_QWORD *)v3 + 37) = v5;
    *((_BYTE *)v3 + 104) = 1;
    g_SpatialAudioResourceManager = 0LL;
    if ( InlineIsEqualGUID(&GUID_7f299b05_3e79_4c05_b9ac_9418573ffd42, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      g_SpatialAudioResourceManager = v3;
      (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v3 + 8LL))(v3);
      v9 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v6, v6) )
      {
        v8 = v3;
        g_SpatialAudioResourceManager = v3;
LABEL_5:
        v9 = 0;
        (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v8 + 8LL))(v8);
        goto LABEL_6;
      }
      if ( InlineIsEqualGUID(v7, &GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b) )
      {
        v8 = (Sarm::CSpatialAudioResourceManager *)((char *)v3 + 8);
        g_SpatialAudioResourceManager = (Sarm::CSpatialAudioResourceManager *)((char *)v3 + 8);
        goto LABEL_5;
      }
      v9 = -2147467262;
    }
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_6:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISpatialAudioResourceManager,Microsoft::WRL::Details::InterfaceList<IAudioAppVolumePolicyChange,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
  return v9;
}
