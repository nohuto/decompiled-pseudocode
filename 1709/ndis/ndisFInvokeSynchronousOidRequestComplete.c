/*
 * XREFs of ndisFInvokeSynchronousOidRequestComplete @ 0x1C00596D0
 * Callers:
 *     ndisSynchronousOidRequest @ 0x1C00477E8 (ndisSynchronousOidRequest_ea_1C00477E8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     WPP_SF_qDqd @ 0x1C0058EB4 (WPP_SF_qDqd.c)
 */

void __fastcall ndisFInvokeSynchronousOidRequestComplete(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int *a3,
        __int64 a4)
{
  __int64 v4; // r14
  ULONG_PTR v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v10 = *a3;
    v9 = BugCheckParameter3;
    WPP_SF_qDqd(BugCheckParameter2, BugCheckParameter3, BugCheckParameter2, *(_DWORD *)(BugCheckParameter3 + 32));
  }
  (*(void (__fastcall **)(_QWORD, ULONG_PTR, int *, __int64, ULONG_PTR, int))(v4 + 328))(
    *(_QWORD *)(BugCheckParameter2 + 24),
    BugCheckParameter3,
    a3,
    a4,
    v9,
    v10);
  if ( *a3 == 259 )
    ndisBugCheckEx(0x26uLL, BugCheckParameter2, BugCheckParameter3, 0x103uLL);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x8Du, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, BugCheckParameter2, *a3);
}
