/*
 * XREFs of ndisMInvokeSynchronousOidRequest @ 0x1C00608D4
 * Callers:
 *     ndisSynchronousOidRequest @ 0x1C0048A94 (ndisSynchronousOidRequest_ea_1C0048A94.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qLq @ 0x1C0043C94 (WPP_SF_qLq.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 */

__int64 __fastcall ndisMInvokeSynchronousOidRequest(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rsi
  int v5; // eax
  unsigned int v6; // esi

  v2 = *(_QWORD *)(BugCheckParameter2 + 3784);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qLq(
      0xFBu,
      &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids,
      BugCheckParameter2,
      *(_DWORD *)(BugCheckParameter3 + 32));
  v5 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(v2 + 264))(
         *(_QWORD *)(BugCheckParameter2 + 24),
         BugCheckParameter3);
  v6 = v5;
  if ( ((v5 - 255) & 0xFFFFFFFB) == 0 )
    ndisBugCheckEx(0x26uLL, BugCheckParameter2, BugCheckParameter3, 0x103uLL);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qD(0xFCu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, BugCheckParameter2, v5);
  return v6;
}
