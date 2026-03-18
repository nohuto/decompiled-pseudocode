/*
 * XREFs of ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x18000CE70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180008F14 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18000DD28 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C340 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180089958 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualCapture::EnsureRenderTargets(CVisualCapture *this)
{
  __int64 v1; // rsi
  int v3; // ebx
  struct _LUID *v4; // rsi
  struct CBitmapRealization *RenderingRealizationNoRef; // r14
  int ExistingDevice; // eax
  __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-50h]
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  struct CD3DDeviceLevel1 *v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v19[16]; // [rsp+58h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 52);
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
                v7 = v14;
                if ( v14 )
                  v7 = v14 + 216;
                v18 = v7;
                v8 = *((_DWORD *)this + 74);
                v9 = v8 + 1;
                v3 = v8 + 1 < v8 ? 0x80070216 : 0;
                if ( v8 + 1 < v8 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
                }
                else if ( v9 > *((_DWORD *)this + 73) )
                {
                  v12 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 272, 8LL, 1LL, &v18);
                  v3 = v12;
                  if ( v12 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xC0u);
                }
                else
                {
                  *(_QWORD *)(*((_QWORD *)this + 34) + 8LL * v8) = v18;
                  *((_DWORD *)this + 74) = v9;
                }
                if ( v3 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277348, 2u, v3, 0x51u);
                }
                else
                {
                  v10 = *((_DWORD *)this + 106);
                  v14 = 0LL;
                  *((_DWORD *)this + 90) = v10;
                  *((_DWORD *)this + 91) = *((_DWORD *)this + 107);
                }
                goto LABEL_15;
              }
              v13 = 79;
            }
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277348, 2u, ExistingDevice, v13);
LABEL_15:
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v14);
        Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(&v15);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v16);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      }
    }
  }
  return (unsigned int)v3;
}
