/*
 * XREFs of IsSpatialComboEndpointDeterminationDisabled @ 0x180003E88
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x1800031B0 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180039AF4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     <none>
 */

bool IsSpatialComboEndpointDeterminationDisabled()
{
  int v1; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  if ( dword_18012AC20 == -1 )
  {
    dword_18012AC20 = 1;
    v1 = 0;
    RtlGetDeviceFamilyInfoEnum(0LL, &v1, 0LL);
    if ( v1 == 3 )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
        L"DisableSpatialOnComboEndpoints",
        0x18u,
        0LL,
        &dword_18012AC20,
        &pcbData);
    }
  }
  return dword_18012AC20 != 0;
}
