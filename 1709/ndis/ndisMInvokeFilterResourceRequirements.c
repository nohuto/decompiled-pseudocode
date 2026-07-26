/*
 * XREFs of ndisMInvokeFilterResourceRequirements @ 0x1C00C1530
 * Callers:
 *     ndisPnPIrpFilterResourceRequirements @ 0x1C00C14A8 (ndisPnPIrpFilterResourceRequirements.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokeFilterResourceRequirements(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // eax

  v2 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 800LL) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0xCFu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 3784) + 800LL))(*(_QWORD *)(a1 + 4136), a2);
    v2 = v5;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xD0u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v5);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0xD1u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  }
  return v2;
}
