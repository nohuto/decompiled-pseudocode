/*
 * XREFs of ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C00F75AC
 * Callers:
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00F7FF0 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01594B8 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0026654 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00A0590 (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00A3C38 (-DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGPROCESS::DestroyAdapterInfo(DXGPROCESS *this, struct ADAPTER_RENDER **a2)
{
  DXGPROCESS *v3; // rbp
  struct ADAPTER_RENDER *v4; // rsi
  char *v5; // rdi
  __int64 v6; // rax
  char **v7; // rcx
  __int64 v8; // r8
  struct ADAPTER_RENDER *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = this;
  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 2045LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_BYTE *)a2 + 73) )
  {
    DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter((DXGPROCESS_ADAPTER_INFO *)a2, v3, a2[6]);
    v9 = a2[2];
    if ( v9 )
    {
      ADAPTER_RENDER::DdiDestroyProcess(a2[6], v9, v8);
      a2[2] = 0LL;
    }
    this = a2[1];
    if ( this != (DXGPROCESS *)a2 )
    {
      operator delete[](this);
      a2[1] = 0LL;
    }
  }
  if ( *((_DWORD *)a2 + 7) )
    ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(a2[6]);
  v4 = a2[6];
  v5 = (char *)(a2 + 7);
  if ( *((struct _KTHREAD **)v4 + 8) != KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 3984LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = *(_QWORD *)v5;
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = (char **)a2[8], *v7 != v5) )
    __fastfail(3u);
  *v7 = (char *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  --*((_DWORD *)v4 + 64);
  *(_QWORD *)(*((_QWORD *)v3 + 6) + 8LL * *(unsigned int *)(*((_QWORD *)a2[6] + 2) + 200LL)) = 0LL;
  operator delete(a2);
}
