/*
 * XREFs of ndisMInvokeRemoveDevice @ 0x1C00AB3FC
 * Callers:
 *     ndisPnPCompleteRemoveDevice @ 0x1C00AA8A0 (ndisPnPCompleteRemoveDevice.c)
 *     ndisAddDevice @ 0x1C0103FA8 (ndisAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
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
    v3 = 206;
LABEL_9:
    WPP_SF_qq(v3, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v1, a1);
    return;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xCCu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v1, a1);
  (*(void (__fastcall **)(_QWORD))(v1 + 792))(*(_QWORD *)(a1 + 4136));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v3 = 205;
    goto LABEL_9;
  }
}
