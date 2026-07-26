/*
 * XREFs of NdisMSetVirtualFunctionBusData @ 0x1C006B3C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall NdisMSetVirtualFunctionBusData(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, _QWORD, int); // r10
  __int64 v11; // rcx

  v9 = 0;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_q(0x71u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, a1);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 4808);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 4848);
    if ( v11 )
      v9 = v10(v11, a2, a3, a4, a5);
  }
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qD(0x72u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, a1, v9);
  return v9;
}
