/*
 * XREFs of ?AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x140011A90
 * Callers:
 *     ?GetAudioDeviceModulesManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000E970 (-GetAudioDeviceModulesManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioDeviceModulesManager@Devices@.c)
 *     ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011BD0 (-QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ @ 0x14001F7D0 (-AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14001F7E0 (-AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::AddRef(
        Windows::Media::Devices::AudioDeviceModulesManager *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 6);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
