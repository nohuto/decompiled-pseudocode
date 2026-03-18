/*
 * XREFs of ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800968C8
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180075F10 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x180096D24 (-D2DRemoveClip@CD2DContext@@IEAAXXZ.c)
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x180096D74 (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 *     ?CreateDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z @ 0x1800C1AA4 (-CreateDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z.c)
 *     ?Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z @ 0x1800C9560 (-Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z.c)
 *     ?Create@CD2DBitmapBrushWrapper@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800D6074 (-Create@CD2DBitmapBrushWrapper@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::InitializeD2D(struct CD2DResourceManager **this, struct IDXGIDeviceDWM *a2)
{
  int v4; // eax
  CD3DDeviceManager *v5; // rcx
  int v6; // ebx
  int D2DFactoryNoRef; // eax
  int v8; // eax
  _QWORD *v9; // rsi
  int Device; // eax
  int v11; // eax
  int v12; // eax
  struct ID2D1DeviceContext **v13; // r14
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct ID2D1DeviceContext *v17; // rcx
  int v18; // eax
  int v19; // eax
  unsigned int v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-18h] BYREF

  v23 = 0LL;
  v22 = 0LL;
  v4 = CD2DResourceManager::Create((struct CD2DContext *)this, this + 18);
  v21 = v4;
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x24u);
  }
  else
  {
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v5, this + 19);
    v21 = D2DFactoryNoRef;
    v6 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DFactoryNoRef, 0x26u);
    }
    else
    {
      v8 = (**(__int64 (__fastcall ***)(struct IDXGIDeviceDWM *, GUID *, __int64 *))a2)(
             a2,
             &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
             &v23);
      v21 = v8;
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x28u);
      }
      else
      {
        v9 = this + 20;
        Device = CD2DFactory::CreateDevice(this[19], a2, this + 20);
        v21 = Device;
        v6 = Device;
        if ( Device < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Device, 0x2Du);
        }
        else
        {
          v11 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v9)(
                  *v9,
                  &GUID_46fdbfea_53f8_440c_b9e2_81dfec612a72,
                  (char *)this + 168);
          v21 = v11;
          v6 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x2Fu);
          }
          else
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v9 + 32LL))(*v9, 0LL, &v22);
            v21 = v12;
            v6 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x32u);
            }
            else
            {
              v13 = this + 22;
              v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v22)(
                      v22,
                      &GUID_394ea6a3_0c34_4321_950b_6ca20f0be6c7,
                      (char *)this + 176);
              v21 = v14;
              v6 = v14;
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x34u);
              }
              else
              {
                v15 = (**(__int64 (__fastcall ***)(struct ID2D1DeviceContext *, GUID *, char *))*v13)(
                        *v13,
                        &GUID_2ea67ed7_d42e_4c07_9dd5_a91ea23e01d2,
                        (char *)this + 184);
                v21 = v15;
                v6 = v15;
                if ( v15 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x36u);
                }
                else
                {
                  v16 = CD2DBitmapBrushWrapper::Create(*v13, this + 37);
                  v21 = v16;
                  v6 = v16;
                  if ( v16 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x3Cu);
                  }
                  else
                  {
                    v17 = *v13;
                    v24[0] = 0LL;
                    v24[1] = 0LL;
                    v18 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, _QWORD *, _QWORD, char *))(*(_QWORD *)v17 + 64LL))(
                            v17,
                            v24,
                            0LL,
                            (char *)this + 304);
                    v21 = v18;
                    v6 = v18;
                    if ( v18 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x3Fu);
                    }
                    else
                    {
                      v19 = CD2DContext::PopulateEffectTable((CD2DContext *)this);
                      v21 = v19;
                      v6 = v19;
                      if ( v19 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x41u);
                      }
                      else
                      {
                        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v9 + 48LL))(*v9, 0x40000000LL);
                        CD2DContext::D2DRemoveClip((CD2DContext *)this);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<IWICBitmap>(v23);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  TranslateDXGIorD3DErrorInContext(v6, 0, &v21);
  return v21;
}
