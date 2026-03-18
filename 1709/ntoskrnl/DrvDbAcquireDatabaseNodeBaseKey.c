/*
 * XREFs of DrvDbAcquireDatabaseNodeBaseKey @ 0x140533894
 * Callers:
 *     DrvDbGetObjectList @ 0x14044FDB0 (DrvDbGetObjectList.c)
 *     DrvDbOpenObjectRegKey @ 0x14053360C (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x140786438 (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateKey @ 0x140530B64 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegCreateTree @ 0x140533240 (_PnpCtxRegCreateTree.c)
 *     DrvDbLoadDatabaseNode @ 0x140533B00 (DrvDbLoadDatabaseNode.c)
 */

__int64 __fastcall DrvDbAcquireDatabaseNodeBaseKey(__int64 **a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int DatabaseNode; // ebx
  int v11; // eax
  _QWORD *v12; // r15
  __int64 v14; // rdx
  int Tree; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  int Key; // eax
  __int64 v19; // rcx

  v4 = 0LL;
  v5 = a3;
  *a4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  DatabaseNode = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 136), 1u);
  v11 = *(_DWORD *)(a2 + 56);
  if ( (v11 & 4) != 0 )
  {
    DatabaseNode = -1073740697;
  }
  else if ( (v11 & 2) != 0 )
  {
    v12 = (_QWORD *)(a2 + 88 + 8 * v5);
    if ( *v12 )
      goto LABEL_4;
    DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
    if ( DatabaseNode >= 0 )
    {
      v17 = *(_QWORD *)(a2 + 80);
      if ( (_DWORD)v5 )
      {
        Key = PnpCtxRegCreateKey((__int64)*a1, v17, qword_1402B99A8[v5], v16, 0x2000000u, 0LL, a2 + 88 + 8 * v5, 0LL);
      }
      else
      {
        v19 = 0LL;
        if ( *a1 )
          v19 = **a1;
        Key = SysCtxRegOpenKey(v19, v17, 0LL, 0, 0x2000000u, a2 + 88 + 8 * v5);
      }
      DatabaseNode = Key;
      if ( Key >= 0 )
LABEL_4:
        *a4 = *v12;
    }
  }
  else
  {
    DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
    if ( DatabaseNode >= 0 )
    {
      v14 = *(_QWORD *)(a2 + 80);
      if ( (_DWORD)v5 )
      {
        Tree = PnpCtxRegCreateTree(*a1, v14, qword_1402B99A8[v5], 0LL, 0x2000000, 0LL);
      }
      else
      {
        if ( *a1 )
          v4 = **a1;
        Tree = SysCtxRegOpenKey(v4, v14, 0LL, 0, 0x2000000u, (__int64)a4);
      }
      DatabaseNode = Tree;
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 136));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DatabaseNode == -1073741275 || DatabaseNode == -1073741772 )
    return (unsigned int)-1073740947;
  return (unsigned int)DatabaseNode;
}
