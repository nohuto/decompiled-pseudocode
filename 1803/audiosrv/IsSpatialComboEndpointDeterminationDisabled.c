/*
 * XREFs of IsSpatialComboEndpointDeterminationDisabled @ 0x180018268
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x180005FA4 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x18005ED9C (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062B98 (IsGetDefaultSpatialRenderingModePresent.c)
 */

bool IsSpatialComboEndpointDeterminationDisabled()
{
  int v0; // ebx
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  if ( dword_1801891C0 == -1 )
  {
    v0 = 1;
    dword_1801891C0 = 1;
    if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() )
      v0 = IsSpatialSpeakerProtectionCheckRequired();
    if ( v0 )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
        L"DisableSpatialOnComboEndpoints",
        0x18u,
        0LL,
        &dword_1801891C0,
        &pcbData);
    }
  }
  return dword_1801891C0 != 0;
}
