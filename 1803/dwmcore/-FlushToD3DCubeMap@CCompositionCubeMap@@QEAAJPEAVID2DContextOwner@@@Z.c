/*
 * XREFs of ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x180183534
 * Callers:
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180183778 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180185584 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180089958 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800CB778 (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180186E54 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PE.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z @ 0x1801DF190 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall CCompositionCubeMap::FlushToD3DCubeMap(CCompositionCubeMap *this, struct ID2DContextOwner *a2)
{
  unsigned int v2; // ebx
  int ExistingDevice; // eax
  char v6; // al
  unsigned int v7; // r15d
  struct CD3DDeviceLevel1 *v8; // r13
  unsigned int v9; // r14d
  __int64 v10; // rsi
  int D2DBitmapRealizationForContextOwner; // eax
  struct ID2D1Bitmap1 *v12; // rbx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // r8d
  const struct tagPOINT *v17; // [rsp+30h] [rbp-20h]
  bool v18; // [rsp+38h] [rbp-18h]
  struct CD3DDeviceLevel1 *v19[2]; // [rsp+40h] [rbp-10h] BYREF
  struct ID2D1Bitmap1 *v20; // [rsp+90h] [rbp+40h] BYREF
  struct ID3D11Texture2D *v21; // [rsp+A0h] [rbp+50h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, struct ID3D11Texture2D **); // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  v19[0] = 0LL;
  if ( *((int *)this + 28) < 0 || !*((_BYTE *)this + 144) )
    goto LABEL_23;
  ExistingDevice = CD3DDeviceManager::GetExistingDevice(
                     (CD3DDeviceManager *)&g_D3DDeviceManager,
                     *(struct _LUID *)(*(_QWORD *)(*(_QWORD *)(32LL * *((unsigned int *)this + 28)
                                                             + *((_QWORD *)this + 10)
                                                             + 8)
                                                 + 88LL)
                                     + 176LL),
                     v19);
  v2 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ExistingDevice, 0x180u);
    goto LABEL_23;
  }
  v6 = *((_BYTE *)this + 160);
  v7 = 6;
  if ( !v6 )
    v7 = *((_DWORD *)this + 26);
  v8 = v19[0];
  v9 = 0;
  if ( !v7 )
  {
LABEL_15:
    if ( v6 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v8 + 82) + 432LL))(
        *((_QWORD *)v8 + 82),
        *((_QWORD *)this + 17));
    *((_BYTE *)this + 144) = 0;
    goto LABEL_23;
  }
  v10 = 0LL;
  while ( 1 )
  {
    if ( !*(_QWORD *)(v10 + *((_QWORD *)this + 10) + 8) )
      goto LABEL_13;
    v22 = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                            *(CCompositionSurfaceBitmap **)(v10 + *((_QWORD *)this + 10) + 8),
                                            a2,
                                            &v20);
    v2 = D2DBitmapRealizationForContextOwner;
    if ( D2DBitmapRealizationForContextOwner < 0 )
      break;
    v12 = v20;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
    v13 = (*(__int64 (__fastcall **)(struct ID2D1Bitmap1 *, __int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **)))(*(_QWORD *)v12 + 104LL))(
            v12,
            &v22);
    v2 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x18Du);
      goto LABEL_21;
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v21);
    v14 = (**v22)(v22, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v21);
    v2 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x18Fu);
      goto LABEL_21;
    }
    CD3DDeviceLevel1::CopyTextureRect(
      v8,
      v21,
      v15,
      (const struct tagRECT *)(32LL * v9 + *((_QWORD *)this + 10) + 16LL),
      *((struct ID3D11Texture2D **)this + 16),
      v9,
      v17,
      v18);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
LABEL_13:
    ++v9;
    v10 += 32LL;
    if ( v9 >= v7 )
    {
      v6 = *((_BYTE *)this + 160);
      goto LABEL_15;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DBitmapRealizationForContextOwner, 0x18Bu);
LABEL_21:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
LABEL_23:
  ReleaseInterface<CD3DDeviceLevel1>((__int64 *)v19);
  return v2;
}
