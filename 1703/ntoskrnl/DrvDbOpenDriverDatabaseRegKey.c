/*
 * XREFs of DrvDbOpenDriverDatabaseRegKey @ 0x14059D9EC
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1404E8770 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14059E3E8 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140742D74 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140744354 (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     DrvDbFindDatabaseNode @ 0x14044C7CC (DrvDbFindDatabaseNode.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     DrvDbUnloadDatabaseNode @ 0x140489320 (DrvDbUnloadDatabaseNode.c)
 *     DrvDbLoadDatabaseNode @ 0x140489400 (DrvDbLoadDatabaseNode.c)
 *     DrvDbCreateDatabaseNode @ 0x1405CD648 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140745350 (DrvDbDestroyDatabaseNode.c)
 */

__int64 __fastcall DrvDbOpenDriverDatabaseRegKey(
        __int64 **a1,
        const wchar_t *a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        _DWORD *a6)
{
  char v10; // bp
  int DatabaseNode; // eax
  __int64 v12; // r8
  int v13; // edi
  struct _KTHREAD *CurrentThread; // rax
  const UNICODE_STRING *v15; // rbx
  __int64 v16; // rcx
  const UNICODE_STRING *v18[2]; // [rsp+40h] [rbp-28h] BYREF

  v18[0] = 0LL;
  v10 = 0;
  if ( !wcsicmp(a2, L"*") )
  {
    v18[0] = (const UNICODE_STRING *)a1[4];
    goto LABEL_4;
  }
  DatabaseNode = DrvDbFindDatabaseNode((__int64)a1, a2, v18);
  v13 = DatabaseNode;
  if ( DatabaseNode == -1073741772 )
  {
    if ( a4 )
    {
      v13 = DrvDbCreateDatabaseNode(a1, a2, 0LL, 0LL, 16, 0LL, 0LL, v18);
      if ( v13 >= 0 )
      {
        v10 = 1;
        goto LABEL_4;
      }
    }
LABEL_23:
    v15 = v18[0];
    goto LABEL_12;
  }
  if ( DatabaseNode < 0 )
    goto LABEL_23;
LABEL_4:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = v18[0];
  ExAcquireResourceExclusiveLite((PERESOURCE)v18[0][8].Buffer, 1u);
  if ( ((__int64)v15[3].Buffer & 1) != 0 || (v13 = DrvDbLoadDatabaseNode(a1, (__int64)v15), v13 >= 0) )
  {
    if ( *a1 )
      v16 = **a1;
    else
      v16 = 0LL;
    v13 = SysCtxRegOpenKey(v16, *(_QWORD *)&v15[5].Length, 0LL, 0, a3, a5);
    if ( ((__int64)v15[3].Buffer & 1) == 0 )
      DrvDbUnloadDatabaseNode((__int64)a1, (__int64)v15);
    if ( v13 >= 0 && a6 )
      *a6 = 2;
  }
LABEL_12:
  if ( v15 )
  {
    ExReleaseResourceLite((PERESOURCE)v15[8].Buffer);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v15 = v18[0];
  }
  if ( v13 < 0 && v10 )
    DrvDbDestroyDatabaseNode(a1, v15, v12);
  return (unsigned int)v13;
}
