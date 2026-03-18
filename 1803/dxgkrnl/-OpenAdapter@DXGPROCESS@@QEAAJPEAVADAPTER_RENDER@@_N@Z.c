/*
 * XREFs of ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00F7E84
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00F0990 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00F50F8 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0159BBC (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00A05D0 (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00F7FF0 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::OpenAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2, char a3)
{
  char *v3; // rbp
  int v4; // esi
  __int64 v8; // r13
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  struct ADAPTER_RENDER *v12; // r15
  struct ADAPTER_RENDER **v13; // rcx
  __int64 v15; // rax

  v3 = (char *)a2 + 56;
  v4 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v8 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 200LL);
  v9 = *(_QWORD **)(*((_QWORD *)this + 6) + 8 * v8);
  if ( !v9 )
  {
    v10 = operator new(0x50uLL, 0x4B677844u, 1, PagedPool);
    v9 = v10;
    if ( v10 )
    {
      memset(v10, 0, 0x50uLL);
      v9[1] = 0LL;
      v9[2] = 0LL;
      v9[3] = 0LL;
      v9[4] = 0LL;
      v9[5] = 0LL;
      v9[6] = 0LL;
      *((_WORD *)v9 + 36) = 0;
    }
    else
    {
      v9 = 0LL;
    }
    if ( !v9 )
    {
      v4 = -1073741801;
      goto LABEL_10;
    }
    v9[4] = this;
    v12 = (struct ADAPTER_RENDER *)(v9 + 7);
    v9[6] = a2;
    if ( *((struct _KTHREAD **)a2 + 8) != KeGetCurrentThread() )
    {
      v15 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v15 + 24) = 3977LL;
      WdLogEvent5_WdAssertion(v15);
    }
    v13 = (struct ADAPTER_RENDER **)*((_QWORD *)a2 + 31);
    if ( *v13 != (struct ADAPTER_RENDER *)((char *)a2 + 240) )
      __fastfail(3u);
    *(_QWORD *)v12 = (char *)a2 + 240;
    v9[8] = v13;
    *v13 = v12;
    *((_QWORD *)a2 + 31) = v12;
    ++*((_DWORD *)a2 + 64);
    *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v8) = v9;
  }
  ++*((_DWORD *)v9 + 6);
  if ( a3 )
  {
    v4 = DXGPROCESS_ADAPTER_INFO::Initialize((DXGPROCESS_ADAPTER_INFO *)v9, (unsigned __int64)this, a2);
    if ( v4 < 0 )
    {
      *((_QWORD *)v3 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v3, 0LL);
      KeLeaveCriticalRegion();
      DXGPROCESS::CloseAdapter(this, a2);
      return (unsigned int)v4;
    }
  }
LABEL_10:
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
