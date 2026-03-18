/*
 * XREFs of ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C001D860
 * Callers:
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C0170208 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C01C246C (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct VIDMM_MONITORED_FENCE_STORAGE *__fastcall DXGSYNCOBJECT::GetMonitoredFenceStorage(DXGSYNCOBJECT *this)
{
  __int64 v2; // rax

  if ( (unsigned int)(*((_DWORD *)this + 40) - 5) > 1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 329LL;
    WdLogEvent5_WdAssertion(v2);
  }
  return (DXGSYNCOBJECT *)((char *)this + 112);
}
