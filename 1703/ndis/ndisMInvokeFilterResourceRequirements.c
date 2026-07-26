/*
 * XREFs of ndisMInvokeFilterResourceRequirements @ 0x1C00BDD60
 * Callers:
 *     ndisPnPIrpFilterResourceRequirements @ 0x1C00BDCD8 (ndisPnPIrpFilterResourceRequirements.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokeFilterResourceRequirements(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // eax

  v2 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 800LL) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0xC2u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 3784) + 800LL))(*(_QWORD *)(a1 + 4136), a2);
    v2 = v5;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xC3u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, v5);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0xC4u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
  }
  return v2;
}
