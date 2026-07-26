/*
 * XREFs of ndisMInvokeSetOptions @ 0x1C00C80A0
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002209C (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokeSetOptions(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64, _QWORD); // rax
  unsigned int v2; // edi
  int v4; // eax

  v1 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 128);
  v2 = 0;
  if ( v1 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    {
      WPP_SF_q(0xD8u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 128))(a1, *(_QWORD *)(a1 + 64));
    }
    else
    {
      v4 = v1(a1, *(_QWORD *)(a1 + 64));
    }
    v2 = v4;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xD9u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, v4);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0xDAu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  }
  return v2;
}
