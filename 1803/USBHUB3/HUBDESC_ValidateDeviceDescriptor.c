/*
 * XREFs of HUBDESC_ValidateDeviceDescriptor @ 0x1C00336C8
 * Callers:
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0025174 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C00253B0 (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002DC30 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateDeviceDescriptor(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5)
{
  int v5; // r12d
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  unsigned __int16 v12; // cx
  int v13; // edx
  unsigned __int16 v14; // cx
  char v15; // r13
  int v16; // eax
  unsigned __int8 v17; // al
  bool v18; // al
  __int64 v19; // rcx
  unsigned __int16 v20; // r9
  __int64 v21; // rcx
  unsigned __int8 v22; // al
  bool ShouldEnforceWin8ValidationMutable; // al
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  __int64 v27; // [rsp+28h] [rbp-30h]

  v5 = 0;
  if ( !a1 )
  {
    v9 = a5;
    WPP_RECORDER_SF_(a5, 2u, 5u, 0xF0u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    v10 = 79LL;
LABEL_3:
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), v10);
LABEL_50:
    v15 = 0;
    WPP_RECORDER_SF_(v9, 2u, 5u, 0xFDu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    return v15;
  }
  if ( a2 < 2 )
  {
    v9 = a5;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF1u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, a2);
LABEL_6:
    v10 = 71LL;
    goto LABEL_3;
  }
  v9 = a5;
  if ( *a1 < 0x12u )
  {
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF2u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, *a1);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 70LL);
    v5 = 2;
  }
  v11 = a1[1];
  if ( v11 != 1 )
  {
    LODWORD(v27) = v11;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF3u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v27);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 77LL);
    v5 = 2;
  }
  if ( a2 < 8 )
  {
    LODWORD(v27) = a2;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF4u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v27);
    goto LABEL_6;
  }
  v12 = *((_WORD *)a1 + 6);
  if ( (v12 & 0xF000u) > 0x9000
    || (v12 & 0xF00u) > 0x900
    || (v13 = 144, (*((_WORD *)a1 + 6) & 0xF0u) > 0x90)
    || (v12 & 0xFu) > 9 )
  {
    LODWORD(v27) = v12;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF5u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v27);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 32))(*(_QWORD *)(a3 + 40), 69LL);
  }
  if ( a1[4] != 17 || a1[5] || a1[6] )
    goto LABEL_25;
  v14 = *((_WORD *)a1 + 1);
  v13 = 254;
  if ( (unsigned __int16)(v14 - 513) > 0xFEu )
  {
    LODWORD(v27) = v14;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF6u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v27);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 246LL);
    v5 = 2;
LABEL_25:
    v15 = 1;
    goto LABEL_26;
  }
  v15 = 1;
  if ( a4 )
    *a4 = 1;
LABEL_26:
  v16 = *(_DWORD *)(a3 + 4);
  if ( v16 )
  {
    switch ( v16 )
    {
      case 1:
        LOBYTE(v13) = a1[7];
        if ( (unsigned __int8)(v13 - 8) > 0x38u
          || (v21 = 0x100000001000101LL, !_bittest64(&v21, (unsigned int)(v13 - 8))) )
        {
          v20 = 249;
          goto LABEL_44;
        }
        break;
      case 2:
        v22 = a1[7];
        if ( v22 != 64 )
        {
          LODWORD(v27) = v22;
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFAu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v27);
          (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
          ShouldEnforceWin8ValidationMutable = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
          LOBYTE(v13) = a1[7];
          if ( ShouldEnforceWin8ValidationMutable )
            v5 = 2;
          if ( (unsigned __int8)(v13 - 8) > 0x38u
            || (v24 = 0x100000001000101LL, !_bittest64(&v24, (unsigned int)(v13 - 8))) )
          {
            v20 = 251;
            goto LABEL_44;
          }
        }
        break;
      case 3:
        v25 = a1[7];
        if ( v25 != 9 )
        {
          LODWORD(v27) = v25;
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFCu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v27);
          (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
            v5 = 2;
        }
        break;
    }
  }
  else
  {
    v17 = a1[7];
    if ( v17 != 8 )
    {
      LODWORD(v27) = v17;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF7u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v27);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
      v18 = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
      LOBYTE(v13) = a1[7];
      if ( v18 )
        v5 = 2;
      if ( (unsigned __int8)(v13 - 8) > 0x38u || (v19 = 0x100000001000101LL, !_bittest64(&v19, (unsigned int)(v13 - 8))) )
      {
        v20 = 248;
LABEL_44:
        LODWORD(v27) = (unsigned __int8)v13;
        WPP_RECORDER_SF_d(a5, 2u, 5u, v20, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v27);
        (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
        v5 = 2;
      }
    }
  }
  if ( v5 )
    goto LABEL_50;
  return v15;
}
