/*
 * XREFs of ??1SpatialAudioIO@@UEAA@XZ @ 0x18005CA04
 * Callers:
 *     ??_ESpatialAudioDeviceStateWriter@@UEAAPEAXI@Z @ 0x1800D3A20 (--_ESpatialAudioDeviceStateWriter@@UEAAPEAXI@Z.c)
 *     ??_GSpatialAudioIO@@UEAAPEAXI@Z @ 0x1800D3A80 (--_GSpatialAudioIO@@UEAAPEAXI@Z.c)
 *     ??_GSpatialAudioStateIO@@UEAAPEAXI@Z @ 0x1800D3AB0 (--_GSpatialAudioStateIO@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SpatialAudioIO::~SpatialAudioIO(SpatialAudioIO *this)
{
  *(_QWORD *)this = &SpatialAudioIO::`vftable';
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 67);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 66);
}
