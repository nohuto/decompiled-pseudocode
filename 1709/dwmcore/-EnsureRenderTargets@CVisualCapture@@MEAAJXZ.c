/*
 * XREFs of ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x180078E20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001AC40 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18004AE00 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x180079534 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C0C38 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualCapture::EnsureRenderTargets(CVisualCapture *this)
{
  __int64 v1; // rsi
  signed int v3; // ebx
  struct _LUID *v4; // rsi
  struct CBitmapRealization *RenderingRealizationNoRef; // r14
  signed int ExistingDevice; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // eax
  signed int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-50h]
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  struct CD3DDeviceLevel1 *v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v19[16]; // [rsp+58h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 45);
  v3 = -2003292412;
  if ( v1 )
  {
    v4 = *(struct _LUID **)(v1 + 88);
    if ( v4 )
    {
      RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef((CCompositionSurfaceInfo *)v4);
      if ( RenderingRealizationNoRef )
      {
        v17 = 0LL;
        v16 = 0LL;
        v15 = 0LL;
        v14 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
        ExistingDevice = (*(__int64 (__fastcall **)(struct CBitmapRealization *, _QWORD, _QWORD))(*(_QWORD *)RenderingRealizationNoRef
                                                                                                + 56LL))(
                           RenderingRealizationNoRef,
                           &v17,
                           0LL);
        v3 = ExistingDevice;
        if ( ExistingDevice < 0 )
        {
          v13 = 65;
        }
        else
        {
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v16);
          ExistingDevice = (**v17)(v17, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v16);
          v3 = ExistingDevice;
          if ( ExistingDevice < 0 )
          {
            v13 = 67;
          }
          else
          {
            Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(&v15);
            ExistingDevice = CD3DDeviceManager::GetExistingDevice(
                               (CD3DDeviceManager *)&g_D3DDeviceManager,
                               v4[22],
                               &v15);
            v3 = ExistingDevice;
            if ( ExistingDevice < 0 )
            {
              v13 = 71;
            }
            else
            {
              (*(void (__fastcall **)(__int64, _BYTE *))(*((_QWORD *)RenderingRealizationNoRef + 18) + 24LL))(
                (__int64)RenderingRealizationNoRef + 144,
                v19);
              Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v14);
              ExistingDevice = CHwTextureRenderTarget::CreateFromTexture(
                                 v15,
                                 (unsigned int)DisplayId::All,
                                 v19,
                                 v16,
                                 &v14);
              v3 = ExistingDevice;
              if ( ExistingDevice >= 0 )
              {
                if ( v14 )
                  v18 = v14 + 192;
                else
                  v18 = 0LL;
                v7 = v14;
                v8 = *((unsigned int *)this + 60);
                v9 = v8 + 1;
                if ( (int)v8 + 1 >= (unsigned int)v8 )
                  v7 = v8 + 1;
                v3 = v9 < (unsigned int)v8 ? 0x80070216 : 0;
                if ( v9 < (unsigned int)v8 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
                }
                else if ( v7 > *((_DWORD *)this + 59) )
                {
                  v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 216, 8u, 1, &v18);
                  v3 = v12;
                  if ( v12 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xC0u);
                }
                else
                {
                  *(_QWORD *)(*((_QWORD *)this + 27) + 8 * v8) = v18;
                  *((_DWORD *)this + 60) = v7;
                }
                if ( v3 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180201D18, 2u, v3, 0x51u);
                }
                else
                {
                  v10 = *((_DWORD *)this + 92);
                  v14 = 0LL;
                  *((_DWORD *)this + 76) = v10;
                  *((_DWORD *)this + 77) = *((_DWORD *)this + 93);
                }
                goto LABEL_17;
              }
              v13 = 79;
            }
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180201D18, 2u, ExistingDevice, v13);
LABEL_17:
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v14);
        Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(&v15);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v16);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      }
    }
  }
  return (unsigned int)v3;
}
