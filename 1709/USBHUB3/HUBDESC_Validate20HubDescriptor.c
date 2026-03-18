/*
 * XREFs of HUBDESC_Validate20HubDescriptor @ 0x1C0032DF0
 * Callers:
 *     HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C00087C0 (HUBHSM_ValidatingAndParsingHubDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002CC90 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002CCB8 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_Validate20HubDescriptor(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v8; // eax
  unsigned int v9; // eax
  bool v10; // zf
  unsigned __int8 v11; // al
  unsigned __int16 v12; // bx
  unsigned int v13; // r8d
  unsigned __int8 v14; // dl
  unsigned int i; // ebx
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  char v19; // [rsp+40h] [rbp-48h]
  unsigned int v20; // [rsp+44h] [rbp-44h]
  unsigned int v21; // [rsp+90h] [rbp+8h]
  unsigned int v22; // [rsp+98h] [rbp+10h]

  v4 = 0;
  if ( !a1 )
  {
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x120u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 2LL);
LABEL_38:
    v19 = 0;
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x12Bu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
    return v19;
  }
  if ( !a1[2] )
  {
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x122u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, 0);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 7LL);
    v4 = 2;
  }
  v8 = a1[2];
  v19 = 1;
  v22 = (unsigned int)(v8 + 8) >> 3;
  v21 = (unsigned int)(v8 + 7) >> 3;
  v9 = v22 + 7 + v21;
  v20 = v9;
  if ( *a1 < v9 )
  {
    LODWORD(v17) = *a1;
    WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x123u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v17, v9);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 1LL);
    v10 = !HUBDESC_ShouldEnforceWin8ValidationImmutable(a3);
    v9 = v20;
    if ( !v10 )
      v4 = 2;
  }
  if ( *a1 > v9 )
  {
    LODWORD(v18) = v9;
    LODWORD(v17) = *a1;
    WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x124u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v17, v18);
    (*(void (__fastcall **)(_QWORD, _QWORD))(a3 + 24))(*(_QWORD *)(a3 + 40), 0LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
  }
  v11 = a1[1];
  if ( v11 != 41 )
  {
    LODWORD(v17) = v11;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x125u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 6LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a3) )
      v4 = 2;
  }
  v12 = *(_WORD *)(a1 + 3);
  if ( (v12 & 2) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    LODWORD(v17) = v12;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x126u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 9LL);
  }
  if ( (v12 & 0xFF00) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    LODWORD(v17) = v12;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x127u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 9LL);
  }
  if ( (a1[7] & 1) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x128u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 5LL);
  }
  v13 = v22;
  v14 = -1 << ((a1[2] + 1) & 7);
  if ( v14 != 0xFF && (v14 & a1[v22 + 6]) != 0 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x129u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 4LL);
    v13 = v22;
  }
  for ( i = 0; i < v21; ++i )
  {
    if ( a1[i + 7 + v13] != 0xFF )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
        v4 = 2;
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x12Au, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 8LL);
      v13 = v22;
    }
  }
  if ( v4 )
    goto LABEL_38;
  return v19;
}
