/*
 * XREFs of ndisRequestWaitWake @ 0x1C00BDE48
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0011DF4 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C006DD30 (NdisMIdleNotificationConfirm.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00EA84C (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisCompleteWaitWake @ 0x1C0023920 (ndisCompleteWaitWake.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 *     WPP_SF_dq @ 0x1C004D4F4 (WPP_SF_dq.c)
 */

__int64 __fastcall ndisRequestWaitWake(char *Context, PREQUEST_POWER_COMPLETE CompletionFunction)
{
  POWER_STATE v4; // r8d
  _DEVICE_OBJECT *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  if ( !ndisReferenceMiniport((__int64)Context, 0xAu) )
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
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_q(0x91u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)Context);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxq(
        v7,
        &CreatedWakeIrp,
        (const GUID *)Context + 252,
        (unsigned __int64)(Context + 4032),
        *((_DWORD *)Context + 1020),
        *((_QWORD *)Context + 506),
        *((_DWORD *)Context + 324));
  }
  else
  {
    if ( (unsigned __int8)byte_1C0092615 >= 2u )
      WPP_SF_dq(0x92u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, v6, Context);
    ndisCompleteWaitWake((__int64)Context);
  }
  return v8;
}
