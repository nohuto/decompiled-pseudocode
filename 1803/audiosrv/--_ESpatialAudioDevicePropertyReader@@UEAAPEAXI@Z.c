/*
 * XREFs of ??_ESpatialAudioDevicePropertyReader@@UEAAPEAXI@Z @ 0x18004C370
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004C2A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISp_ea_18004C2A0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BF80 (-InternalRelease@-$ComPtr@UISpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BFB0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CleanUp@SpatialAudioDevicePropertyReader@@AEAAXXZ @ 0x18004CDA8 (-CleanUp@SpatialAudioDevicePropertyReader@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyStore@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D69C (-InternalRelease@-$ComPtr@UIPropertyStore@@@WRL@Microsoft@@IEAAKXZ.c)
 */

SpatialAudioDevicePropertyReader *__fastcall SpatialAudioDevicePropertyReader::`vector deleting destructor'(
        SpatialAudioDevicePropertyReader *this,
        char a2)
{
  *(_QWORD *)this = &SpatialAudioDevicePropertyReader::`vftable'{for `ISpatialAudioDevicePropertyReader'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  SpatialAudioDevicePropertyReader::CleanUp(this);
  Microsoft::WRL::ComPtr<ISpatialAudioDeviceStateReader>::InternalRelease((__int64 *)this + 52);
  Microsoft::WRL::ComPtr<IPropertyStore>::InternalRelease((char *)this + 408);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 50);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
