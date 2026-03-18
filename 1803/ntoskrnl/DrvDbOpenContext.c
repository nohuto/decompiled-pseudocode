/*
 * XREFs of DrvDbOpenContext @ 0x140623998
 * Callers:
 *     PiDrvDbInit @ 0x140622800 (PiDrvDbInit.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     DrvDbLoadDatabaseNode @ 0x140564E68 (DrvDbLoadDatabaseNode.c)
 *     DrvDbRegisterObjects @ 0x140623AD8 (DrvDbRegisterObjects.c)
 *     DrvDbCreateDatabaseNode @ 0x140623BE8 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x1407F3FAC (DrvDbDestroyDatabaseNode.c)
 */

__int64 DrvDbOpenContext()
{
  __int64 v0; // r14
  __int64 v1; // rsi
  int v2; // edi
  char *PoolWithTag; // rax
  char *v4; // rbx
  struct _ERESOURCE *v5; // rax
  __int64 v6; // r8
  int DatabaseNode; // edi
  int v8; // eax
  void *v10; // rsi
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v0 = *(_QWORD *)&PiPnpRtlCtx;
  v1 = 0LL;
  PiDrvDbCtx = 0LL;
  v11 = 0LL;
  v2 = **(_DWORD **)&PiPnpRtlCtx;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x42444450u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    *(_QWORD *)v4 = v0;
    *((_DWORD *)v4 + 2) = v2;
    *((_DWORD *)v4 + 3) = -805306368;
    *((_QWORD *)v4 + 3) = v4 + 16;
    *((_QWORD *)v4 + 2) = v4 + 16;
    v5 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x42444450u);
    *((_QWORD *)v4 + 6) = v5;
    if ( v5 )
    {
      DatabaseNode = ExInitializeResourceLite(v5);
      if ( DatabaseNode < 0 )
      {
        ExFreePoolWithTag(*((PVOID *)v4 + 6), 0);
        *((_QWORD *)v4 + 6) = 0LL;
      }
    }
    else
    {
      DatabaseNode = -1073741670;
    }
    if ( DatabaseNode >= 0 )
    {
      v8 = DrvDbCreateDatabaseNode(v4, L"SYSTEM", 1LL, L"DriverDatabase", 3, 0LL, 0LL, &v11);
      v1 = v11;
      DatabaseNode = v8;
      if ( v8 >= 0 )
      {
        DatabaseNode = DrvDbLoadDatabaseNode((__int64)v4, v11);
        if ( DatabaseNode >= 0 )
        {
          DatabaseNode = DrvDbRegisterObjects(v0, v4);
          if ( DatabaseNode >= 0 )
          {
            PiDrvDbCtx = (__int64)v4;
            v4 = 0LL;
          }
        }
      }
    }
    if ( v4 )
    {
      if ( v1 )
        DrvDbDestroyDatabaseNode(v4, v1, v6);
      v10 = (void *)*((_QWORD *)v4 + 6);
      if ( v10 )
      {
        ExDeleteResourceLite(*((PERESOURCE *)v4 + 6));
        ExFreePoolWithTag(v10, 0);
      }
      ExFreePoolWithTag(v4, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DatabaseNode;
}
