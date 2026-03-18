/*
 * XREFs of HUBDESC_ValidateMsOs20VendorRevision @ 0x1C0035120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20VendorRevision(__int64 a1, int *a2, unsigned __int16 *a3)
{
  char v5; // dl
  int v6; // eax
  __int64 v7; // rdx

  v5 = 1;
  v6 = *a2;
  if ( (*a2 & 0x400) != 0 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), 2u, 5u, 0x157u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    v7 = 258LL;
  }
  else if ( *a3 == 6 )
  {
    if ( a3[2] )
    {
      *((_QWORD *)a2 + 8) = a3;
      *a2 = v6 | 0x400;
      return v5;
    }
    WPP_RECORDER_SF_d(
      *((_QWORD *)a2 + 12),
      2u,
      5u,
      0x159u,
      (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
      0);
    v7 = 260LL;
  }
  else
  {
    WPP_RECORDER_SF_d(
      *((_QWORD *)a2 + 12),
      2u,
      5u,
      0x158u,
      (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
      *a3);
    v7 = 259LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v7);
  WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), 2u, 5u, 0x15Au, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
  return 0;
}
