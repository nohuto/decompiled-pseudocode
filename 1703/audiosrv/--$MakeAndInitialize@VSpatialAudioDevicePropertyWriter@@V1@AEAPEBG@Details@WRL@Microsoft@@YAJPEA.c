/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBG@Z @ 0x18004640C
 * Callers:
 *     Create_SpatialAudioDevicePropertyWriter @ 0x180046350 (Create_SpatialAudioDevicePropertyWriter.c)
 * Callees:
 *     ??0SpatialAudioDevicePropertyWriter@@QEAA@XZ @ 0x18003C18C (--0SpatialAudioDevicePropertyWriter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBG@Z @ 0x18003C358 (-RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDevicePropertyWriter@@@WRL@Microsoft@@IEAAKXZ @ 0x1800464B0 (-InternalRelease@-$ComPtr@VSpatialAudioDevicePropertyWriter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyWriter,SpatialAudioDevicePropertyWriter,unsigned short const * &>(
        SpatialAudioDevicePropertyWriter **a1,
        char **a2)
{
  SpatialAudioDevicePropertyWriter *v4; // rax
  SpatialAudioDevicePropertyWriter *v5; // rbx
  int v6; // edi
  SpatialAudioDevicePropertyWriter *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v8 = 0LL;
  v4 = (SpatialAudioDevicePropertyWriter *)operator new(0x268uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = SpatialAudioDevicePropertyWriter::SpatialAudioDevicePropertyWriter(v4);
    v8 = v5;
    v9 = 0LL;
    v6 = SpatialAudioDevicePropertyWriter::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
    {
      if ( v5 )
        (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)v5 + 8LL))(v5);
      *a1 = v5;
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::ComPtr<SpatialAudioDevicePropertyWriter>::InternalRelease(&v8);
  return (unsigned int)v6;
}
