/*
 * XREFs of _MapCmDevicePropertyToRegValue @ 0x14004C2C4
 * Callers:
 *     _CmGetDeviceRegPropWorker @ 0x140484810 (_CmGetDeviceRegPropWorker.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405C2018 (_CmSetDeviceRegPropWorker.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall MapCmDevicePropertyToRegValue(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx

  if ( a2 <= 16 )
  {
    if ( a2 == 16 )
      return L"Capabilities";
    if ( a2 > 9 )
    {
      v5 = a2 - 10;
      if ( !v5 )
        return L"Driver";
      v6 = v5 - 1;
      if ( !v6 )
        return L"ConfigFlags";
      v11 = v6 - 1;
      if ( !v11 )
        return L"Mfg";
      v12 = v11 - 1;
      if ( !v12 )
        return L"FriendlyName";
      if ( v12 == 1 )
        return L"LocationInformation";
    }
    else
    {
      if ( a2 == 9 )
        return L"ClassGUID";
      v2 = a2 - 1;
      if ( !v2 )
        return L"DeviceDesc";
      v3 = v2 - 1;
      if ( !v3 )
        return L"HardwareID";
      v7 = v3 - 1;
      if ( !v7 )
        return L"CompatibleIDs";
      v13 = v7 - 2;
      if ( !v13 )
        return L"Service";
      if ( v13 == 3 )
        return L"Class";
    }
    return 0LL;
  }
  if ( a2 <= 27 )
  {
    if ( a2 == 27 )
      return L"Exclusive";
    v8 = a2 - 17;
    if ( !v8 )
      return L"UINumber";
    v9 = v8 - 1;
    if ( !v9 )
      return L"UpperFilters";
    v10 = v9 - 1;
    if ( !v10 )
      return L"LowerFilters";
    v18 = v10 - 5;
    if ( !v18 )
      return L"Security";
    if ( v18 == 2 )
      return L"DeviceType";
    return 0LL;
  }
  v14 = a2 - 28;
  if ( !v14 )
    return L"DeviceCharacteristics";
  v15 = v14 - 1;
  if ( !v15 )
    return L"Address";
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 4;
    if ( !v17 )
      return L"RemovalPolicy";
    if ( v17 == 3 )
      return L"ContainerID";
    return 0LL;
  }
  return L"UINumberDescFormat";
}
