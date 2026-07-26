/*
 * XREFs of ndisMInvokeRemoveDevice @ 0x1C00B2BC4
 * Callers:
 *     ndisPnPCompleteRemoveDevice @ 0x1C00B1E5C (ndisPnPCompleteRemoveDevice.c)
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

void __fastcall ndisMInvokeRemoveDevice(__int64 a1)
{
  __int64 v1; // rdi
  void (__fastcall *v3)(_QWORD); // rax
  unsigned __int16 v4; // cx

  v1 = *(_QWORD *)(a1 + 3784);
  v3 = *(void (__fastcall **)(_QWORD))(v1 + 792);
  if ( !v3 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 4u )
      return;
    v4 = 209;
LABEL_10:
    WPP_SF_qq(v4, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v1, a1);
    return;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_qq(0xCFu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v1, a1);
    (*(void (__fastcall **)(_QWORD))(v1 + 792))(*(_QWORD *)(a1 + 4136));
  }
  else
  {
    v3(*(_QWORD *)(a1 + 4136));
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v4 = 208;
    goto LABEL_10;
  }
}
