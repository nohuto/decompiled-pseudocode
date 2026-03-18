/*
 * XREFs of ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18001F0FC
 * Callers:
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18001EFC4 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x18001FE80 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008909C (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x1800898AC (-IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x180089D0C (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801DE2C4 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1801DFA14 (-CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwa.c)
 * Callees:
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18002030C (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800CA5A8 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::EnsureDXGIEnumeration(
        LPCRITICAL_SECTION lpCriticalSection,
        struct CDXGIEnumeration **a2)
{
  unsigned int v4; // ebp
  char v5; // r14
  CD3DModuleLoaderInternal *v6; // rcx
  LONG *p_LockCount; // rbx
  __int64 v8; // rsi
  struct CDXGIEnumeration *v9; // rcx
  CSurfaceManager *LockSemaphore; // rcx
  int D3DObjects; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  EnterCriticalSection(lpCriticalSection);
  p_LockCount = &lpCriticalSection[1].LockCount;
  v8 = *(_QWORD *)&lpCriticalSection[1].LockCount;
  if ( v8
    && (!(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 16) + 104LL))(*(_QWORD *)(v8 + 16))
     || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *(_DWORD *)(v8 + 56)
     || qword_1802D6430 != (CDXGIEnumeration *)v8) )
  {
    ReleaseInterface<CD3DSurface>(&lpCriticalSection[1].LockCount);
    v5 = 1;
  }
  if ( !*(_QWORD *)p_LockCount )
  {
    D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(
                   v6,
                   (struct CDXGIEnumeration **)&lpCriticalSection[1].LockCount);
    TranslateDXGIorD3DErrorInContext((unsigned int)D3DObjects, 4LL, &D3DObjects);
    v4 = D3DObjects;
    if ( D3DObjects < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773D0, 1u, D3DObjects, 0x128u);
  }
  if ( v5 )
  {
    LockSemaphore = (CSurfaceManager *)lpCriticalSection[1].LockSemaphore;
    if ( LockSemaphore )
      CSurfaceManager::ResetTokenThread(LockSemaphore);
  }
  if ( a2 )
  {
    v9 = *(struct CDXGIEnumeration **)p_LockCount;
    *a2 = *(struct CDXGIEnumeration **)p_LockCount;
    if ( v9 )
      (**(void (__fastcall ***)(struct CDXGIEnumeration *))v9)(v9);
  }
  LeaveCriticalSection(lpCriticalSection);
  return v4;
}
