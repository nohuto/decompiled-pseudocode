/*
 * XREFs of Template_qq @ 0x1C004FC94
 * Callers:
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C00127A0 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisTraceDpcStart @ 0x1C0050F70 (ndisTraceDpcStart.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006D594 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006D794 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006D914 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006DB18 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisSubmitIdleRequest @ 0x1C0070060 (ndisSubmitIdleRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, int a4, __int64 a5)
{
  _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v6.Ptr = (unsigned __int64)&v10;
  v6.Size = 4;
  v6.Reserved = 0;
  v7 = &a5;
  v8 = 4;
  v9 = 0;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 2u, &v6);
}
