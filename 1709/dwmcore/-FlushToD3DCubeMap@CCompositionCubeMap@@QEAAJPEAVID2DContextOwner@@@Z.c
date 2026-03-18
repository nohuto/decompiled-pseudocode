/*
 * XREFs of ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18015A2A0
 * Callers:
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015A4CC (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18015C540 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001AC40 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180028380 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800BE3B8 (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UID3D11Texture2D@@@?$ComPtr@UIDXGISurface@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Details@12@@Z @ 0x18015A168 (--$As@UID3D11Texture2D@@@-$ComPtr@UIDXGISurface@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UID.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z @ 0x1801A6388 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall CCompositionCubeMap::FlushToD3DCubeMap(CCompositionCubeMap *this, struct ID2DContextOwner *a2)
{
  __int64 v2; // r14
  unsigned int v5; // ebx
  signed int ExistingDevice; // eax
  unsigned int v7; // r15d
  struct CD3DDeviceLevel1 *v8; // r13
  unsigned int v9; // esi
  signed int D2DBitmapRealizationForContextOwner; // eax
  struct ID2D1Bitmap1 *v11; // rbx
  signed int v12; // eax
  signed int v13; // eax
  unsigned int v14; // r8d
  const struct tagPOINT *v16; // [rsp+30h] [rbp-20h]
  bool v17; // [rsp+38h] [rbp-18h]
  struct CD3DDeviceLevel1 *v18[2]; // [rsp+40h] [rbp-10h] BYREF
  struct ID2D1Bitmap1 *v19; // [rsp+90h] [rbp+40h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+50h] BYREF
  struct ID3D11Texture2D *v21; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0LL;
  v5 = 0;
  v18[0] = 0LL;
  if ( *((int *)this + 28) < 0 || !*((_BYTE *)this + 144) )
    goto LABEL_21;
  ExistingDevice = CD3DDeviceManager::GetExistingDevice(
                     (CD3DDeviceManager *)&g_D3DDeviceManager,
                     *(struct _LUID *)(*(_QWORD *)(*(_QWORD *)(32LL * *((unsigned int *)this + 28)
                                                             + *((_QWORD *)this + 10)
                                                             + 8)
                                                 + 88LL)
                                     + 176LL),
                     v18);
  v5 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ExistingDevice, 0x180u);
    goto LABEL_21;
  }
  v7 = 6;
  if ( !*((_BYTE *)this + 160) )
    v7 = *((_DWORD *)this + 26);
  v8 = v18[0];
  v9 = 0;
  if ( !v7 )
  {
LABEL_13:
    if ( *((_BYTE *)this + 160) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v8 + 82) + 432LL))(
        *((_QWORD *)v8 + 82),
        *((_QWORD *)this + 17));
    *((_BYTE *)this + 144) = 0;
    goto LABEL_21;
  }
  while ( 1 )
  {
    if ( !*(_QWORD *)(v2 + *((_QWORD *)this + 10) + 8) )
      goto LABEL_12;
    v20 = 0LL;
    v21 = 0LL;
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                            *(CCompositionSurfaceBitmap **)(v2 + *((_QWORD *)this + 10) + 8),
                                            a2,
                                            &v19);
    v5 = D2DBitmapRealizationForContextOwner;
    if ( D2DBitmapRealizationForContextOwner < 0 )
      break;
    v11 = v19;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    v12 = (*(__int64 (__fastcall **)(struct ID2D1Bitmap1 *, __int64 *))(*(_QWORD *)v11 + 104LL))(v11, &v20);
    v5 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x18Du);
      goto LABEL_19;
    }
    v13 = Microsoft::WRL::ComPtr<IDXGISurface>::As<ID3D11Texture2D>(&v20, (__int64 *)&v21);
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x18Fu);
      goto LABEL_19;
    }
    CD3DDeviceLevel1::CopyTextureRect(
      v8,
      v21,
      v14,
      (const struct tagRECT *)(32LL * v9 + *((_QWORD *)this + 10) + 16LL),
      *((struct ID3D11Texture2D **)this + 16),
      v9,
      v16,
      v17);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
LABEL_12:
    ++v9;
    v2 += 32LL;
    if ( v9 >= v7 )
      goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D2DBitmapRealizationForContextOwner, 0x18Bu);
LABEL_19:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
LABEL_21:
  ReleaseInterface<CD3DDeviceLevel1>((__int64 *)v18);
  return v5;
}
