/*
 * XREFs of Control_ProcessTransferCompletion @ 0x1C0024658
 * Callers:
 *     Control_WdfEvtDpcForTransferCompletion @ 0x1C00265D0 (Control_WdfEvtDpcForTransferCompletion.c)
 *     Control_WdfEvtWorkItemForTransferCompletion @ 0x1C0026CD0 (Control_WdfEvtWorkItemForTransferCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     TR_TransfersReclaimed @ 0x1C002398C (TR_TransfersReclaimed.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C002552C (Control_Transfer_CompleteCancelable.c)
 */

void __fastcall Control_ProcessTransferCompletion(__int64 a1, char a2)
{
  bool v3; // di
  __int64 v4; // rbx
  KIRQL v5; // al
  __int64 v6; // rdx
  bool v7; // zf

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E3B8);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  v7 = *(_QWORD *)(v4 + 344) == 0LL;
  *(_BYTE *)(v4 + 104) = v5;
  if ( !v7 )
  {
    LOBYTE(v6) = a2;
    if ( (int)Control_Transfer_CompleteCancelable(v4, v6) >= 0 )
      v3 = (*(_BYTE *)(v4 + 352) & 2) != 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  if ( v3 )
    TR_TransfersReclaimed(v4);
}
