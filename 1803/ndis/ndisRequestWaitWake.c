/*
 * XREFs of ndisRequestWaitWake @ 0x1C00CA3B0
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C000F640 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C006FC80 (NdisMIdleNotificationConfirm.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00F69DC (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisCompleteWaitWake @ 0x1C0010704 (ndisCompleteWaitWake.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     WPP_SF_dq @ 0x1C0041AB4 (WPP_SF_dq.c)
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
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(0x94u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)Context);
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
    if ( (unsigned __int8)byte_1C0099615 >= 2u )
      WPP_SF_dq(0x95u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v6, Context);
    ndisCompleteWaitWake((__int64)Context);
  }
  return v8;
}
