/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioConfigureDevice@@AEAPEBG@Z @ 0x1800462AC
 * Callers:
 *     Create_SpatialAudioConfigureDevice @ 0x1800461F0 (Create_SpatialAudioConfigureDevice.c)
 * Callees:
 *     ??0SpatialAudioConfigureDevice@@QEAA@XZ @ 0x18003BEB0 (--0SpatialAudioConfigureDevice@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBG@Z @ 0x18003BF98 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioConfigureDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180046568 (-InternalRelease@-$ComPtr@VSpatialAudioConfigureDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioConfigureDevice,SpatialAudioConfigureDevice,unsigned short const * &>(
        SpatialAudioConfigureDevice **a1,
        char **a2)
{
  SpatialAudioConfigureDevice *v4; // rax
  SpatialAudioConfigureDevice *v5; // rbx
  int v6; // edi
  SpatialAudioConfigureDevice *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v8 = 0LL;
  v4 = (SpatialAudioConfigureDevice *)operator new(0x268uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = SpatialAudioConfigureDevice::SpatialAudioConfigureDevice(v4);
    v8 = v5;
    v9 = 0LL;
    v6 = SpatialAudioConfigureDevice::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
    {
      if ( v5 )
        (*(void (__fastcall **)(SpatialAudioConfigureDevice *))(*(_QWORD *)v5 + 8LL))(v5);
      *a1 = v5;
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::ComPtr<SpatialAudioConfigureDevice>::InternalRelease(&v8);
  return (unsigned int)v6;
}
