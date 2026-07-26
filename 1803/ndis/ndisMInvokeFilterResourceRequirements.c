/*
 * XREFs of ndisMInvokeFilterResourceRequirements @ 0x1C00C6C8C
 * Callers:
 *     ndisPnPIrpFilterResourceRequirements @ 0x1C00C6C04 (ndisPnPIrpFilterResourceRequirements.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokeFilterResourceRequirements(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  int v6; // eax

  v2 = *(_QWORD *)(a1 + 3784);
  v3 = 0;
  if ( *(_QWORD *)(v2 + 800) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    {
      WPP_SF_q(0xD2u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
      v2 = *(_QWORD *)(a1 + 3784);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 800))(*(_QWORD *)(a1 + 4136), a2);
    v3 = v6;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xD3u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, v6);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0xD4u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  }
  return v3;
}
