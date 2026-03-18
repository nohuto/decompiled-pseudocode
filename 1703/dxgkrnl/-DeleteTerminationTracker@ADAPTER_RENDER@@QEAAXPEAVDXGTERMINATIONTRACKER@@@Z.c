/*
 * XREFs of ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C008B3E8
 * Callers:
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C7DC0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::DeleteTerminationTracker(
        ADAPTER_RENDER *this,
        struct _SLIST_ENTRY *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v7 + 24) = 3868LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v6 = *((_QWORD *)this + 125);
  ++*(_DWORD *)(v6 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v6) >= *(_WORD *)(v6 + 16) )
  {
    ++*(_DWORD *)(v6 + 32);
    (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v6 + 56))(a2, v6);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v6, a2);
  }
}
