/*
 * XREFs of ndisRequestWaitWake @ 0x1C00AE030
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001F834 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C006F3F0 (NdisMIdleNotificationConfirm.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00F3E24 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisCompleteWaitWake @ 0x1C001F254 (ndisCompleteWaitWake.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 *     WPP_SF_dq @ 0x1C004B014 (WPP_SF_dq.c)
 */

__int64 __fastcall ndisRequestWaitWake(char *Context, PREQUEST_POWER_COMPLETE CompletionFunction)
{
  POWER_STATE v4; // r8d
  _DEVICE_OBJECT *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  if ( !ndisReferenceMiniport((__int64)Context) )
    return 3221225473LL;
  KeWaitForSingleObject(Context + 1304, Executive, 0, 0, 0LL);
  KeClearEvent((PRKEVENT)(Context + 1304));
  v4.SystemState = *(_DWORD *)(Context + 1268);
  v5 = (_DEVICE_OBJECT *)*((_QWORD *)Context + 482);
  Context[1330] = 0;
  Context[1328] = 0;
  *((POWER_STATE *)Context + 333) = v4;
  v6 = PoRequestPowerIrp(v5, 0, v4, CompletionFunction, Context, (PIRP *)Context + 162);
  v8 = v6;
  if ( v6 == 259 )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(0x91u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)Context);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      McTemplateK0jqxq(
        v7,
        &CreatedWakeIrp,
        (const GUID *)Context + 252,
        (__int64)(Context + 4032),
        *((_DWORD *)Context + 1020),
        *((_QWORD *)Context + 506),
        *((_DWORD *)Context + 324));
  }
  else
  {
    if ( (unsigned __int8)byte_1C0098755 >= 2u )
      WPP_SF_dq(0x92u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v6, Context);
    ndisCompleteWaitWake((__int64)Context);
  }
  return v8;
}
