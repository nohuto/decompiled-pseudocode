/*
 * XREFs of ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00D5CC0
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00C89B8 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00D3674 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C010A1BC (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00960D4 (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D5E34 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::OpenAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2, char a3)
{
  char *v3; // rbp
  int v4; // edi
  __int64 v8; // r13
  _QWORD *v9; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct ADAPTER_RENDER *v16; // r15
  struct ADAPTER_RENDER **v17; // rcx
  __int64 v18; // rax

  v3 = (char *)a2 + 56;
  v4 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v8 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 200LL);
  v9 = *(_QWORD **)(*((_QWORD *)this + 5) + 8 * v8);
  if ( !v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B677844u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      v9[1] = 0LL;
      v9[2] = 0LL;
      v9[3] = 0LL;
      v9[4] = 0LL;
      v9[5] = 0LL;
      *((_WORD *)v9 + 32) = 0;
    }
    else
    {
      v9 = 0LL;
    }
    if ( !v9 )
    {
      v4 = -1073741801;
      goto LABEL_3;
    }
    v9[4] = this;
    v16 = (struct ADAPTER_RENDER *)(v9 + 6);
    v9[5] = a2;
    if ( *((struct _KTHREAD **)a2 + 8) != KeGetCurrentThread() )
    {
      v18 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v18 + 24) = 3545LL;
      WdLogEvent5_WdAssertion(v18);
    }
    v17 = (struct ADAPTER_RENDER **)*((_QWORD *)a2 + 31);
    if ( *v17 != (struct ADAPTER_RENDER *)((char *)a2 + 240) )
      __fastfail(3u);
    *(_QWORD *)v16 = (char *)a2 + 240;
    v9[7] = v17;
    *v17 = v16;
    *((_QWORD *)a2 + 31) = v16;
    *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v8) = v9;
  }
  ++*((_DWORD *)v9 + 6);
  if ( a3 )
  {
    v4 = DXGPROCESS_ADAPTER_INFO::Initialize((DXGPROCESS_ADAPTER_INFO *)v9, this, a2);
    if ( v4 < 0 )
    {
      *((_QWORD *)v3 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v3, 0LL);
      KeLeaveCriticalRegion();
      DXGPROCESS::CloseAdapter(this, a2);
      return (unsigned int)v4;
    }
  }
LABEL_3:
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
