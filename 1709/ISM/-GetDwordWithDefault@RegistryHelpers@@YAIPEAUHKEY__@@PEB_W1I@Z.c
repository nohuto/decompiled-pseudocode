/*
 * XREFs of ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x1800780D8
 * Callers:
 *     _dynamic_initializer_for__SpatialInteractionDevices::SpatialInteractionHeartbeat::ReportIntervalTickCount64__ @ 0x180001500 (_dynamic_initializer_for__SpatialInteractionDevices--SpatialInteractionHeartbeat--ReportInterval.c)
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800771F0 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x18007C3C8 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x1800B8F50 (-CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@.c)
 *     ??$MakeAndInitialize@V?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@012@@Z @ 0x1800BD4C4 (--$MakeAndInitialize@V-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows.c)
 *     ??0SpatialInteractionController@SpatialInteractionDevices@@QEAA@KKV?$function@$$A6AXXZ@std@@@Z @ 0x1800C3D70 (--0SpatialInteractionController@SpatialInteractionDevices@@QEAA@KKV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?EnsureInitializationRetryParameters@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ @ 0x1800C4994 (-EnsureInitializationRetryParameters@SpatialInteractionController@SpatialInteractionDevices@@AEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegistryHelpers::GetDwordWithDefault(
        RegistryHelpers *this,
        const WCHAR *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  DWORD v6; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v7[5]; // [rsp+44h] [rbp-14h] BYREF
  DWORD v8; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+64h] [rbp+Ch]

  v9 = HIDWORD(this);
  v8 = 0;
  v7[0] = 0;
  v4 = (unsigned int)a4;
  v6 = 4;
  if ( RegGetValueW(HKEY_LOCAL_MACHINE, a2, a3, 0x10u, &v8, v7, &v6) )
    return v4;
  if ( v8 != 4 )
    return v4;
  result = v7[0];
  if ( v6 != 4 )
    return v4;
  return result;
}
