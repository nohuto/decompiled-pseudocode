/*
 * XREFs of ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001A4D0
 * Callers:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001B0E8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180010EA8 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x18001B188 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180074AB0 (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x180076BDC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x18008BDE4 (-GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateNewDevice(
        CD3DDeviceManager *this,
        struct _LUID a2,
        struct CD3DDeviceLevel1 **a3)
{
  struct CD3DDeviceLevel1 *v5; // rdi
  int v7; // eax
  CDXGIEnumeration *v8; // r15
  unsigned int v9; // esi
  int AdapterNoRefFromLuid; // eax
  __int64 *v11; // r12
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct CD3DDeviceLevel1 *v16; // rdi
  CSurfaceManager *v17; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  struct CDXGIAdapterLimited *v21; // [rsp+30h] [rbp-38h] BYREF
  struct CD3DDeviceLevel1 *v22; // [rsp+80h] [rbp+18h] BYREF
  CDXGIEnumeration *v23; // [rsp+88h] [rbp+20h] BYREF

  v23 = 0LL;
  v21 = 0LL;
  v5 = 0LL;
  *a3 = 0LL;
  v22 = 0LL;
  v7 = CDisplayManager::EnsureDXGIEnumeration((CDisplayManager *)&g_DisplayManager, &v23);
  v8 = v23;
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, v7, 0x251u);
  }
  else
  {
    AdapterNoRefFromLuid = CDXGIEnumeration::GetAdapterNoRefFromLuid(v23, a2, &v21);
    v9 = AdapterNoRefFromLuid;
    if ( AdapterNoRefFromLuid < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, AdapterNoRefFromLuid, 0x254u);
      goto LABEL_9;
    }
    v11 = (__int64 *)((char *)this + 128);
    v12 = DynArrayImpl<0>::Grow((int)this + 128, 24, 1, 0, 0LL);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, v12, 0x262u);
      goto LABEL_9;
    }
    v13 = CD3DDeviceLevel1::Create(v21, this, &v22);
    v9 = v13;
    if ( v13 >= 0 )
    {
      v14 = *((unsigned int *)this + 38);
      *((_DWORD *)this + 38) = v14 + 1;
      v15 = *((unsigned int *)this + 52);
      if ( (unsigned int)v15 < (unsigned int)v14 )
      {
        v19 = *v11;
        v20 = 3 * v14;
        *(_OWORD *)(v19 + 8 * v20) = *(_OWORD *)(*v11 + 24 * v15);
        *(_QWORD *)(v19 + 8 * v20 + 16) = *(_QWORD *)(v19 + 24 * v15 + 16);
      }
      v16 = v22;
      *(_QWORD *)(*v11 + 24LL * *((unsigned int *)this + 52)) = v22;
      *(_QWORD *)(*v11 + 24LL * *((unsigned int *)this + 52) + 8) = *((_QWORD *)v16 + 91);
      *(_BYTE *)(*v11 + 24LL * (unsigned int)(*((_DWORD *)this + 52))++ + 16) = CD3DDeviceManager::HardwareProtectionRequired(
                                                                                  this,
                                                                                  a2);
      *a3 = v16;
      v17 = (CSurfaceManager *)*((_QWORD *)this + 8);
      if ( v17 )
        CSurfaceManager::ResetTokenThread(v17);
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, v13, 0x266u);
    v5 = v22;
  }
  if ( v5 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v5 + 472));
LABEL_9:
  if ( v8 )
    (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v8 + 8LL))(v8);
  return v9;
}
