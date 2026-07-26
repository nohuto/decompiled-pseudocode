/*
 * XREFs of NdisMQueryInformationComplete @ 0x1C0042820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisCompleteLegacyRequest @ 0x1C004354C (ndisCompleteLegacyRequest.c)
 */

void __fastcall NdisMQueryInformationComplete(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x47u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, BugCheckParameter2, a2);
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
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x48u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, BugCheckParameter2);
}
