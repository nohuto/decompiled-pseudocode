/*
 * XREFs of NdisMSetInformationComplete @ 0x1C00458A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisCompleteLegacyRequest @ 0x1C004634C (ndisCompleteLegacyRequest.c)
 */

void __fastcall NdisMSetInformationComplete(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qD(0x49u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, BugCheckParameter2, a2);
  if ( *(_BYTE *)(BugCheckParameter2 + 32) >= 6u )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *(_QWORD *)(BugCheckParameter2 + 3880),
      "NDIS 6 Miniport calling NDIS 5 API");
    KeBugCheckEx(0x7Cu, 0x15uLL, BugCheckParameter2, 0LL, 0LL);
  }
  ndisCompleteLegacyRequest(BugCheckParameter2, a2, 0LL);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(0x4Au, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, BugCheckParameter2);
}
