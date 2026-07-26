/*
 * XREFs of ndisMInvokeSynchronousOidRequest @ 0x1C005FE98
 * Callers:
 *     ndisSynchronousOidRequest @ 0x1C00477E8 (ndisSynchronousOidRequest_ea_1C00477E8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qLq @ 0x1C004ED08 (WPP_SF_qLq.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 */

__int64 __fastcall ndisMInvokeSynchronousOidRequest(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rsi
  int v5; // eax
  unsigned int v6; // esi

  v2 = *(_QWORD *)(BugCheckParameter2 + 3784);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qLq(
      0xF8u,
      &WPP_89f39f5878d93d725c4978a535989123_Traceguids,
      BugCheckParameter2,
      *(_DWORD *)(BugCheckParameter3 + 32));
  v5 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(v2 + 264))(
         *(_QWORD *)(BugCheckParameter2 + 24),
         BugCheckParameter3);
  v6 = v5;
  if ( ((v5 - 255) & 0xFFFFFFFB) == 0 )
    ndisBugCheckEx(0x26uLL, BugCheckParameter2, BugCheckParameter3, 0x103uLL);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0xF9u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, BugCheckParameter2, v5);
  return v6;
}
