/*
 * XREFs of ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x14004DE78
 * Callers:
 *     ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140018500 (-GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU-$IVector@PEAVAud.c)
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x14004EA70 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 */

HRESULT __fastcall GuidToHString(struct _GUID *a1, HSTRING *a2)
{
  HRESULT result; // eax
  __int64 v4; // rdx
  GUID rguid; // [rsp+20h] [rbp-78h] BYREF
  OLECHAR sz[40]; // [rsp+30h] [rbp-68h] BYREF

  rguid = *a1;
  result = StringFromGUID2(&rguid, sz, 39);
  if ( result >= 0 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( sz[v4] );
    return WindowsCreateString(sz, v4, a2);
  }
  return result;
}
