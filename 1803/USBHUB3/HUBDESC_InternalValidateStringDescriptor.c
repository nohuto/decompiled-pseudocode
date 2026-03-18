/*
 * XREFs of HUBDESC_InternalValidateStringDescriptor @ 0x1C0033480
 * Callers:
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C001CAE0 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C001CC60 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C0025598 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C0025CAC (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0025E70 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C002D878 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateStringDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v7; // ebx
  __int64 v9; // rsi
  unsigned int v10; // eax
  int v11; // ecx
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  char v14; // r13
  int v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+28h] [rbp-40h]
  int v18; // [rsp+28h] [rbp-40h]
  unsigned int v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+30h] [rbp-38h]
  int v22; // [rsp+78h] [rbp+10h]

  v7 = a2;
  if ( (unsigned int)a2 < 2 )
  {
    *a3 = 0;
    v9 = a5;
    v18 = a2;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xE9u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v18);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 131LL);
LABEL_15:
    v14 = 0;
    WPP_RECORDER_SF_(v9, 2u, 5u, 0xEFu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    return v14;
  }
  v10 = *a1;
  v9 = a5;
  *a3 = v10;
  if ( v10 <= (unsigned int)a2 )
  {
    v11 = 0;
  }
  else
  {
    *a3 = a2;
    WPP_RECORDER_SF_ddd(a5, a2, (__int64)a3, 0xEAu, v16);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 129LL);
    LOBYTE(v10) = *a1;
    v11 = 2;
  }
  v22 = v11;
  if ( (unsigned __int8)v10 <= 2u )
  {
    *a3 = v7;
    v19 = v7;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xEBu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v19);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 130LL);
    v11 = 2;
    v22 = 2;
  }
  v12 = a1[1];
  if ( v12 != 3 )
  {
    v21 = 3;
    LODWORD(v17) = v12;
    WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xECu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v17, v21);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 133LL);
    v11 = 2;
    v22 = 2;
  }
  v13 = *a1;
  v14 = 1;
  if ( (*a1 & 1) != 0 )
  {
    *a3 &= ~1u;
    LODWORD(v20) = *a3;
    LODWORD(v17) = v13;
    WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xEDu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v17, v20);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 128LL);
    v13 = *a1;
    v11 = 2;
    v22 = 2;
  }
  if ( v13 != v7 )
  {
    LODWORD(v20) = v7;
    LODWORD(v17) = v13;
    WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xEEu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v17, v20);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 134LL);
    v11 = v22;
  }
  if ( v11 )
    goto LABEL_15;
  return v14;
}
