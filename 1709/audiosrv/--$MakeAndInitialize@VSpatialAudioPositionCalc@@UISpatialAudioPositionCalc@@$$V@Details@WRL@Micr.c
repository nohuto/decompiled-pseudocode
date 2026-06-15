/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioPositionCalc@@@Z @ 0x1800290D4
 * Callers:
 *     Create_SpatialAudioPositionCalc @ 0x18002916C (Create_SpatialAudioPositionCalc.c)
 * Callees:
 *     ??0SpatialAudioPositionCalc@@QEAA@XZ @ 0x1800253B4 (--0SpatialAudioPositionCalc@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPositionCalc@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028B90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPositionCalc@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028C10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPos.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioPositionCalc,ISpatialAudioPositionCalc,>(
        void **a1)
{
  SpatialAudioPositionCalc *v2; // rax
  volatile signed __int32 *v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64, void **); // rax
  unsigned int Interface; // eax
  unsigned int v6; // edi
  __int64 (__fastcall *v7)(volatile signed __int32 *); // rax

  *a1 = 0LL;
  v2 = (SpatialAudioPositionCalc *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = (volatile signed __int32 *)SpatialAudioPositionCalc::SpatialAudioPositionCalc(v2);
    v4 = **(__int64 (__fastcall ***)(__int64, __int64, void **))v3;
    if ( v4 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::QueryInterface )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::QueryInterface(
                    (__int64)v3,
                    (__int64)&GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545,
                    a1);
    else
      Interface = v4((__int64)v3, (__int64)&GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545, a1);
    v6 = Interface;
    v7 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL);
    if ( v7 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::Release )
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
