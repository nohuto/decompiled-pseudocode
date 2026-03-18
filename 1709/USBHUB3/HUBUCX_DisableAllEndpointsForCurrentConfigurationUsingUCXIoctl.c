/*
 * XREFs of HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C0021220
 * Callers:
 *     HUBDSM_DisablingEndpointsInControllerOHubStopOnDetach @ 0x1C00193B0 (HUBDSM_DisablingEndpointsInControllerOHubStopOnDetach.c)
 *     HUBDSM_DisablingEndpointsOnDetachWithSpecialFile @ 0x1C0019490 (HUBDSM_DisablingEndpointsOnDetachWithSpecialFile.c)
 *     HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending @ 0x1C00194C0 (HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001FA3C (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 */

void __fastcall HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl(__int64 a1)
{
  __int64 v1; // rax
  __int64 i; // r8
  __int64 j; // r9
  int v5; // ecx
  __int64 v6; // r8

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
      (__int64)&WPP_3d53ed487f413aabe4c3ad9959a4b253_Traceguids);
LABEL_4:
    HUBSM_AddEvent(a1 + 504, 4028);
    return;
  }
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  for ( i = *(_QWORD *)(v1 + 16); ; i = *(_QWORD *)(v6 + 8) )
  {
    v6 = i - 8;
    if ( v1 + 16 == v6 + 8 )
      break;
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v6 + 24); j = (unsigned int)(j + 1) )
    {
      v5 = *(_DWORD *)(v6 + 72 * j + 48);
      if ( v5 == 4 )
      {
        *(_DWORD *)(v6 + 72 * j + 48) = 5;
        *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v6 + 72 * j + 40);
      }
      else if ( v5 == 6 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v6 + 72 * j + 40);
      }
    }
  }
  if ( !*(_DWORD *)(a1 + 128) )
    goto LABEL_4;
  HUBUCX_EnableDisableEndpointsUsingUCXIoctl(a1);
}
