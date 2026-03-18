/*
 * XREFs of ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C01DF0B0
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C01DDA50 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C01DECC8 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C0037B1C (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0145FF8 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01DE3BC (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        int a3,
        void **a4)
{
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v14; // r15
  __int64 CurrentProcess; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rax
  PERESOURCE *Global; // rax
  __int64 v25; // rcx
  PERESOURCE *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  struct DXGPROCESS *Current; // r15
  unsigned int v34; // r14d
  unsigned int v35; // ecx
  __int64 v36; // rdx
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  bool v39; // zf
  struct DXGSYNCOBJECT *v40; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v41[8]; // [rsp+48h] [rbp-50h] BYREF
  char v42; // [rsp+50h] [rbp-48h]
  __int64 v43; // [rsp+A0h] [rbp+8h]
  unsigned int v44; // [rsp+B0h] [rbp+18h] BYREF

  if ( this[1] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 2136LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = DXGSWAPCHAIN::SwitchClient((__int64)this, a3 == 0);
  v11 = v9 == 0 ? 0x30 : 0;
  v12 = *(__int64 *)((char *)this + v11 + 104);
  if ( !v12 )
    return 3221225558LL;
  v14 = 32LL * v9;
  v43 = 32LL * (a3 == 0);
  LOBYTE(v10) = -(v9 == 0);
  CurrentProcess = PsGetCurrentProcess(v10, v11);
  v16 = ObDuplicateObject(
          v12,
          *(_QWORD *)((char *)a2 + v14 + 56),
          CurrentProcess,
          (char *)a2 + v43 + 56,
          *((_DWORD *)this + 16),
          0,
          4,
          1);
  v18 = v16;
  if ( v16 >= 0 )
  {
    if ( a4 )
      *a4 = *(void **)((char *)a2 + v43 + 56);
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v17);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v41, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v41);
    v26 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v25);
    LODWORD(v18) = DXGGLOBAL::OpenSyncObject(v26, *((_DWORD *)a2 + 7), &v40, &v44, 0LL);
    if ( (int)v18 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent(v28, v27);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v34 = v44;
      v35 = (v44 >> 6) & 0xFFFFFF;
      if ( v35 < *((_DWORD *)Current + 62) )
      {
        v36 = *((_QWORD *)Current + 29);
        if ( ((v44 >> 25) & 0x60) == (*(_BYTE *)(v36 + 16LL * v35 + 8) & 0x60)
          && (*(_DWORD *)(v36 + 16LL * v35 + 8) & 0x1F) != 0 )
        {
          v37 = 2 * (((unsigned __int64)v44 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v36 + 16 * (((unsigned __int64)v44 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v38 = WdLogNewEntry5_WdAssertion((v44 >> 25) & 0x60);
            *(_QWORD *)(v38 + 24) = 215LL;
            WdLogEvent5_WdAssertion(v38);
            v36 = *((_QWORD *)Current + 29);
          }
          *(_DWORD *)(v36 + 8 * v37 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
      v39 = v42 == 0;
      *(_DWORD *)((char *)a2 + v43 + 40) = v34;
      if ( !v39 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v41);
      *((_BYTE *)a2 + v43 + 32) = 1;
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v28);
      v30 = *((unsigned int *)a2 + 7);
      v31 = v29;
      *(_QWORD *)(v29 + 24) = v30;
      *(_QWORD *)(v29 + 32) = PsGetCurrentProcess(v30, v32);
      WdLogEvent5_WdError(v31);
      if ( v42 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v41);
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v17);
    v20 = *(_QWORD *)((char *)a2 + v14 + 56);
    v21 = v19;
    *(_QWORD *)(v19 + 24) = v20;
    *(_QWORD *)(v19 + 32) = v12;
    v23 = PsGetCurrentProcess(v20, v22);
    *(_QWORD *)(v21 + 48) = v18;
    *(_QWORD *)(v21 + 40) = v23;
    WdLogEvent5_WdError(v21);
  }
  if ( (int)v18 < 0 )
    DXGSWAPCHAIN::DestroySwapchainLocalClient(
      (DXGSWAPCHAIN *)this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + (a3 != 0 ? 136LL : 88LL)));
  return (unsigned int)v18;
}
