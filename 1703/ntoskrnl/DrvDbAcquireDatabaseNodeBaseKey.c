/*
 * XREFs of DrvDbAcquireDatabaseNodeBaseKey @ 0x140486BA8
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x140742610 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x14074380C (DrvDbGetObjectList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140489400 (DrvDbLoadDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x1404896A4 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegCreateKey @ 0x1404DB470 (_PnpCtxRegCreateKey.c)
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
  int v16; // r9d
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
        Key = PnpCtxRegCreateKey(
                (unsigned int)*a1,
                v17,
                qword_14028C6B0[v5],
                v16,
                0x2000000,
                0LL,
                a2 + 88 + 8 * v5,
                0LL);
      }
      else
      {
        v19 = 0LL;
        if ( *a1 )
          v19 = **a1;
        Key = SysCtxRegOpenKey(v19, v17, 0LL, 0, 0x2000000u, a2 + 88);
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
        Tree = PnpCtxRegCreateTree((unsigned int)*a1, v14, qword_14028C6B0[v5], 0, 0x2000000, 0LL, (__int64)a4, 0LL);
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( DatabaseNode == -1073741275 || DatabaseNode == -1073741772 )
    return (unsigned int)-1073740947;
  return (unsigned int)DatabaseNode;
}
