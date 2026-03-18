/*
 * XREFs of DrvDbOpenDriverDatabaseRegKey @ 0x140459BE0
 * Callers:
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140443CDC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140459A60 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbDispatchDriverDatabase @ 0x140531320 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140786BA4 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     DrvDbFindDatabaseNode @ 0x140459D40 (DrvDbFindDatabaseNode.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140533B00 (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x140533D40 (DrvDbUnloadDatabaseNode.c)
 *     DrvDbCreateDatabaseNode @ 0x1405C5178 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x14078782C (DrvDbDestroyDatabaseNode.c)
 */

__int64 __fastcall DrvDbOpenDriverDatabaseRegKey(
        __int64 **a1,
        const wchar_t *a2,
        int a3,
        char a4,
        __int64 a5,
        _DWORD *a6)
{
  char v10; // bp
  int DatabaseNode; // eax
  int v12; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+40h] [rbp-28h] BYREF

  v17[0] = 0LL;
  v10 = 0;
  if ( !wcsicmp(a2, L"*") )
  {
    v17[0] = a1[4];
    goto LABEL_4;
  }
  DatabaseNode = DrvDbFindDatabaseNode(a1, a2, v17);
  v12 = DatabaseNode;
  if ( DatabaseNode == -1073741772 )
  {
    if ( a4 )
    {
      v12 = DrvDbCreateDatabaseNode(a1, a2, 0LL, 0LL, 16, 0LL, 0LL, v17);
      if ( v12 >= 0 )
      {
        v10 = 1;
        goto LABEL_4;
      }
    }
LABEL_23:
    v14 = v17[0];
    goto LABEL_12;
  }
  if ( DatabaseNode < 0 )
    goto LABEL_23;
LABEL_4:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = v17[0];
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17[0] + 136LL), 1u);
  if ( (*(_DWORD *)(v14 + 56) & 1) != 0 || (v12 = DrvDbLoadDatabaseNode(a1, v14), v12 >= 0) )
  {
    if ( *a1 )
      v15 = **a1;
    else
      LODWORD(v15) = 0;
    v12 = SysCtxRegOpenKey(v15, *(_QWORD *)(v14 + 80), 0, 0, a3, a5);
    if ( (*(_DWORD *)(v14 + 56) & 1) == 0 )
      DrvDbUnloadDatabaseNode(a1, v14);
    if ( v12 >= 0 && a6 )
      *a6 = 2;
  }
LABEL_12:
  if ( v14 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v14 + 136));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v14 = v17[0];
  }
  if ( v12 < 0 && v10 )
    DrvDbDestroyDatabaseNode(a1, v14);
  return (unsigned int)v12;
}
