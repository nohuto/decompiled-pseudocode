/*
 * XREFs of ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042A64
 * Callers:
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180042064 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180043400 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x180045EC0 (-GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007F134 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800B63E8 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800C7EBC (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateNewDevice(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct _LUID a3,
        struct CD3DDeviceLevel1 **a4)
{
  struct CD3DDeviceLevel1 *v6; // rdi
  int v8; // eax
  CDXGIEnumeration *v9; // r15
  unsigned int v10; // esi
  int AdapterNoRefFromLuid; // eax
  __int64 *v12; // r12
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  struct CD3DDeviceLevel1 *v17; // rdi
  CSurfaceManager *v18; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  struct CD3DDeviceLevel1 *v22; // [rsp+30h] [rbp-48h] BYREF
  CDXGIEnumeration *v23; // [rsp+38h] [rbp-40h] BYREF
  struct CDXGIAdapterLimited *v24; // [rsp+40h] [rbp-38h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  v6 = 0LL;
  *a4 = 0LL;
  v22 = 0LL;
  v8 = CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, &v23);
  v9 = v23;
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v8, 0x24Fu);
  }
  else
  {
    AdapterNoRefFromLuid = CDXGIEnumeration::GetAdapterNoRefFromLuid(v23, a3, &v24);
    v10 = AdapterNoRefFromLuid;
    if ( AdapterNoRefFromLuid < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, AdapterNoRefFromLuid, 0x252u);
      goto LABEL_9;
    }
    v12 = (__int64 *)((char *)this + 128);
    v13 = DynArrayImpl<0>::Grow((int)this + 128, 40, 1, 0, 0LL);
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v13, 0x260u);
      goto LABEL_9;
    }
    v14 = CD3DDeviceLevel1::Create(a2, v24, this, &v22);
    v10 = v14;
    if ( v14 >= 0 )
    {
      v15 = *((unsigned int *)this + 38);
      *((_DWORD *)this + 38) = v15 + 1;
      v16 = *((unsigned int *)this + 60);
      if ( (unsigned int)v16 < (unsigned int)v15 )
      {
        v20 = *v12;
        v21 = 5 * v15;
        *(_OWORD *)(v20 + 8 * v21) = *(_OWORD *)(*v12 + 40 * v16);
        *(_OWORD *)(v20 + 8 * v21 + 16) = *(_OWORD *)(v20 + 40 * v16 + 16);
        *(_QWORD *)(v20 + 8 * v21 + 32) = *(_QWORD *)(v20 + 40 * v16 + 32);
      }
      v17 = v22;
      *(_QWORD *)(*v12 + 40LL * *((unsigned int *)this + 60)) = v22;
      *(_QWORD *)(*v12 + 40LL * *((unsigned int *)this + 60) + 8) = *((_QWORD *)v17 + 89);
      *(struct _GUID *)(*v12 + 40LL * *((unsigned int *)this + 60) + 16) = *a2;
      *(_BYTE *)(*v12 + 40LL * (unsigned int)(*((_DWORD *)this + 60))++ + 32) = CD3DDeviceManager::HardwareProtectionRequired(
                                                                                  this,
                                                                                  a3);
      *a4 = v17;
      v18 = (CSurfaceManager *)*((_QWORD *)this + 8);
      if ( v18 )
        CSurfaceManager::ResetTokenThread(v18);
      goto LABEL_9;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v14, 0x265u);
    v6 = v22;
  }
  if ( v6 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v6 + 488));
LABEL_9:
  if ( v9 )
    (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v9 + 8LL))(v9);
  return v10;
}
