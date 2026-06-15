/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioPositionCalc@@@Z @ 0x1800CC7E4
 * Callers:
 *     Create_SpatialAudioPositionCalc @ 0x1800CD25C (Create_SpatialAudioPositionCalc.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??0SpatialAudioPositionCalc@@QEAA@XZ @ 0x1800CC858 (--0SpatialAudioPositionCalc@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioPositionCalc,ISpatialAudioPositionCalc>(
        _QWORD *a1)
{
  SpatialAudioPositionCalc *v2; // rax
  SpatialAudioPositionCalc *v3; // rbx
  unsigned int v4; // edi

  *a1 = 0LL;
  v2 = (SpatialAudioPositionCalc *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = SpatialAudioPositionCalc::SpatialAudioPositionCalc(v2);
    v4 = (**(__int64 (__fastcall ***)(SpatialAudioPositionCalc *, GUID *, _QWORD *))v3)(
           v3,
           &GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545,
           a1);
    (*(void (__fastcall **)(SpatialAudioPositionCalc *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
