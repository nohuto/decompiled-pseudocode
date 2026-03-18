/*
 * XREFs of ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C0089158
 * Callers:
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C008A1A4 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0176FAC (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001F6B8 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C007DF70 (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0080BBC (-DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGPROCESS::DestroyAdapterInfo(DXGPROCESS *this, struct ADAPTER_RENDER **a2)
{
  struct _KTHREAD *CurrentThread; // rcx
  char *v5; // rdi
  __int64 v6; // rax
  char **v7; // rcx
  __int64 v8; // r8
  struct ADAPTER_RENDER *v9; // rdx
  struct ADAPTER_RENDER **v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 1867LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *((_BYTE *)a2 + 73) )
  {
    DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter((DXGPROCESS_ADAPTER_INFO *)a2, this, a2[6]);
    v9 = a2[2];
    if ( v9 )
    {
      ADAPTER_RENDER::DdiDestroyProcess(a2[6], v9, v8);
      a2[2] = 0LL;
    }
    v10 = (struct ADAPTER_RENDER **)a2[1];
    if ( v10 != a2 )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      a2[1] = 0LL;
    }
  }
  if ( *((_DWORD *)a2 + 7) )
    ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(a2[6]);
  CurrentThread = KeGetCurrentThread();
  v5 = (char *)(a2 + 7);
  if ( *((struct _KTHREAD **)a2[6] + 8) != CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v12 + 24) = 3674LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v6 = *(_QWORD *)v5;
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = (char **)a2[8], *v7 != v5) )
    __fastfail(3u);
  *v7 = (char *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *(unsigned int *)(*((_QWORD *)a2[6] + 2) + 200LL)) = 0LL;
  ExFreePoolWithTag(a2, 0);
}
