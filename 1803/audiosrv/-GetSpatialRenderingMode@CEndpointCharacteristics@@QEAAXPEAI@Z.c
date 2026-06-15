/*
 * XREFs of ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x1800EBE40
 * Callers:
 *     _lambda_f3af0907113bf748eb1a6fb65ef667f3_::operator() @ 0x18004FEDC (_lambda_f3af0907113bf748eb1a6fb65ef667f3_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioDevicePropertyReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BF44 (-InternalRelease@-$ComPtr@UISpatialAudioDevicePropertyReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18004BFE0 (Create_SpatialAudioDevicePropertyReader.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CEndpointCharacteristics::GetSpatialRenderingMode(CEndpointCharacteristics *this, unsigned int *a2)
{
  const GUID *v4; // r9
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  *a2 = 0;
  Microsoft::WRL::ComPtr<ISpatialAudioDevicePropertyReader>::InternalRelease(&v5);
  if ( (int)Create_SpatialAudioDevicePropertyReader(0LL, *((_QWORD *)this + 4), &v5, v4) >= 0 )
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 152LL))(v5, a2);
  Microsoft::WRL::ComPtr<ISpatialAudioDevicePropertyReader>::InternalRelease(&v5);
}
