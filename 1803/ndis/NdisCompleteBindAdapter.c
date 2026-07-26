/*
 * XREFs of NdisCompleteBindAdapter @ 0x1C00E4A90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall NdisCompleteBindAdapter(__int64 a1, int a2)
{
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x29u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, a1);
  *(_DWORD *)(a1 + 88) = a2;
  KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x2Au, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, a1);
}
