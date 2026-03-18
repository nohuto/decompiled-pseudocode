/*
 * XREFs of ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D5E34
 * Callers:
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C009FA34 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C0EFC (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00D5CC0 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C00D715C (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 */

void __fastcall DXGPROCESS::CloseAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 56, 0LL);
  *((_QWORD *)a2 + 8) = KeGetCurrentThread();
  v7 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 200LL);
  v8 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v7);
  if ( !*(_DWORD *)(v8 + 24) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5, v4, v7, v6);
    *(_QWORD *)(v10 + 24) = 1876LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( (*(_DWORD *)(v8 + 24))-- == 1 )
  {
    if ( a2 != *(struct ADAPTER_RENDER **)(v8 + 40) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v5, v4, v7, v6);
      *(_QWORD *)(v11 + 24) = 1879LL;
      WdLogEvent5_WdAssertion(v11);
    }
    DXGPROCESS::DestroyAdapterInfo(this, (struct DXGPROCESS_ADAPTER_INFO *)v8);
  }
  *((_QWORD *)a2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 56, 0LL);
  KeLeaveCriticalRegion();
}
