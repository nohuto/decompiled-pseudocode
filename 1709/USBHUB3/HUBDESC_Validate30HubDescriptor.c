/*
 * XREFs of HUBDESC_Validate30HubDescriptor @ 0x1C0032AC0
 * Callers:
 *     HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C00087C0 (HUBHSM_ValidatingAndParsingHubDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002CCB8 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_Validate30HubDescriptor(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  unsigned __int16 v10; // bx
  unsigned __int8 v11; // al
  char v12; // bl
  __int64 v14; // [rsp+28h] [rbp-30h]

  v4 = 0;
  if ( !a1 )
  {
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x113u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
LABEL_34:
    v12 = 0;
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x11Fu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
    return v12;
  }
  if ( *a1 < 0xCu )
  {
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x115u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, *a1);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 12LL);
    v4 = 2;
  }
  if ( *a1 > 0xCu )
  {
    LODWORD(v14) = *a1;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x116u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v14);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 11LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
  }
  v8 = a1[1];
  if ( v8 != 42 )
  {
    LODWORD(v14) = v8;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x117u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v14);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 16LL);
    v4 = 2;
  }
  v9 = a1[2];
  if ( v9 > 0xFu )
  {
    LODWORD(v14) = v9;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x118u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v14);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 17LL);
    v4 = 2;
  }
  if ( !a1[2] )
  {
    LODWORD(v14) = 0;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x119u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v14);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 18LL);
    v4 = 2;
  }
  v10 = *(_WORD *)(a1 + 3);
  if ( (v10 & 2) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    LODWORD(v14) = v10;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x11Au, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v14);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 19LL);
  }
  if ( v10 >= 0x20u )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    LODWORD(v14) = v10;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x11Bu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v14);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 19LL);
  }
  v11 = a1[7];
  if ( v11 >= 0xBu )
  {
    LODWORD(v14) = v11;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x11Cu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v14);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 10LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
  }
  v12 = 1;
  if ( (a1[10] & 1) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x11Du, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 15LL);
  }
  if ( ((unsigned __int16)(-1 << (a1[2] + 1)) & *((_WORD *)a1 + 5)) != 0 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x11Eu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 14LL);
  }
  if ( v4 )
    goto LABEL_34;
  return v12;
}
