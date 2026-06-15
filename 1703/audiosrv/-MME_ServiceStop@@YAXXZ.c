/*
 * XREFs of ?MME_ServiceStop@@YAXXZ @ 0x1800B026C
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180082200 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     ?DeletePnpInfo@@YAXXZ @ 0x1800B0168 (-DeletePnpInfo@@YAXXZ.c)
 */

void MME_ServiceStop(void)
{
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_b102d38601a836944f027ba64192a35a_Traceguids);
  }
  if ( (unsigned int)IsMmeServiceStopSupported() )
  {
    DeletePnpInfo();
    if ( AudioEndpointBuilderSid )
      LocalFree(AudioEndpointBuilderSid);
    if ( AudiosrvSid )
      LocalFree(AudiosrvSid);
    AudioEndpointBuilderSid = 0LL;
    AudiosrvSid = 0LL;
  }
}
