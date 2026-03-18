/*
 * XREFs of ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1802146D8
 * Callers:
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180213DF0 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802144B0 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802145AC (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180018DB8 (-GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180021E6C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DTexture@@@@YAXPEAVCD3DTexture@@@Z @ 0x180024ED4 (--$ReleaseInterfaceNoNULL@VCD3DTexture@@@@YAXPEAVCD3DTexture@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x180076570 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F30C (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F370 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1801DF1EC (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        FastRegion::Internal::CRgnData **a2,
        char a3)
{
  CMILPoolResource *v3; // rdi
  struct _LUID v5; // rdx
  int D3DDevice; // eax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D3DDevice, v19);
    goto LABEL_21;
  }
  v11 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, struct ID3D11Texture2D **))v20->lpVtbl->QueryInterface)(
          v20,
          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
          &v21);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1C2u);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1C8u);
    goto LABEL_16;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DTexture **))(**((_QWORD **)this + 52) + 240LL))(
          *((_QWORD *)this + 52),
          &v29);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1CAu);
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
  ReleaseInterfaceNoNULL<CD3DTexture>(v29);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v20);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v21);
  return v10;
}
