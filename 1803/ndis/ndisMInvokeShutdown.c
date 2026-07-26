/*
 * XREFs of ndisMInvokeShutdown @ 0x1C0060844
 * Callers:
 *     ndisBugcheckHandler @ 0x1C0062680 (ndisBugcheckHandler.c)
 *     ndisMShutdownMiniport @ 0x1C010FC5C (ndisMShutdownMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

void __fastcall ndisMInvokeShutdown(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 3784);
  if ( a2 != 1 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xF2u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 232))(*(_QWORD *)(a1 + 24), a2);
  if ( a2 != 1 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xF3u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a2);
}
