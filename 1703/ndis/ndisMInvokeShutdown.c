/*
 * XREFs of ndisMInvokeShutdown @ 0x1C005FE84
 * Callers:
 *     ndisBugcheckHandler @ 0x1C00617F0 (ndisBugcheckHandler.c)
 *     ndisMShutdownMiniport @ 0x1C0104D5C (ndisMShutdownMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

void __fastcall ndisMInvokeShutdown(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 3784);
  if ( a2 != 1 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xE2u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 232))(*(_QWORD *)(a1 + 24), a2);
  if ( a2 != 1 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xE3u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, a2);
}
