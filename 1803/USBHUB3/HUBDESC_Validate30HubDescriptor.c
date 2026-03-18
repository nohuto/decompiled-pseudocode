/*
 * XREFs of HUBDESC_Validate30HubDescriptor @ 0x1C0033CA4
 * Callers:
 *     HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C0008770 (HUBHSM_ValidatingAndParsingHubDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002DC30 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_Validate30HubDescriptor(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned __int8 v8; // al
  bool v9; // cc
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  unsigned __int16 v12; // bx
  unsigned __int8 v13; // al
  unsigned __int16 v14; // r8
  char v15; // bl
  __int64 v17; // [rsp+28h] [rbp-30h]

  v4 = 0;
  if ( !a1 )
  {
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x113u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
LABEL_34:
    v15 = 0;
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x11Fu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    return v15;
  }
  v8 = *a1;
  v9 = (unsigned __int8)*a1 <= 0xCu;
  if ( (unsigned __int8)*a1 < 0xCu )
  {
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x115u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v8);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 12LL);
    v8 = *a1;
    v4 = 2;
    v9 = (unsigned __int8)*a1 <= 0xCu;
  }
  if ( !v9 )
  {
    LODWORD(v17) = v8;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x116u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 11LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
  }
  v10 = a1[1];
  if ( v10 != 42 )
  {
    LODWORD(v17) = v10;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x117u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 16LL);
    v4 = 2;
  }
  v11 = a1[2];
  if ( v11 > 0xFu )
  {
    LODWORD(v17) = v11;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x118u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 17LL);
    v11 = a1[2];
    v4 = 2;
  }
  if ( !v11 )
  {
    LODWORD(v17) = 0;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x119u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 18LL);
    v4 = 2;
  }
  v12 = *(_WORD *)(a1 + 3);
  if ( (v12 & 2) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    LODWORD(v17) = v12;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x11Au, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 19LL);
  }
  if ( v12 >= 0x20u )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    LODWORD(v17) = v12;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x11Bu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 19LL);
  }
  v13 = a1[7];
  if ( v13 >= 0xBu )
  {
    LODWORD(v17) = v13;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x11Cu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 10LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
  }
  v14 = *((_WORD *)a1 + 5);
  v15 = 1;
  if ( (v14 & 1) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x11Du, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 15LL);
    v14 = *((_WORD *)a1 + 5);
  }
  if ( ((unsigned __int16)(-1 << (a1[2] + 1)) & v14) != 0 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x11Eu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 14LL);
  }
  if ( v4 )
    goto LABEL_34;
  return v15;
}
