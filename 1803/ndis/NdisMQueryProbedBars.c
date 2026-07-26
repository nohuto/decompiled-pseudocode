/*
 * XREFs of NdisMQueryProbedBars @ 0x1C00F1B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall NdisMQueryProbedBars(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rcx
  unsigned int v6; // edi

  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_q(0x79u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, a1);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 4840);
  if ( v4 && (v5 = *(_QWORD *)(a1 + 4848)) != 0 )
    v6 = v4(v5, a2);
  else
    v6 = -1073741637;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qD(0x7Au, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, a1, v6);
  return v6;
}
