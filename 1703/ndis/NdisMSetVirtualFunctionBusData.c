/*
 * XREFs of NdisMSetVirtualFunctionBusData @ 0x1C0069FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall NdisMSetVirtualFunctionBusData(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, _QWORD, int); // r10
  __int64 v11; // rcx

  v9 = 0;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_q(0x71u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, a1);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 4808);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 4848);
    if ( v11 )
      v9 = v10(v11, a2, a3, a4, a5);
  }
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_qD(0x72u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, a1, v9);
  return v9;
}
