/*
 * XREFs of DrvDbOpenContext @ 0x1405C4F28
 * Callers:
 *     PiDrvDbInit @ 0x1405C6358 (PiDrvDbInit.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14001ED40 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     DrvDbLoadDatabaseNode @ 0x140533B00 (DrvDbLoadDatabaseNode.c)
 *     DrvDbRegisterObjects @ 0x1405C5068 (DrvDbRegisterObjects.c)
 *     DrvDbCreateDatabaseNode @ 0x1405C5178 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x14078782C (DrvDbDestroyDatabaseNode.c)
 */

__int64 DrvDbOpenContext()
{
  __int64 v0; // r14
  __int64 v1; // rsi
  int v2; // edi
  PVOID PoolWithTag; // rax
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rax
  int DatabaseNode; // edi
  int v7; // eax
  void *v9; // rsi
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v0 = *(_QWORD *)&PiPnpRtlCtx;
  v1 = 0LL;
  PiDrvDbCtx = 0LL;
  v10 = 0LL;
  v2 = ***(_DWORD ***)&PiPnpRtlCtx;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x42444450u);
  v4 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    *(_QWORD *)v4 = v0;
    *(_DWORD *)(v4 + 8) = v2;
    *(_DWORD *)(v4 + 12) = -805306368;
    *(_QWORD *)(v4 + 24) = v4 + 16;
    *(_QWORD *)(v4 + 16) = v4 + 16;
    v5 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x42444450u);
    *(_QWORD *)(v4 + 48) = v5;
    if ( v5 )
    {
      DatabaseNode = ExInitializeResourceLite(v5);
      if ( DatabaseNode < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(v4 + 48), 0);
        *(_QWORD *)(v4 + 48) = 0LL;
      }
    }
    else
    {
      DatabaseNode = -1073741670;
    }
    if ( DatabaseNode >= 0 )
    {
      v7 = DrvDbCreateDatabaseNode(v4, L"SYSTEM", 1LL, L"DriverDatabase", 3, 0LL, 0LL, &v10);
      v1 = v10;
      DatabaseNode = v7;
      if ( v7 >= 0 )
      {
        DatabaseNode = DrvDbLoadDatabaseNode((__int64 **)v4, v10);
        if ( DatabaseNode >= 0 )
        {
          DatabaseNode = DrvDbRegisterObjects(v0, v4);
          if ( DatabaseNode >= 0 )
          {
            PiDrvDbCtx = v4;
            v4 = 0LL;
          }
        }
      }
    }
    if ( v4 )
    {
      if ( v1 )
        DrvDbDestroyDatabaseNode(v4, v1);
      v9 = *(void **)(v4 + 48);
      if ( v9 )
      {
        ExDeleteResourceLite(*(PERESOURCE *)(v4 + 48));
        ExFreePoolWithTag(v9, 0);
      }
      ExFreePoolWithTag((PVOID)v4, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DatabaseNode;
}
