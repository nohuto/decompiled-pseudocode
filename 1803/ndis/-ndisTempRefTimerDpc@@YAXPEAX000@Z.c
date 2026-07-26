/*
 * XREFs of ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C0074D30
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001A1A0 (ndisScheduleWorkItemInternal.c)
 */

void __fastcall ndisTempRefTimerDpc(
        PVOID SystemSpecific1,
        _QWORD *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  __int64 v4; // rbx
  __int64 v6; // r8
  __int64 v7; // r9

  v4 = FunctionContext[561];
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v4);
  if ( *(_BYTE *)(v4 + 272) == 1 )
  {
    ndisDereferenceMiniport((__int64)FunctionContext, 2u, v6, v7);
  }
  else
  {
    *(_BYTE *)(v4 + 272) = 1;
    ndisScheduleWorkItemInternal(v4 + 192);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v4);
}
