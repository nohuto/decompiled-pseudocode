/*
 * XREFs of ?OnEndpointLockedForExclusiveUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800A68A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180009EB0 (-GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x18002BCA0 (-DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSharedStreamGroupProxy::OnEndpointLockedForExclusiveUse(unsigned __int64 this, PCNZWCH lpString2)
{
  const WCHAR *v2; // r8
  __int64 v4; // rcx
  struct ISaDeviceProxy *v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(const WCHAR **)(this + 392);
  if ( v2 && CompareStringW(0x7Fu, 1u, v2, -1, lpString2, -1) == 2 )
  {
    v6 = 0LL;
    if ( (*(int (__fastcall **)(CDeviceGraphStore *, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
           g_DeviceGraphStore,
           *(_QWORD *)(this + 40),
           &v6) >= 0 )
    {
      (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v6 + 88LL))(v6, &lpCriticalSection);
      v5 = 0LL;
      CBaseStreamGroupProxy::GetConnectedSaDevice((CBaseStreamGroupProxy *)this, &v5);
      if ( v5 )
        (*(void (__fastcall **)(CDeviceGraphManager *, _QWORD, struct ISaDeviceProxy *))(*(_QWORD *)g_DeviceGraphManager
                                                                                       + 48LL))(
          g_DeviceGraphManager,
          this & ((unsigned __int128)-(__int128)(this - 8) >> 64),
          v5);
      CSharedStreamGroupProxy::DeleteAuxiliaryInputStream((CSharedStreamGroupProxy *)this);
      if ( v5 )
        (*(void (__fastcall **)(CDeviceGraphManager *, _QWORD, struct ISaDeviceProxy *, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
          g_DeviceGraphManager,
          this & ((unsigned __int128)-(__int128)(this - 8) >> 64),
          v5,
          *(_DWORD *)(this + 128) == 0,
          0LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v5);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
    }
    v4 = v6;
    if ( v6 )
    {
      v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
}
