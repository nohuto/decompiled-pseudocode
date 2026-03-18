/*
 * XREFs of HUBDESC_InternalValidateIADescriptor @ 0x1C00305B8
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0030954 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0022DEC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002D770 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002DC08 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateIADescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  int v9; // r14d
  __int64 v10; // rbp
  unsigned int v11; // r12d
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  char v17; // bl
  __int64 v18; // r8
  unsigned __int8 v19; // r9
  __int64 v20; // r13
  unsigned __int8 v21; // r8
  __int64 v22; // r8
  unsigned __int8 v23; // r9
  __int64 v24; // rdx
  unsigned __int8 v25; // r9
  int v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+90h] [rbp+8h] BYREF
  __int64 v32; // [rsp+98h] [rbp+10h]

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v31 = 0;
    v5 = &v31;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = a5;
  v11 = *(_DWORD *)(a2 + 72) - v9;
  v32 = *(_QWORD *)(a2 + 56);
  v12 = *a1;
  *a3 = v12;
  if ( (unsigned __int8)v12 < 8u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 93LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    if ( v11 < 8 )
    {
      v17 = 1;
      *v5 = 1;
      WPP_RECORDER_SF_DDD(v10, 2u, v14, 0x73u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v9, *a1, 8);
      goto LABEL_43;
    }
    *a3 = 8;
    WPP_RECORDER_SF_DDDD(v10, v13, v14, 0x72u, v27);
  }
  if ( *a1 > 8u )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    WPP_RECORDER_SF_DDD(v10, 2u, v15, 0x74u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v9, *a1, 8);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 92LL);
  }
  if ( *a3 <= v11 )
  {
    if ( 256 - a1[2] < a1[3] )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      {
        *v5 = 2;
        v19 = a1[3];
        LOBYTE(v18) = a1[2];
      }
      LODWORD(v30) = v19;
      LODWORD(v29) = (unsigned __int8)v18;
      LODWORD(v28) = v9;
      WPP_RECORDER_SF_DDD(v10, 2u, v18, 0x76u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v28, v29, v30);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 97LL);
    }
    v20 = v32;
    v21 = *(_BYTE *)(v32 + 4);
    if ( a1[3] > v21 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      {
        *v5 = 2;
        LOBYTE(v22) = *(_BYTE *)(v20 + 4);
        v23 = a1[3];
      }
      LODWORD(v30) = (unsigned __int8)v22;
      LODWORD(v29) = v23;
      LODWORD(v28) = v9;
      WPP_RECORDER_SF_DDD(v10, 2u, v22, 0x77u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v28, v29, v30);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 95LL);
      v21 = *(_BYTE *)(v20 + 4);
    }
    if ( a1[3] + (unsigned int)*(unsigned __int16 *)(a2 + 202) > v21 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      {
        *v5 = 2;
        v25 = a1[3];
      }
      WPP_RECORDER_SF_DDDD(v10, v24, v25, 0x78u, v27);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 95LL);
    }
    if ( a1[3] )
      goto LABEL_42;
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    LODWORD(v28) = v9;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0x79u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v28);
    v16 = 96LL;
  }
  else
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    LODWORD(v28) = v9;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0x75u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v28);
    v16 = 94LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v16);
LABEL_42:
  v17 = 1;
LABEL_43:
  if ( *v5 )
  {
    v17 = 0;
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x7Au, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
  }
  return v17;
}
