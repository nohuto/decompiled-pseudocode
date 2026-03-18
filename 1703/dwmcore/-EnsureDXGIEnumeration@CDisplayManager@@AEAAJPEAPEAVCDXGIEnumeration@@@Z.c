/*
 * XREFs of ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007F134
 * Callers:
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001AEF4 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x18004231C (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x1800428F8 (-IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042A64 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18007F03C (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x1800B6178 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ?WaitForWork@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013EBD4 (-WaitForWork@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800B63E8 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C89A0 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  __int64 v9; // rcx
  struct CDXGIEnumeration *v10; // rcx
  CSurfaceManager *LockSemaphore; // rcx
  int D3DObjects; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  EnterCriticalSection(lpCriticalSection);
  p_LockCount = &lpCriticalSection[1].LockCount;
  v8 = *(_QWORD *)&lpCriticalSection[1].LockCount;
  if ( v8
    && (!(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 16) + 104LL))(*(_QWORD *)(v8 + 16))
     || (unsigned int)DrvQueryAdapterPopulationUniqueness(v9) != *(_DWORD *)(v8 + 56)
     || qword_18023E530 != (CDXGIEnumeration *)v8) )
  {
    ReleaseInterface<ClipPlaneInfoRef>(&lpCriticalSection[1].LockCount);
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
      MilInstrumentationCheckHR(0x14u, &dword_1801F3C7C, 1u, D3DObjects, 0x12Bu);
  }
  if ( v5 )
  {
    LockSemaphore = (CSurfaceManager *)lpCriticalSection[1].LockSemaphore;
    if ( LockSemaphore )
      CSurfaceManager::ResetTokenThread(LockSemaphore);
  }
  if ( a2 )
  {
    v10 = *(struct CDXGIEnumeration **)p_LockCount;
    *a2 = *(struct CDXGIEnumeration **)p_LockCount;
    if ( v10 )
      (**(void (__fastcall ***)(struct CDXGIEnumeration *))v10)(v10);
  }
  LeaveCriticalSection(lpCriticalSection);
  return v4;
}
