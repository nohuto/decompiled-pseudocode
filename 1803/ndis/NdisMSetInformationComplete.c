/*
 * XREFs of NdisMSetInformationComplete @ 0x1C0043940
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisCompleteLegacyRequest @ 0x1C0044638 (ndisCompleteLegacyRequest.c)
 */

void __fastcall NdisMSetInformationComplete(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qD(0x49u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, BugCheckParameter2, a2);
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
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0x4Au, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, BugCheckParameter2);
}
