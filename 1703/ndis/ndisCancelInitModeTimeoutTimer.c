/*
 * XREFs of ndisCancelInitModeTimeoutTimer @ 0x1C00B8750
 * Callers:
 *     ndisSetSystemPower @ 0x1C00A79CC (ndisSetSystemPower.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B8610 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FB074 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     NdisCancelTimer @ 0x1C001D2C0 (NdisCancelTimer.c)
 */

void __fastcall ndisCancelInitModeTimeoutTimer(__int64 a1, char a2)
{
  BOOLEAN TimerCancelled; // [rsp+40h] [rbp+8h] BYREF

  NdisCancelTimer((PNDIS_TIMER)(a1 + 2784), &TimerCancelled);
  if ( TimerCancelled )
  {
    KeSetEvent((PRKEVENT)(a1 + 2992), 0, 0);
    ndisDereferenceMiniport(a1, 0x17u);
  }
  else if ( a2 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 2992), Executive, 0, 0, 0LL);
  }
}
