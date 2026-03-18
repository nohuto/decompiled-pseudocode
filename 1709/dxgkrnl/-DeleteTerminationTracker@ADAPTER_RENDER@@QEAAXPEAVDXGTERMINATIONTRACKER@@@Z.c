/*
 * XREFs of ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C007FFB4
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C007FDE0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009B620 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::DeleteTerminationTracker(ADAPTER_RENDER *this, struct _SLIST_ENTRY *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 4111LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v4 = *((_QWORD *)this + 137);
  ++*(_DWORD *)(v4 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v4) >= *(_WORD *)(v4 + 16) )
  {
    ++*(_DWORD *)(v4 + 32);
    (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v4 + 56))(a2, v4);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v4, a2);
  }
}
