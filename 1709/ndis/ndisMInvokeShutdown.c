/*
 * XREFs of ndisMInvokeShutdown @ 0x1C005FE08
 * Callers:
 *     ndisBugcheckHandler @ 0x1C0061B70 (ndisBugcheckHandler.c)
 *     ndisMShutdownMiniport @ 0x1C010DCDC (ndisMShutdownMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

void __fastcall ndisMInvokeShutdown(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 3784);
  if ( a2 != 1 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xEFu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 232))(*(_QWORD *)(a1 + 24), a2);
  if ( a2 != 1 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xF0u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, a2);
}
