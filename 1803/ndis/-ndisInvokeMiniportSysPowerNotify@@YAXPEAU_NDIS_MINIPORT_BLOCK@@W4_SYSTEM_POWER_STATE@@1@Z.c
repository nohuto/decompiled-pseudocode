/*
 * XREFs of ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x1C000FB2C
 * Callers:
 *     ndisSetSystemPower @ 0x1C00B09DC (ndisSetSystemPower.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisInvokeMiniportSysPowerNotify(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _SYSTEM_POWER_STATE a2,
        enum _SYSTEM_POWER_STATE a3,
        __int64 a4)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  __int64 v6; // r9
  _DWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF

  DriverHandle = a1->DriverHandle;
  if ( DriverHandle->SysPowerNotifyHandler && (a1->PnPFlags & 0x4000) == 0 )
  {
    v7[2] = a3;
    v7[0] = 786816;
    v7[1] = a2;
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(11LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1, a4);
    DriverHandle->SysPowerNotifyHandler(a1->MiniportAdapterContext, (_NDIS_MINIPORT_SYSPOWER_NOTIFY *)v7);
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(12LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1, v6);
  }
}
