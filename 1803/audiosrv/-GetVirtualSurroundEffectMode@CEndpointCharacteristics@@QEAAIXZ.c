/*
 * XREFs of ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x1800509E4
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHHPEAU_GUID@@444@Z @ 0x1800102E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     _lambda_f3af0907113bf748eb1a6fb65ef667f3_::operator() @ 0x18004FEDC (_lambda_f3af0907113bf748eb1a6fb65ef667f3_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioDevicePropertyReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BF44 (-InternalRelease@-$ComPtr@UISpatialAudioDevicePropertyReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18004BFE0 (Create_SpatialAudioDevicePropertyReader.c)
 *     ?GetVirtualSurroundEffectMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4VirtualSurroundEffectMode@@@Z @ 0x18004C4B0 (-GetVirtualSurroundEffectMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4VirtualSurroundEffectM.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetVirtualSurroundEffectMode(CEndpointCharacteristics *this)
{
  unsigned int v2; // edi
  const GUID *v3; // r9
  __int64 (__fastcall *v4)(SpatialAudioDevicePropertyReader *, enum VirtualSurroundEffectMode *); // rax
  int VirtualSurroundEffectMode; // eax
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  SpatialAudioDevicePropertyReader *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v8 = 0LL;
  v7 = 0;
  Microsoft::WRL::ComPtr<ISpatialAudioDevicePropertyReader>::InternalRelease((__int64 *)&v8);
  if ( (int)Create_SpatialAudioDevicePropertyReader(0LL, *((_QWORD *)this + 4), &v8, v3) >= 0 )
  {
    v4 = *(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *, enum VirtualSurroundEffectMode *))(*(_QWORD *)v8 + 184LL);
    if ( v4 == SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode )
      VirtualSurroundEffectMode = SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode(
                                    v8,
                                    (enum VirtualSurroundEffectMode *)&v7);
    else
      VirtualSurroundEffectMode = v4(v8, (enum VirtualSurroundEffectMode *)&v7);
    if ( VirtualSurroundEffectMode >= 0 )
      v2 = v7;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioDevicePropertyReader>::InternalRelease((__int64 *)&v8);
  return v2;
}
