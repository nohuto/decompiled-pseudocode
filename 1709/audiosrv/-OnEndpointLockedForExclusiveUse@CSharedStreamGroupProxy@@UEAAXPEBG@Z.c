/*
 * XREFs of ?OnEndpointLockedForExclusiveUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800944B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x18000D750 (-GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x180029EB0 (-DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030044 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSharedStreamGroupProxy::OnEndpointLockedForExclusiveUse(unsigned __int64 this, PCNZWCH lpString2)
{
  const WCHAR *v2; // r8
  struct ISaDeviceProxy *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(const WCHAR **)(this + 424);
  if ( v2 && CompareStringW(0x7Fu, 1u, v2, -1, lpString2, -1) == 2 )
  {
    v5 = 0LL;
    Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v5);
    if ( (*(int (__fastcall **)(CDeviceGraphStore *, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
           g_DeviceGraphStore,
           *(_QWORD *)(this + 48),
           &v5) >= 0 )
    {
      (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v5 + 96LL))(v5, &lpCriticalSection);
      v4 = 0LL;
      CBaseStreamGroupProxy::GetConnectedSaDevice((CBaseStreamGroupProxy *)this, &v4);
      if ( v4 )
        (*(void (__fastcall **)(CDeviceGraphManager *, _QWORD, struct ISaDeviceProxy *))(*(_QWORD *)g_DeviceGraphManager
                                                                                       + 48LL))(
          g_DeviceGraphManager,
          this & ((unsigned __int128)-(__int128)(this - 8) >> 64),
          v4);
      CSharedStreamGroupProxy::DeleteAuxiliaryInputStream((CSharedStreamGroupProxy *)this);
      if ( v4 )
        (*(void (__fastcall **)(CDeviceGraphManager *, _QWORD, struct ISaDeviceProxy *, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
          g_DeviceGraphManager,
          this & ((unsigned __int128)-(__int128)(this - 8) >> 64),
          v4,
          *(_DWORD *)(this + 136) == 0,
          0LL);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v4);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
    }
    Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v5);
  }
}
