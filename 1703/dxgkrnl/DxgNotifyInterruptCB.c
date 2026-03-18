/*
 * XREFs of DxgNotifyInterruptCB @ 0x1C00019A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z @ 0x1C003B528 (-NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z.c)
 *     DpiProcessMiracastNotifyInterrupt @ 0x1C003FD54 (DpiProcessMiracastNotifyInterrupt.c)
 */

void __fastcall DxgNotifyInterruptCB(__int64 a1, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2)
{
  struct DXGADAPTER *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  DXGDODPRESENT *v7; // rcx

  if ( KeGetCurrentIrql() <= 2u )
  {
    v6 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v6 + 24) = 37LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( a2->InterruptType == DXGK_INTERRUPT_MICACAST_CHUNK_PROCESSING_COMPLETE )
  {
    DpiProcessMiracastNotifyInterrupt(a1, a2);
  }
  else if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 64) + 3724LL), 0, 0) & 2) != 0 )
  {
    v4 = *(struct DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3704LL);
    if ( v4 )
    {
      v5 = *((_QWORD *)v4 + 286);
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *))(*(_QWORD *)(*(_QWORD *)(v5 + 408)
                                                                                               + 8LL)
                                                                                   + 8LL))(
          a1,
          a2);
      }
      else
      {
        v7 = *(DXGDODPRESENT **)(*((_QWORD *)v4 + 285) + 264LL);
        if ( v7 )
          DXGDODPRESENT::NotifyInterrupt(v7, v4, a2);
      }
    }
  }
}
