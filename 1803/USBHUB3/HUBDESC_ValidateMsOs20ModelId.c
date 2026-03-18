/*
 * XREFs of HUBDESC_ValidateMsOs20ModelId @ 0x1C0034F20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20ModelId(__int64 a1, int *a2, unsigned __int16 *a3)
{
  int v5; // edx
  char v6; // r9
  __int64 v7; // rdx

  v5 = *a2;
  v6 = 1;
  if ( (v5 & 0x100) != 0 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), 2u, 5u, 0x150u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    v7 = 181LL;
  }
  else if ( *a3 == 20 )
  {
    if ( *(_QWORD *)(a3 + 2) != *(_QWORD *)&GUID_NULL.Data1 || *(_QWORD *)(a3 + 6) != *(_QWORD *)GUID_NULL.Data4 )
    {
      *((_QWORD *)a2 + 6) = a3;
      *a2 = v5 | 0x100;
      return v6;
    }
    WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), 2u, 5u, 0x152u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    v7 = 183LL;
  }
  else
  {
    WPP_RECORDER_SF_d(
      *((_QWORD *)a2 + 12),
      2u,
      5u,
      0x151u,
      (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
      *a3);
    v7 = 182LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v7);
  WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), 2u, 5u, 0x153u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
  return 0;
}
