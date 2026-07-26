/*
 * XREFs of ?ndisDisconnectInStandby@@YA_NXZ @ 0x1C00F334C
 * Callers:
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00F3E24 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 */

bool ndisDisconnectInStandby(void)
{
  NTSTATUS v0; // eax
  int v2; // [rsp+40h] [rbp+8h] BYREF
  int v3; // [rsp+44h] [rbp+Ch]
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0LL;
  v2 = 1;
  v0 = ZwPowerInformation(PowerInformationInternal, &v2, 8u, &v4, 8u);
  if ( v0 >= 0 )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_d(0x1Bu, &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids, BYTE5(v4) & 1);
    return BYTE5(v4) & 1;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0098755 >= 3u )
      WPP_SF_d(0x1Au, &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids, v0);
    return 0;
  }
}
