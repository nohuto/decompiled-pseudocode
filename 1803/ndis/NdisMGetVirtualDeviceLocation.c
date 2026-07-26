/*
 * XREFs of NdisMGetVirtualDeviceLocation @ 0x1C00F1A20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall NdisMGetVirtualDeviceLocation(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  void (__fastcall *v10)(__int64, _QWORD, __int64, __int64, __int64); // rax
  __int64 v11; // rcx

  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_q(0x75u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, a1);
  v10 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(a1 + 4832);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 4848);
    if ( v11 )
      v10(v11, a2, a3, a4, a6);
  }
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_q(0x76u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, a1);
}
