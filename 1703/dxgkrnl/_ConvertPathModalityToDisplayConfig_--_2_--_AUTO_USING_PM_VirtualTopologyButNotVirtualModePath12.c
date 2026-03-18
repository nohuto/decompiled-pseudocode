/*
 * XREFs of _ConvertPathModalityToDisplayConfig_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath1227::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath1227 @ 0x1C00AB19C
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00AA7F4 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertPathModalityToDisplayConfig_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath1227::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath1227(
        __int64 *a1)
{
  unsigned int i; // r8d
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  for ( i = 0; i < *((_DWORD *)a1 + 2); *(_DWORD *)(v3 + *a1 + 192) &= ~0x80u )
  {
    v2 = i++;
    v3 = 264 * v2;
    *(_BYTE *)(v3 + *a1 + 224) = 0;
    result = *a1;
  }
  return result;
}
