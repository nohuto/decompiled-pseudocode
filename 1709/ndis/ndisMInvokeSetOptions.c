/*
 * XREFs of ndisMInvokeSetOptions @ 0x1C00C37F0
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C001BCB0 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokeSetOptions(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // eax

  v1 = 0;
  if ( *(_QWORD *)(a1 + 128) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0xD5u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 128))(a1, *(_QWORD *)(a1 + 64));
    v1 = v3;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xD6u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v3);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0xD7u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  }
  return v1;
}
