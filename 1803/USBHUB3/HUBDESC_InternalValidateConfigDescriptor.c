/*
 * XREFs of HUBDESC_InternalValidateConfigDescriptor @ 0x1C002E030
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0030954 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0022DEC (WPP_RECORDER_SF_DDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002DC08 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateConfigDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  unsigned int *v6; // r15
  __int64 v9; // r14
  char v10; // bp
  bool v11; // cc
  __int64 v12; // r8
  int v13; // r10d
  __int64 v14; // r11
  unsigned int v15; // r8d
  unsigned int v16; // r15d
  int v17; // r8d
  unsigned int v18; // r9d
  __int64 v19; // r8
  unsigned __int16 v20; // r9
  __int64 v22; // r8
  unsigned __int16 v23; // r10
  __int64 v26; // [rsp+28h] [rbp-40h]
  __int64 v27; // [rsp+30h] [rbp-38h]
  __int64 v28; // [rsp+38h] [rbp-30h]
  int v29; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  v6 = a3;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v29 = 0;
    v5 = &v29;
  }
  v9 = a5;
  *a3 = 9;
  LOBYTE(a3) = *a1;
  v10 = 1;
  v11 = *a1 <= 9u;
  if ( *a1 < 9u )
  {
    *v5 = 1;
    WPP_RECORDER_SF_DDD(
      v9,
      2u,
      (__int64)a3,
      0x11u,
      (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
      *a1,
      9,
      9);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 55LL);
    LOBYTE(a3) = *a1;
    v11 = *a1 <= 9u;
  }
  if ( !v11 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
    {
      *v5 = 2;
      LOBYTE(v12) = *a1;
    }
    LODWORD(v28) = v13;
    LODWORD(v27) = v13;
    LODWORD(v26) = (unsigned __int8)v12;
    WPP_RECORDER_SF_DDD(v9, 2u, v12, 0x12u, v14, v26, v27, v28);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 54LL);
  }
  if ( a1[1] != 2 )
  {
    *v5 = 1;
    LODWORD(v28) = 2;
    LODWORD(v27) = 2;
    LODWORD(v26) = a1[1];
    WPP_RECORDER_SF_DDD(
      v9,
      2u,
      (__int64)a3,
      0x13u,
      (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
      v26,
      v27,
      v28);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 58LL);
  }
  v15 = *(_DWORD *)(a2 + 72);
  if ( *v6 <= v15 )
  {
    v16 = 9 * (a1[4] + 1);
    if ( v16 > v15 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      {
        *v5 = 2;
        v17 = *(_DWORD *)(a2 + 72);
      }
      LODWORD(v27) = v16;
      LODWORD(v26) = v17;
      WPP_RECORDER_SF_dD(v9, 2u, 5u, 0x15u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v26, v27);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 57LL);
      v15 = *(_DWORD *)(a2 + 72);
    }
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *((unsigned __int16 *)a1 + 1);
    v18 = *((unsigned __int16 *)a1 + 1);
    if ( v18 > v15 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) != 0 )
      {
        *v5 = 2;
        v19 = *(unsigned int *)(a2 + 72);
        v20 = *((_WORD *)a1 + 1);
      }
      LODWORD(v28) = v19;
      LODWORD(v27) = v19;
      LODWORD(v26) = v20;
      WPP_RECORDER_SF_DDD(v9, 2u, v19, 0x16u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v26, v27, v28);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 61LL);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
      LOWORD(v18) = *((_WORD *)a1 + 1);
    }
    if ( (unsigned __int16)v18 < v16 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) != 0 )
      {
        *v5 = 2;
        v22 = *(unsigned int *)(a2 + 72);
        v23 = *((_WORD *)a1 + 1);
      }
      LODWORD(v28) = v22;
      LODWORD(v27) = v16;
      LODWORD(v26) = v23;
      WPP_RECORDER_SF_DDD(v9, 2u, v22, 0x17u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v26, v27, v28);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 62LL);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    }
  }
  else
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    WPP_RECORDER_SF_(v9, 2u, 5u, 0x14u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 56LL);
  }
  if ( *v5 )
  {
    v10 = 0;
    WPP_RECORDER_SF_(v9, 2u, 5u, 0x18u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
  }
  return v10;
}
