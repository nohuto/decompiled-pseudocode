/*
 * XREFs of ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008909C
 * Callers:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18001F0FC (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18002030C (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180088C74 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x18008906C (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800CA4B0 (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 *     ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x1800CAC34 (-GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateNewDevice(
        CSurfaceManager **this,
        struct _LUID a2,
        struct CD3DDeviceLevel1 **a3)
{
  struct CD3DDeviceLevel1 *v5; // rdi
  int v7; // eax
  CDXGIEnumeration *v8; // r15
  int v9; // esi
  int AdapterNoRefFromLuid; // eax
  __int64 *v11; // r12
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct CD3DDeviceLevel1 *v15; // rdi
  CSurfaceManager *v16; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // eax
  struct CDXGIAdapterLimited *v21; // [rsp+30h] [rbp-38h] BYREF
  struct CD3DDeviceLevel1 *v22; // [rsp+80h] [rbp+18h] BYREF
  CDXGIEnumeration *v23; // [rsp+88h] [rbp+20h] BYREF

  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v5 = 0LL;
  *a3 = 0LL;
  v7 = CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, &v23);
  v8 = v23;
  v9 = v7;
  if ( v7 < 0 )
  {
    v20 = 591;
  }
  else
  {
    AdapterNoRefFromLuid = CDXGIEnumeration::GetAdapterNoRefFromLuid(v23, a2, &v21);
    v9 = AdapterNoRefFromLuid;
    if ( AdapterNoRefFromLuid < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, AdapterNoRefFromLuid, 0x252u);
      goto LABEL_9;
    }
    CD3DDeviceManager::DeleteUnusableDevices((CD3DDeviceManager *)this);
    v11 = (__int64 *)(this + 16);
    v12 = DynArrayImpl<0>::Grow((__int64)(this + 16), 0x18u, 1, 0, 0LL);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v12, 0x266u);
      goto LABEL_9;
    }
    v9 = CD3DDeviceLevel1::Create(v21, (struct IMILPoolManager *)this, &v22);
    if ( v9 >= 0 )
    {
      v13 = *((unsigned int *)this + 38);
      *((_DWORD *)this + 38) = v13 + 1;
      v14 = *((unsigned int *)this + 52);
      if ( (unsigned int)v14 < (unsigned int)v13 )
      {
        v18 = *v11;
        v19 = 3 * v13;
        *(_OWORD *)(v18 + 8 * v19) = *(_OWORD *)(*v11 + 24 * v14);
        *(_QWORD *)(v18 + 8 * v19 + 16) = *(_QWORD *)(v18 + 24 * v14 + 16);
        v14 = *((unsigned int *)this + 52);
      }
      v15 = v22;
      *(_QWORD *)(*v11 + 24 * v14) = v22;
      *(_QWORD *)(*v11 + 24LL * *((unsigned int *)this + 52) + 8) = *((_QWORD *)v15 + 91);
      *(_BYTE *)(*v11 + 24LL * (unsigned int)(*((_DWORD *)this + 52))++ + 16) = CD3DDeviceManager::HardwareProtectionRequired(
                                                                                  (CD3DDeviceManager *)this,
                                                                                  a2);
      *a3 = v15;
      v16 = this[8];
      if ( v16 )
        CSurfaceManager::ResetTokenThread(v16);
      goto LABEL_9;
    }
    v5 = v22;
    v20 = 618;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v9, v20);
  if ( v5 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v5 + 472));
LABEL_9:
  if ( v8 )
    (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v8 + 8LL))(v8);
  return (unsigned int)v9;
}
