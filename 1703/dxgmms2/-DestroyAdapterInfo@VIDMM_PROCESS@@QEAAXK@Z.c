/*
 * XREFs of ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C004DF64
 * Callers:
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C004DE58 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0001BA8 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseExpandedResourceAppReference@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0047694 (-ReleaseExpandedResourceAppReference@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0063A64 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::DestroyAdapterInfo(VIDMM_PROCESS *this, unsigned int a2)
{
  __int64 v3; // rsi
  VIDMM_GLOBAL **v4; // rbx
  unsigned int i; // edx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 **v8; // r8
  VIDMM_GLOBAL *v9; // r8
  VIDMM_GLOBAL ***v10; // rcx
  __int64 v11; // rcx

  v3 = a2;
  v4 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( v4 )
  {
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v4 + 40968));
    for ( i = 0; i < *((_DWORD *)*v4 + 1604); ++i )
    {
      v6 = (__int64 *)((char *)v4[6] + 264 * i);
      v7 = *v6;
      if ( *v6 )
      {
        v8 = (__int64 **)v6[1];
        if ( *(__int64 **)(v7 + 8) != v6 || *v8 != v6 )
          __fastfail(3u);
        *v8 = (__int64 *)v7;
        *(_QWORD *)(v7 + 8) = v8;
        *v6 = 0LL;
        v6[1] = 0LL;
      }
    }
    v9 = v4[3];
    v10 = (VIDMM_GLOBAL ***)v4[4];
    if ( *((VIDMM_GLOBAL ***)v9 + 1) != v4 + 3 || *v10 != v4 + 3 )
      __fastfail(3u);
    *v10 = (VIDMM_GLOBAL **)v9;
    *((_QWORD *)v9 + 1) = v10;
    *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v3) = 0LL;
    v11 = (__int64)*v4 + 40968;
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_GLOBAL::RequestNewBudget(*v4, 1);
    if ( *(_BYTE *)(*((_QWORD *)this + 4) + 494LL) )
      VIDMM_GLOBAL::ReleaseExpandedResourceAppReference(*v4);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v4);
  }
}
