/*
 * XREFs of McTemplateK0jqx @ 0x1C00652B8
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C001FE9C (ndisRequestDevicePowerD0.c)
 *     ndisIdleWaitWakeCallback @ 0x1C0070150 (ndisIdleWaitWakeCallback.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0072630 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0072C74 (-ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ndisRequestDeviceLowPower @ 0x1C00C6A7C (ndisRequestDeviceLowPower.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003BD2C (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0jqx(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6)
{
  _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]

  v8 = a4;
  v10 = &a5;
  v9 = 16LL;
  v12 = &a6;
  v11 = 4LL;
  v13 = 8LL;
  return McGenEventWriteKM(NDIS_PROVIDER_ID_Context, a2, a3, 4u, &v7);
}
