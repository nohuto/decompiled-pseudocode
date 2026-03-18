/*
 * XREFs of HUBDESC_ValidateMsOs20MimimumRecoveryTime @ 0x1C0034DB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20MimimumRecoveryTime(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  char v6; // si
  unsigned __int8 v8; // al
  unsigned __int8 v9; // cl
  __int64 v10; // [rsp+28h] [rbp-20h]

  v6 = 1;
  if ( *(char *)a2 < 0 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x14Bu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 175LL);
    v6 = 0;
  }
  if ( *a3 == 6 )
  {
    v8 = *((_BYTE *)a3 + 4);
    if ( v8 > 0xAu )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x14Du,
        (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
        v8);
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 177LL);
      v6 = 0;
    }
    v9 = *((_BYTE *)a3 + 5);
    if ( (unsigned __int8)(v9 - 1) > 0x13u )
    {
      LODWORD(v10) = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x14Eu,
        (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
        v10);
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 32))(*(_QWORD *)(a1 + 40), 178LL);
    }
    if ( v6 == 1 )
    {
      *(_DWORD *)a2 |= 0x80u;
      *(_QWORD *)(a2 + 40) = a3;
      return v6;
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 96),
      2u,
      5u,
      0x14Cu,
      (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
      *a3);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 176LL);
    v6 = 0;
  }
  WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x14Fu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
  return v6;
}
