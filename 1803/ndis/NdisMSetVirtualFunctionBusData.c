/*
 * XREFs of NdisMSetVirtualFunctionBusData @ 0x1C006BC20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall NdisMSetVirtualFunctionBusData(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, _QWORD, int); // r10
  __int64 v11; // rcx

  v9 = 0;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_q(0x71u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, a1);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 4808);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 4848);
    if ( v11 )
      v9 = v10(v11, a2, a3, a4, a5);
  }
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qD(0x72u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, a1, v9);
  return v9;
}
