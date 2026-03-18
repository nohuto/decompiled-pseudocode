/*
 * XREFs of ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00F7FF0
 * Callers:
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00D2540 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00F3654 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00F7E84 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C00F75AC (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGPROCESS::CloseAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  volatile signed __int64 *v2; // rax
  char *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  struct DXGADAPTER *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  struct _KTHREAD **v13[2]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v14; // [rsp+30h] [rbp-18h]
  char v15; // [rsp+38h] [rbp-10h]

  v2 = (volatile signed __int64 *)*((_QWORD *)a2 + 2);
  v14 = (struct DXGADAPTER *)v2;
  v15 = 0;
  if ( v2 )
  {
    _InterlockedIncrement64(v2 + 3);
    v13[1] = (struct _KTHREAD **)-1LL;
  }
  v5 = (char *)a2 + 56;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *((_QWORD *)v5 + 1) = KeGetCurrentThread();
    v6 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 200LL);
    v7 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v6);
    v8 = *(_DWORD *)(v7 + 24);
    if ( !v8 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v11 + 24) = 2148LL;
      WdLogEvent5_WdAssertion(v11);
      v8 = *(_DWORD *)(v7 + 24);
    }
    v9 = v8 - 1;
    *(_DWORD *)(v7 + 24) = v9;
    if ( v9 )
      break;
    if ( a2 != *(struct ADAPTER_RENDER **)(v7 + 48) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v12 + 24) = 2151LL;
      WdLogEvent5_WdAssertion(v12);
    }
    if ( !*(_BYTE *)(v7 + 73) || DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)a2 + 2)) )
    {
      DXGPROCESS::DestroyAdapterInfo(this, (struct ADAPTER_RENDER **)v7);
      break;
    }
    ++*(_DWORD *)(v7 + 24);
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    COREACCESS::AcquireShared((DXGADAPTER **)v13);
  }
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v10 = v14;
  if ( v14 )
  {
    if ( v15 )
    {
      COREACCESS::Release(v13);
      v10 = v14;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v10 + 2), v10);
  }
}
