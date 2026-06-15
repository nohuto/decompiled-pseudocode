/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioPositionCalc@@@Z @ 0x18004C200
 * Callers:
 *     Create_SpatialAudioPositionCalc @ 0x18004C138 (Create_SpatialAudioPositionCalc.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPositionCalc@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D140 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18004D140.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPositionCalc@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004D1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPos.c)
 *     ??0SpatialAudioPositionCalc@@QEAA@XZ @ 0x18005CEA4 (--0SpatialAudioPositionCalc@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioPositionCalc,ISpatialAudioPositionCalc,>(
        _QWORD *a1)
{
  SpatialAudioPositionCalc *v2; // rax
  SpatialAudioPositionCalc *v3; // rbx
  __int64 (__fastcall *v4)(SpatialAudioPositionCalc *, GUID *, _QWORD *); // rax
  unsigned int Interface; // eax
  unsigned int v6; // edi
  void (__fastcall *v7)(SpatialAudioPositionCalc *); // rax

  *a1 = 0LL;
  v2 = (SpatialAudioPositionCalc *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = SpatialAudioPositionCalc::SpatialAudioPositionCalc(v2);
    v4 = **(__int64 (__fastcall ***)(SpatialAudioPositionCalc *, GUID *, _QWORD *))v3;
    if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::QueryInterface )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::QueryInterface(
                    v3,
                    &GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545,
                    a1);
    else
      Interface = v4(v3, &GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545, a1);
    v6 = Interface;
    v7 = *(void (__fastcall **)(SpatialAudioPositionCalc *))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::Release(v3);
    else
      v7(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
