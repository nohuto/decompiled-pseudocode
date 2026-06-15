/*
 * XREFs of IsSpatialComboEndpointDeterminationDisabled @ 0x18000878C
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18000A8F4 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x1800BA5B4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180034CF8 (IsGetDefaultSpatialRenderingModePresent.c)
 */

bool IsSpatialComboEndpointDeterminationDisabled()
{
  int v1; // ebx
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  if ( dword_18014B1F4 == -1 )
  {
    v1 = 1;
    dword_18014B1F4 = 1;
    if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() )
      v1 = IsSpatialSpeakerProtectionCheckRequired();
    if ( v1 )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
        L"DisableSpatialOnComboEndpoints",
        0x18u,
        0LL,
        &dword_18014B1F4,
        &pcbData);
    }
  }
  return dword_18014B1F4 != 0;
}
