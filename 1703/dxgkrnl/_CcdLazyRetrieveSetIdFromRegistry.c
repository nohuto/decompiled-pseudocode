/*
 * XREFs of _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00B1828
 * Callers:
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00AF0D4 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B03E0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00B0944 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcdLazyRetrieveSetIdFromRegistry(HANDLE KeyHandle, const WCHAR *a2, CCD_SET_STRING_ID *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(int *)a3 < 0 || !*((_WORD *)a3 + 4) )
    return CcdRetrieveSetIdFromRegistry(KeyHandle, a2, a3);
  return result;
}
