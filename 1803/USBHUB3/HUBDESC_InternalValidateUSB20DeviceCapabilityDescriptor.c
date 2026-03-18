/*
 * XREFs of HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C0032544
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0032910 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0022DEC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002D770 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002DC08 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        int *a5,
        __int64 a6)
{
  int *v6; // rsi
  int v10; // r14d
  __int64 v11; // r15
  unsigned int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // bl
  int v17; // eax
  int v18; // r8d
  int *v19; // r14
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // r8d
  unsigned int v24; // edx
  unsigned int v25; // r8d
  int v26; // r8d
  int v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  int v31; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v32; // [rsp+A0h] [rbp+18h]

  v32 = a3;
  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v31 = 0;
    v6 = &v31;
  }
  v10 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v11 = a6;
  v12 = *(_DWORD *)(a2 + 72) - v10;
  if ( *a1 < 7u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 146LL);
    if ( v12 < 7 )
    {
      v16 = 1;
      *v6 = 1;
      WPP_RECORDER_SF_DDD(v11, 2u, v14, 0xC6u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v10, *a1, 7);
      goto LABEL_46;
    }
    *v6 = 2;
    *a3 = 7;
    WPP_RECORDER_SF_DDDD(v11, v13, v14, 0xC5u, v28);
  }
  if ( *a1 > 7u )
  {
    if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 513) <= 0xEu )
      *v6 = 2;
    WPP_RECORDER_SF_DDD(
      v11,
      2u,
      (__int64)a3,
      0xC7u,
      (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
      v10,
      *a1,
      7);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 145LL);
  }
  if ( *v32 > v12 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      *v6 = 2;
    LODWORD(v29) = v10;
    WPP_RECORDER_SF_d(v11, 2u, 5u, 0xC8u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v29);
    v15 = 148LL;
LABEL_44:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v15);
    goto LABEL_45;
  }
  v17 = *(_DWORD *)(a1 + 3);
  if ( (v17 & 0xFFFF00E1) != 0 )
  {
    if ( *(_BYTE *)(a2 + 15) )
    {
      *v6 = 2;
      v17 = *(_DWORD *)(a1 + 3);
    }
    LODWORD(v29) = v17;
    WPP_RECORDER_SF_d(v11, 2u, 5u, 0xC9u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v29);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 147LL);
  }
  v18 = *(_DWORD *)(a1 + 3);
  if ( (v18 & 2) != 0 )
  {
    v19 = a5;
    *a5 |= 1u;
    v20 = *v19 ^ (*v19 ^ (*(_DWORD *)(a1 + 3) >> 1)) & 2;
    *v19 = v20;
    v21 = *(_DWORD *)(a1 + 3);
    if ( (v21 & 8) != 0 )
    {
      if ( (v21 & 0xF00) != 0 )
      {
        v22 = v20 | 4;
        *v19 = v22;
        *v19 = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(*(_DWORD *)(a1 + 3) >> 4)) & 0xF0;
      }
      else
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
          *v6 = 2;
        WPP_RECORDER_SF_(v11, 2u, 5u, 0xCAu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 149LL);
      }
    }
    v23 = *(_DWORD *)(a1 + 3);
    if ( (v23 & 0x10) == 0 )
      goto LABEL_45;
    v24 = v23 >> 12;
    if ( (v23 & 8) != 0 && (unsigned __int8)(v24 & 0xF) <= (unsigned __int8)(BYTE1(v23) & 0xF) )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      {
        *v6 = 2;
        v25 = *(_DWORD *)(a1 + 3);
      }
      LODWORD(v30) = (v25 >> 8) & 0xF;
      LODWORD(v29) = (unsigned __int16)v25 >> 12;
      WPP_RECORDER_SF_dD(v11, 2u, 5u, 0xCBu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v29, v30);
      v15 = 151LL;
      goto LABEL_44;
    }
    if ( (v24 & 0xF) == 0 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
        *v6 = 2;
      WPP_RECORDER_SF_(v11, 2u, 5u, 0xCCu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
      v15 = 152LL;
      goto LABEL_44;
    }
    *v19 |= 8u;
    *v19 ^= ((unsigned __int16)*v19 ^ (unsigned __int16)(*(_DWORD *)(a1 + 3) >> 4)) & 0xF00;
  }
  else if ( (v18 & 4) != 0 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
    {
      *v6 = 2;
      v26 = *(_DWORD *)(a1 + 3);
    }
    LODWORD(v29) = v26;
    WPP_RECORDER_SF_d(v11, 2u, 5u, 0xCDu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v29);
    v15 = 150LL;
    goto LABEL_44;
  }
LABEL_45:
  v16 = 1;
LABEL_46:
  if ( *v6 )
  {
    v16 = 0;
    WPP_RECORDER_SF_(v11, 2u, 5u, 0xCEu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
  }
  return v16;
}
