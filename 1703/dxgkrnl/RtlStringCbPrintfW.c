/*
 * XREFs of RtlStringCbPrintfW @ 0x1C00044B8
 * Callers:
 *     ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C000428C (-ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B05C0 (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B06BC (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00B0984 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00B0C90 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C010FE8C (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiPdoHandleQueryId @ 0x1C01197F0 (DpiPdoHandleQueryId.c)
 *     DpiGdoSetupGdiParameters @ 0x1C0119E10 (DpiGdoSetupGdiParameters.c)
 *     DpOpenSpbResource @ 0x1C01CCDB0 (DpOpenSpbResource.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C01E5E90 (-_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = _vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      pszDest[v6] = 0;
      return -2147483643;
    }
    else if ( v7 == v6 )
    {
      pszDest[v6] = 0;
    }
  }
  return v5;
}
