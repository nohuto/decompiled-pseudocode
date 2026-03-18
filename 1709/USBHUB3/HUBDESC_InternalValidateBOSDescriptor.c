/*
 * XREFs of HUBDESC_InternalValidateBOSDescriptor @ 0x1C0031BAC
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0023B7C (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0031EC4 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C002C900 (WPP_RECORDER_SF_ddd.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002CCB8 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateBOSDescriptor(unsigned __int8 *a1, __int64 a2, _DWORD *a3, int *a4, __int64 a5)
{
  int *v5; // rsi
  char v9; // r13
  __int64 v10; // r14
  __int64 v11; // rdx
  unsigned __int16 v12; // ax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v16; // [rsp+20h] [rbp-48h]
  int v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-38h]
  int v20; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v20;
    v20 = 0;
  }
  if ( a3 )
    *a3 = 5;
  v9 = 1;
  if ( !a1 )
  {
    *v5 = 1;
    v10 = a5;
    WPP_RECORDER_SF_(a5, 2u, 5u, 0xD8u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
    v11 = 27LL;
LABEL_28:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v11);
    goto LABEL_29;
  }
  v10 = a5;
  if ( *(_DWORD *)(a2 + 72) < 5u )
  {
    *v5 = 1;
    WPP_RECORDER_SF_dD(
      v10,
      2u,
      5u,
      0xD9u,
      (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
      *(_DWORD *)(a2 + 72),
      5);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 23LL);
  }
  if ( a1[1] != 15 )
  {
    *v5 = 2;
    LODWORD(v19) = 15;
    LODWORD(v18) = a1[1];
    WPP_RECORDER_SF_dD(v10, 2u, 5u, 0xDAu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v18, v19);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 24LL);
  }
  if ( *a1 < 5u )
  {
    *v5 = 2;
    WPP_RECORDER_SF_ddd(v10, a2, (__int64)a3, 0xDBu, v16);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 21LL);
  }
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *((unsigned __int16 *)a1 + 1);
  if ( *a1 > 5u )
  {
    WPP_RECORDER_SF_ddd(v10, a2, (__int64)a3, 0xDCu, v16);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 20LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v5 = 2;
    if ( a3 )
      *a3 = *a1;
  }
  v12 = *((_WORD *)a1 + 1);
  if ( v12 < 5u )
  {
    LODWORD(v18) = v12;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0xDDu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v18);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    *v5 = 2;
  }
  if ( *((unsigned __int16 *)a1 + 1) < *a1 + 2 * (unsigned int)a1[4] )
  {
    WPP_RECORDER_SF_ddd(v10, a2, (__int64)a3, 0xDEu, v16);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    *v5 = 2;
  }
  if ( !a1[4] )
  {
    WPP_RECORDER_SF_(v10, 2u, 5u, 0xDFu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v5 = 2;
    WPP_RECORDER_SF_ddd(v10, v13, v14, 0xE0u, v17);
    v11 = 29LL;
    goto LABEL_28;
  }
LABEL_29:
  if ( *v5 )
  {
    v9 = 0;
    WPP_RECORDER_SF_(v10, 2u, 5u, 0xE1u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
  }
  return v9;
}
