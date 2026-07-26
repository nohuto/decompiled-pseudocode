/*
 * XREFs of NdisCompleteBindAdapter @ 0x1C00D8F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall NdisCompleteBindAdapter(__int64 a1, int a2)
{
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x2Du, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, a1);
  *(_DWORD *)(a1 + 88) = a2;
  KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x2Eu, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, a1);
}
