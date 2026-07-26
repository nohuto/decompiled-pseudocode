/*
 * XREFs of NdisMQueryProbedBars @ 0x1C00EEF60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall NdisMQueryProbedBars(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rcx
  unsigned int v6; // edi

  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_q(0x79u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, a1);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 4840);
  if ( v4 && (v5 = *(_QWORD *)(a1 + 4848)) != 0 )
    v6 = v4(v5, a2);
  else
    v6 = -1073741637;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qD(0x7Au, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, a1, v6);
  return v6;
}
