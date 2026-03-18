/*
 * XREFs of ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C00D715C
 * Callers:
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D5E34 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01735BC (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0022138 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C0096094 (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00CDCAC (-DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGPROCESS::DestroyAdapterInfo(
        DXGPROCESS *this,
        struct DXGPROCESS_ADAPTER_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGPROCESS_ADAPTER_INFO *v4; // rbx
  struct DXGPROCESS_ADAPTER_INFO *v6; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  char *v8; // rdi
  __int64 v9; // rcx
  char **v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v4 = a2;
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v11 + 24) = 1777LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *((_BYTE *)v4 + 65) )
  {
    DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter(v4, this, *((struct ADAPTER_RENDER **)v4 + 5));
    a2 = (struct DXGPROCESS_ADAPTER_INFO *)*((_QWORD *)v4 + 2);
    if ( a2 )
    {
      ADAPTER_RENDER::DdiDestroyProcess(*((ADAPTER_RENDER **)v4 + 5), a2, a3);
      *((_QWORD *)v4 + 2) = 0LL;
    }
    v6 = (struct DXGPROCESS_ADAPTER_INFO *)*((_QWORD *)v4 + 1);
    if ( v6 != v4 )
    {
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      *((_QWORD *)v4 + 1) = 0LL;
    }
  }
  if ( *((_DWORD *)v4 + 7) )
    ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(*((ADAPTER_RENDER **)v4 + 5));
  CurrentThread = KeGetCurrentThread();
  v8 = (char *)v4 + 48;
  if ( *(struct _KTHREAD **)(*((_QWORD *)v4 + 5) + 64LL) != CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(CurrentThread, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 3551LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v9 = *(_QWORD *)v8;
  v10 = (char **)*((_QWORD *)v4 + 7);
  if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || *v10 != v8 )
    __fastfail(3u);
  *v10 = (char *)v9;
  *(_QWORD *)(v9 + 8) = v10;
  *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v4 + 5) + 16LL) + 200LL)) = 0LL;
  ExFreePoolWithTag(v4, 0);
}
