/*
 * XREFs of ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180010EA8
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x18001A0A0 (-IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001A4D0 (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x18001AD64 (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x180076AF8 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801A57A4 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x180076BDC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x18008BD94 (-IsUpToDate@CDXGIEnumeration@@QEBA_NXZ.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C0360 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::EnsureDXGIEnumeration(CDisplayManager *this, struct CDXGIEnumeration **a2)
{
  unsigned int v4; // esi
  char v5; // bp
  struct CDXGIEnumeration **v6; // rbx
  CDXGIEnumeration *v7; // rcx
  struct CDXGIEnumeration *v8; // rcx
  CSurfaceManager *v10; // rcx
  int D3DObjects; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = (struct _RTL_CRITICAL_SECTION *)this;
  v4 = 0;
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  v6 = (struct CDXGIEnumeration **)((char *)this + 48);
  v7 = (CDXGIEnumeration *)*((_QWORD *)this + 6);
  if ( v7 && !CDXGIEnumeration::IsUpToDate(v7) )
  {
    ReleaseInterface<CRemoteApplicationWindow>((char *)this + 48);
    v5 = 1;
  }
  if ( !*v6 )
  {
    D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v7, (struct CDXGIEnumeration **)this + 6);
    TranslateDXGIorD3DErrorInContext((unsigned int)D3DObjects, 4LL, &D3DObjects);
    v4 = D3DObjects;
    if ( D3DObjects < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180202590, 1u, D3DObjects, 0x128u);
  }
  if ( v5 )
  {
    v10 = (CSurfaceManager *)*((_QWORD *)this + 8);
    if ( v10 )
      CSurfaceManager::ResetTokenThread(v10);
  }
  if ( a2 )
  {
    v8 = *v6;
    *a2 = *v6;
    if ( v8 )
      (**(void (__fastcall ***)(struct CDXGIEnumeration *))v8)(v8);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v4;
}
