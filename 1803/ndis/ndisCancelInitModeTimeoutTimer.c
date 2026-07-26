/*
 * XREFs of ndisCancelInitModeTimeoutTimer @ 0x1C00C2688
 * Callers:
 *     ndisSetSystemPower @ 0x1C00B09DC (ndisSetSystemPower.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00C2300 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisWdfNotifySystemPower @ 0x1C00EECC0 (ndisWdfNotifySystemPower.c)
 *     ndisMCommonHaltMiniport @ 0x1C0102134 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     NdisCancelTimer @ 0x1C001DE20 (NdisCancelTimer.c)
 */

void __fastcall ndisCancelInitModeTimeoutTimer(__int64 a1, char a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  BOOLEAN TimerCancelled; // [rsp+40h] [rbp+8h] BYREF

  NdisCancelTimer((PNDIS_TIMER)(a1 + 2784), &TimerCancelled);
  if ( TimerCancelled )
  {
    KeSetEvent((PRKEVENT)(a1 + 2992), 0, 0);
    ndisDereferenceMiniport(a1, 0x17u, v4, v5);
  }
  else if ( a2 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 2992), Executive, 0, 0, 0LL);
  }
}
