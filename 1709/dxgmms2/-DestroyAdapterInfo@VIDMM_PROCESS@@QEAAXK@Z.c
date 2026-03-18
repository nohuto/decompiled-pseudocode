/*
 * XREFs of ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C0052958
 * Callers:
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C005284C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C00017B0 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00670C0 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::DestroyAdapterInfo(VIDMM_PROCESS *this, unsigned int a2)
{
  __int64 v3; // rbp
  VIDMM_GLOBAL **v4; // rbx
  unsigned int i; // edi
  __int64 *v6; // rcx
  __int64 v7; // rax
  struct _PCW_INSTANCE *v8; // rcx
  VIDMM_GLOBAL *v9; // rcx
  VIDMM_GLOBAL ***v10; // r8
  __int64 v11; // rcx
  __int64 **v12; // rdx

  v3 = a2;
  v4 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( v4 )
  {
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v4 + 40968));
    for ( i = 0; i < *((_DWORD *)*v4 + 1604); ++i )
    {
      v6 = (__int64 *)((char *)v4[6] + 296 * i);
      v7 = *v6;
      if ( *v6 )
      {
        if ( *(__int64 **)(v7 + 8) != v6 || (v12 = (__int64 **)v6[1], *v12 != v6) )
          __fastfail(3u);
        *v12 = (__int64 *)v7;
        *(_QWORD *)(v7 + 8) = v12;
        *v6 = 0LL;
        v6[1] = 0LL;
      }
      v8 = (struct _PCW_INSTANCE *)v6[31];
      if ( v8 )
        PcwCloseInstance(v8);
    }
    v9 = v4[3];
    if ( *((VIDMM_GLOBAL ***)v9 + 1) != v4 + 3 || (v10 = (VIDMM_GLOBAL ***)v4[4], *v10 != v4 + 3) )
      __fastfail(3u);
    *v10 = (VIDMM_GLOBAL **)v9;
    *((_QWORD *)v9 + 1) = v10;
    *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v3) = 0LL;
    v11 = (__int64)*v4 + 40968;
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_GLOBAL::RequestNewBudget(*v4, 1);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v4);
  }
}
