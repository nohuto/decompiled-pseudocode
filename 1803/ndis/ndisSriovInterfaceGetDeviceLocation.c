/*
 * XREFs of ndisSriovInterfaceGetDeviceLocation @ 0x1C00F4810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisIovFindVFByVFId @ 0x1C00F2344 (ndisIovFindVFByVFId.c)
 */

void __fastcall ndisSriovInterfaceGetDeviceLocation(__int64 a1, unsigned __int16 a2, _WORD *a3, _BYTE *a4, _BYTE *a5)
{
  int v9; // ebx
  __int64 *VFByVFId; // rax

  v9 = 0;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_q(0x69u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, a1);
  VFByVFId = ndisIovFindVFByVFId(a1, a2);
  if ( VFByVFId )
  {
    *a3 = *((_WORD *)VFByVFId + 863);
    *a4 = *((_BYTE *)VFByVFId + 1725);
    *a5 = *((_BYTE *)VFByVFId + 1724);
  }
  else
  {
    v9 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qD(0x6Au, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, a1, v9);
}
