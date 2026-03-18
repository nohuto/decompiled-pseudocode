/*
 * XREFs of HUBCONNECTOR_MapHubPorts @ 0x1C006DA48
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0066B40 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBCONNECTOR_RegisterPort @ 0x1C006CEC0 (HUBCONNECTOR_RegisterPort.c)
 *     HUBCONNECTOR_MapRootHubPorts @ 0x1C006D5D0 (HUBCONNECTOR_MapRootHubPorts.c)
 *     HUBCONNECTOR_MapIntegratedHubPorts @ 0x1C006D868 (HUBCONNECTOR_MapIntegratedHubPorts.c)
 *     HUBCONNECTOR_MapExternalHubPorts @ 0x1C006D964 (HUBCONNECTOR_MapExternalHubPorts.c)
 *     HUBCONNECTOR_UnMapHubPorts @ 0x1C006DB78 (HUBCONNECTOR_UnMapHubPorts.c)
 */

void __fastcall HUBCONNECTOR_MapHubPorts(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  __int128 v5; // xmm0
  int v6; // edx
  __int64 v7; // rcx

  if ( (*(_DWORD *)(a1 + 40) & 0x40000) != 0 )
  {
    v2 = a1 + 2352;
    v3 = *(_QWORD *)(a1 + 2352);
    v4 = v3 - 248;
    if ( a1 + 2352 == v3 )
      return;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v4 + 204) & 5) == 5 )
      {
        v5 = *(_OWORD *)(v4 + 1352);
        *(_DWORD *)(v4 + 1368) = 2;
        *(_OWORD *)(v4 + 1372) = v5;
        *(_QWORD *)(v4 + 1416) = (*(_DWORD *)(v4 + 1380) & 0x7F8000 | (unsigned __int64)(HIWORD(*(_DWORD *)(v4 + 1380)) & 0x7F80)) >> 7;
        v6 = HUBCONNECTOR_RegisterPort(v4);
        if ( v6 < 0 )
          break;
      }
      v7 = *(_QWORD *)(v4 + 248);
      v4 = v7 - 248;
      if ( v2 == v7 )
        return;
    }
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2512),
      2u,
      6u,
      0x1Bu,
      (__int64)&WPP_db693aa1fcfc37323e5a8b81ddef70b5_Traceguids,
      v6);
    HUBCONNECTOR_UnMapHubPorts(a1);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xFFFBFFFF);
  }
  if ( *(_BYTE *)(a1 + 232) )
  {
    if ( *(_WORD *)(a1 + 280) )
      HUBCONNECTOR_MapIntegratedHubPorts(a1);
    else
      HUBCONNECTOR_MapExternalHubPorts(a1);
  }
  else
  {
    HUBCONNECTOR_MapRootHubPorts(a1);
  }
}
