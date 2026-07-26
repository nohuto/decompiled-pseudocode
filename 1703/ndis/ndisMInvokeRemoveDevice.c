/*
 * XREFs of ndisMInvokeRemoveDevice @ 0x1C00BF6B0
 * Callers:
 *     ndisPnPCompleteRemoveDevice @ 0x1C00BE9A0 (ndisPnPCompleteRemoveDevice.c)
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 */

void __fastcall ndisMInvokeRemoveDevice(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int16 v3; // cx

  v1 = *(_QWORD *)(a1 + 3784);
  if ( !*(_QWORD *)(v1 + 792) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 4u )
      return;
    v3 = 193;
LABEL_9:
    WPP_SF_qq(v3, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, v1, a1);
    return;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xBFu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, v1, a1);
  (*(void (__fastcall **)(_QWORD))(v1 + 792))(*(_QWORD *)(a1 + 4136));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v3 = 192;
    goto LABEL_9;
  }
}
