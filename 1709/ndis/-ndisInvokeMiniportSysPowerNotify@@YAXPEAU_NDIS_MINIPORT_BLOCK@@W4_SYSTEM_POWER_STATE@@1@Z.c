/*
 * XREFs of ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x1C001FCF8
 * Callers:
 *     ndisSetSystemPower @ 0x1C00C6804 (ndisSetSystemPower.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisInvokeMiniportSysPowerNotify(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _SYSTEM_POWER_STATE a2,
        enum _SYSTEM_POWER_STATE a3)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  _DWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF

  DriverHandle = a1->DriverHandle;
  if ( DriverHandle->SysPowerNotifyHandler && (a1->PnPFlags & 0x4000) == 0 )
  {
    v5[2] = a3;
    v5[0] = 786816;
    v5[1] = a2;
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(11LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1);
    DriverHandle->SysPowerNotifyHandler(a1->MiniportAdapterContext, (_NDIS_MINIPORT_SYSPOWER_NOTIFY *)v5);
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(12LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1);
  }
}
