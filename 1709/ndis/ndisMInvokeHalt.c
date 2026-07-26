/*
 * XREFs of ndisMInvokeHalt @ 0x1C00AB9C8
 * Callers:
 *     ndisMCommonHaltMiniport @ 0x1C00FE9B4 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

void __fastcall ndisMInvokeHalt(__int64 a1, _NDIS_HALT_ACTION a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 3784);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xDAu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v2);
  if ( ndisVerifierNdisDispatch && (*(_BYTE *)(v2 + 26) & 2) != 0 )
    ndisVerifierNdisDispatch->NdisMiniportHaltExHandler(
      *(void **)(a1 + 24),
      a2,
      (void *)a1,
      *(void **)(a1 + 4992),
      *(void (__fastcall **)(void *, _NDIS_HALT_ACTION))(v2 + 144));
  else
    (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 144))(*(_QWORD *)(a1 + 24), (unsigned int)a2);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xDBu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v2);
}
