/*
 * XREFs of HUBFDO_IoctlValidateParameters @ 0x1C00674F4
 * Callers:
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000B960 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C00675AC (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C0067770 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0067940 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0067C94 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C0067EB8 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C0068078 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C0068294 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0068680 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C0068C1C (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C0068EA8 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C0069268 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlCyclePort @ 0x1C006968C (HUBFDO_IoctlCyclePort.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBFDO_IoctlValidateParameters(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // r10d
  __int64 v7; // rcx
  unsigned __int16 v8; // r9

  v6 = 0;
  if ( (*(_DWORD *)(a1 + 40) & 0x40) == 0 )
    return (unsigned int)-1073741823;
  if ( a3 < a2 )
  {
    v7 = *(_QWORD *)(a1 + 2512);
    v8 = 29;
LABEL_11:
    WPP_RECORDER_SF_(v7, 2u, 3u, v8, (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( a6 < a5 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2512), 2u, 3u, 0x1Eu, (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids);
    return (unsigned int)-1073741789;
  }
  if ( a2 >= 4 && (!*a4 || *a4 > (unsigned int)*(unsigned __int16 *)(a1 + 48)) )
  {
    v7 = *(_QWORD *)(a1 + 2512);
    v8 = 31;
    goto LABEL_11;
  }
  return v6;
}
