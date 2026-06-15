/*
 * XREFs of ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x1800B6238
 * Callers:
 *     _lambda_f3af0907113bf748eb1a6fb65ef667f3_::operator() @ 0x1800B0DA0 (_lambda_f3af0907113bf748eb1a6fb65ef667f3_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x1800D3704 (Create_SpatialAudioDevicePropertyReader.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CEndpointCharacteristics::GetSpatialRenderingMode(CEndpointCharacteristics *this, unsigned int *a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  *a2 = 0;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v4);
  if ( (int)Create_SpatialAudioDevicePropertyReader(0LL, *((_QWORD *)this + 4), &v4) >= 0 )
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v4 + 152LL))(v4, a2);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v4);
}
