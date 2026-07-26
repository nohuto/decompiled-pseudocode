/*
 * XREFs of ndisSriovInterfaceGetDeviceLocation @ 0x1C00E8750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisIovFindVFByVFId @ 0x1C00E60F0 (ndisIovFindVFByVFId.c)
 */

void __fastcall ndisSriovInterfaceGetDeviceLocation(__int64 a1, unsigned __int16 a2, _WORD *a3, _BYTE *a4, _BYTE *a5)
{
  int v9; // ebx
  __int64 *VFByVFId; // rax
  unsigned __int8 v11; // r10

  v9 = 0;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_q(0x69u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, a1);
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
  if ( v11 >= 4u )
    WPP_SF_qD(0x6Au, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, a1, v9);
}
