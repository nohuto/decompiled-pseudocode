/*
 * XREFs of ?GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C0003A74
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00AA7F4 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EC608 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C01DE7C4 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPrimaryPathInCloneGroup(const struct _D3DKMT_GETPATHSMODALITY *a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // r8d
  unsigned int v4; // edx
  _DWORD *i; // rcx

  result = 0LL;
  v3 = *((_DWORD *)a1 + 66 * a2 + 70);
  v4 = *((unsigned __int16 *)a1 + 10);
  if ( !*((_WORD *)a1 + 10) )
    return 3735928559LL;
  for ( i = (_DWORD *)((char *)a1 + 280); *i != v3; i += 66 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= v4 )
      return 3735928559LL;
  }
  return result;
}
