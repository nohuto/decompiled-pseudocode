/*
 * XREFs of HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C0021D10
 * Callers:
 *     HUBDSM_DisablingEndpointsInControllerOHubStopOnDetach @ 0x1C0019EE0 (HUBDSM_DisablingEndpointsInControllerOHubStopOnDetach.c)
 *     HUBDSM_DisablingEndpointsOnDetachWithSpecialFile @ 0x1C0019FC0 (HUBDSM_DisablingEndpointsOnDetachWithSpecialFile.c)
 *     HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending @ 0x1C0019FF0 (HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C0020378 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 */

void __fastcall HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned int i; // r9d
  int v7; // ecx
  __int64 v8; // rax

  v1 = *(_QWORD *)(a1 + 48);
  if ( !v1 )
    goto LABEL_4;
  if ( !*(_DWORD *)(a1 + 96) )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      5u,
      0x34u,
      (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids);
LABEL_4:
    HUBSM_AddEvent(a1 + 504, 4028);
    return;
  }
  v3 = v1 + 16;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  v4 = *(_QWORD *)(v1 + 16);
  v5 = v4 - 8;
  if ( v3 == v4 )
    goto LABEL_4;
  do
  {
    for ( i = 0; i < *(_DWORD *)(v5 + 24); ++i )
    {
      v7 = *(_DWORD *)(v5 + 72LL * i + 48);
      if ( v7 == 4 )
      {
        *(_DWORD *)(v5 + 72LL * i + 48) = 5;
        *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v5 + 72LL * i + 40);
      }
      else if ( v7 == 6 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v5 + 72LL * i + 40);
      }
    }
    v8 = *(_QWORD *)(v5 + 8);
    v5 = v8 - 8;
  }
  while ( v3 != v8 );
  if ( !*(_DWORD *)(a1 + 128) )
    goto LABEL_4;
  HUBUCX_EnableDisableEndpointsUsingUCXIoctl(a1);
}
