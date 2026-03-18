/*
 * XREFs of ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1801D2828
 * Callers:
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801D1F3C (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801D2600 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801D26FC (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001B0E8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800216F4 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800308F0 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180030950 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x18004C9E8 (-GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180081200 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1801A63E4 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        FastRegion::Internal::CRgnData **a2,
        char a3)
{
  CMILPoolResource *v3; // rdi
  struct _LUID v5; // rdx
  signed int D3DDevice; // eax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  signed int v11; // eax
  signed int v12; // eax
  signed int v13; // eax
  struct CD3DTexture *v14; // r14
  struct CD3DTexture *v15; // r12
  LONG v16; // r9d
  FastRegion::Internal::CRgnData *v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-60h]
  struct IDXGIResource *v20; // [rsp+30h] [rbp-50h] BYREF
  struct ID3D11Texture2D *v21; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT v22; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v23[8]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-28h]
  LONG *v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+70h] [rbp-10h]
  struct tagPOINT v28; // [rsp+C0h] [rbp+40h] BYREF
  struct CD3DTexture *v29; // [rsp+D8h] [rbp+58h] BYREF

  *(_QWORD *)&v22.left = 0LL;
  v3 = 0LL;
  v29 = 0LL;
  v5 = (struct _LUID)*((_QWORD *)this + 36);
  v20 = 0LL;
  v21 = 0LL;
  v28 = 0LL;
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                v5,
                (struct CD3DDeviceLevel1 **)&v22);
  v9 = *(_QWORD *)&v22.left;
  v10 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v19 = 446;
    goto LABEL_20;
  }
  D3DDevice = CD2DBitmap::GetDXGIResource(*((CD2DBitmap **)this + 49), &v20);
  v10 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v19 = 449;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D3DDevice, v19);
    goto LABEL_21;
  }
  v11 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, struct ID3D11Texture2D **))v20->lpVtbl->QueryInterface)(
          v20,
          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
          &v21);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x1C2u);
    goto LABEL_21;
  }
  v12 = CD3DVidMemOnlyTexture::CreateFromTexture(
          v21,
          0,
          0,
          (struct CD3DDeviceLevel1 *)v9,
          (struct CD3DVidMemOnlyTexture **)&v28);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x1C8u);
    goto LABEL_16;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DTexture **))(**((_QWORD **)this + 52) + 200LL))(
          *((_QWORD *)this + 52),
          &v29);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x1CAu);
LABEL_16:
    v3 = (CMILPoolResource *)v28;
    goto LABEL_21;
  }
  v3 = (CMILPoolResource *)v28;
  if ( a3 )
  {
    v14 = v29;
    v15 = (struct CD3DTexture *)v28;
  }
  else
  {
    v15 = v29;
    v14 = (struct CD3DTexture *)v28;
  }
  FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)v23);
  while ( (unsigned __int64)v25 < v24 )
  {
    v16 = *v25;
    v22.bottom = v25[2];
    v22.top = v16;
    v28.y = v16;
    v22.left = *(_DWORD *)(v26 + 8LL * v27);
    v28.x = v22.left;
    v22.right = *(_DWORD *)(v26 + 4LL * (2 * v27 + 1));
    CD3DDeviceLevel1::CopyTextureRect((CD3DDeviceLevel1 *)v9, v14, &v22, v15, &v28);
    FastRegion::Internal::CRgnData::StepIterator(v17, (struct FastRegion::CRegion::Iterator *)v23);
  }
  if ( a3 )
    CD3DDeviceLevel1::Flush((CD3DDeviceLevel1 *)v9);
LABEL_21:
  if ( v9 )
    CMILPoolResource::Release((CMILPoolResource *)(v9 + 472));
  if ( v3 )
    CMILPoolResource::Release(v3);
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v29);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v20);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v21);
  return v10;
}
