/*
 * XREFs of ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C008A1A4
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C008A02C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0093D2C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00F3984 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 * Callees:
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C0089158 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 */

void __fastcall DXGPROCESS::CloseAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 56, 0LL);
  *((_QWORD *)a2 + 8) = KeGetCurrentThread();
  v5 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 2) + 200LL));
  if ( !*(_DWORD *)(v5 + 24) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v7 + 24) = 1966LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( (*(_DWORD *)(v5 + 24))-- == 1 )
  {
    if ( a2 != *(struct ADAPTER_RENDER **)(v5 + 48) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v8 + 24) = 1969LL;
      WdLogEvent5_WdAssertion(v8);
    }
    DXGPROCESS::DestroyAdapterInfo(this, (struct ADAPTER_RENDER **)v5);
  }
  *((_QWORD *)a2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 56, 0LL);
  KeLeaveCriticalRegion();
}
