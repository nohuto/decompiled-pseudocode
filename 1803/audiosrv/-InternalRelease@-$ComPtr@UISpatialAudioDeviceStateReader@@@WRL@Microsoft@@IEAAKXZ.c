/*
 * XREFs of ?InternalRelease@?$ComPtr@UISpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BF80
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004B8F0 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??_ESpatialAudioDevicePropertyReader@@UEAAPEAXI@Z @ 0x18004C370 (--_ESpatialAudioDevicePropertyReader@@UEAAPEAXI@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004CE1C (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??_ESpatialAudioConfigureDevice@@UEAAPEAXI@Z @ 0x180102730 (--_ESpatialAudioConfigureDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ISpatialAudioDeviceStateReader>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::Release(v3);
    else
      return v4();
  }
  return result;
}
