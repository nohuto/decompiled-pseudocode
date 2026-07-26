/*
 * XREFs of McTemplateK0jqxqq @ 0x1C003D190
 * Callers:
 *     ndisSetDevicePower @ 0x1C000F884 (ndisSetDevicePower.c)
 *     ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000FC30 (-ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ndisCheckMiniportWakeUpCapable @ 0x1C0024C90 (ndisCheckMiniportWakeUpCapable.c)
 *     ndisPnPPortActivation @ 0x1C003D8FC (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003DE80 (ndisPnPPortDeactivation.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C0070C50 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0071E10 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisSetSystemPower @ 0x1C00B09DC (ndisSetSystemPower.c)
 *     ndisWdfNotifySystemPower @ 0x1C00EECC0 (ndisWdfNotifySystemPower.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C0100D1C (ndisQueryPower.c)
 *     ndisMPowerPolicy @ 0x1C0100F58 (ndisMPowerPolicy.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003D074 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0jqxqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-39h] BYREF
  __int64 v10; // [rsp+40h] [rbp-29h]
  __int64 v11; // [rsp+48h] [rbp-21h]
  char *v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+58h] [rbp-11h]
  char *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  char *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  char *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]

  v10 = a4;
  v12 = &a5;
  v11 = 16LL;
  v14 = &a6;
  v13 = 4LL;
  v16 = &a7;
  v18 = &a8;
  v15 = 8LL;
  v17 = 4LL;
  v19 = 4LL;
  return McGenEventWriteKM(NDIS_PROVIDER_ID_Context, a2, a3, 6u, &v9);
}
