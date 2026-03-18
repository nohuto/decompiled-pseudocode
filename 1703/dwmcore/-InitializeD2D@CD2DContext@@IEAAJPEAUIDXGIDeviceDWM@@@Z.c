/*
 * XREFs of ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800AE7B8
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180078824 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800429E0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?CreateDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z @ 0x18004C210 (-CreateDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x1800AC694 (-D2DRemoveClip@CD2DContext@@IEAAXXZ.c)
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x1800AC718 (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 *     ?Create@CD2DBitmapBrushWrapper@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800C81B8 (-Create@CD2DBitmapBrushWrapper@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 *     ?Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z @ 0x1800CA5A8 (-Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::InitializeD2D(
        struct CD2DResourceManager **this,
        __int64 (__fastcall ***a2)(struct IDXGIDeviceDWM *, GUID *, __int64 *))
{
  int v4; // eax
  CD3DDeviceManager *v5; // rcx
  int v6; // ebx
  int D2DFactoryNoRef; // eax
  int v8; // eax
  _QWORD *v9; // r14
  int Device; // eax
  int v11; // eax
  int v12; // eax
  struct ID2D1DeviceContext **v13; // rsi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct ID2D1DeviceContext *v18; // rcx
  int v19; // eax
  int v20; // eax
  unsigned int v22; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-18h] BYREF

  v24 = 0LL;
  v23 = 0LL;
  v4 = CD2DResourceManager::Create((struct CD2DContext *)this, this + 18);
  v22 = v4;
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x24u);
  }
  else
  {
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v5, this + 19);
    v22 = D2DFactoryNoRef;
    v6 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0x26u);
    }
    else
    {
      v8 = (**a2)((struct IDXGIDeviceDWM *)a2, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, &v24);
      v22 = v8;
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x28u);
      }
      else
      {
        v9 = this + 20;
        Device = CD2DFactory::CreateDevice(this[19], a2, this + 20);
        v22 = Device;
        v6 = Device;
        if ( Device < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, Device, 0x2Du);
        }
        else
        {
          v11 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v9)(
                  *v9,
                  &GUID_46fdbfea_53f8_440c_b9e2_81dfec612a72,
                  (char *)this + 168);
          v22 = v11;
          v6 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2Fu);
          }
          else
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v9 + 32LL))(*v9, 0LL, &v23);
            v22 = v12;
            v6 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x32u);
            }
            else
            {
              v13 = this + 22;
              v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v23)(
                      v23,
                      &GUID_394ea6a3_0c34_4321_950b_6ca20f0be6c7,
                      (char *)this + 176);
              v22 = v14;
              v6 = v14;
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x34u);
              }
              else
              {
                v15 = (**(__int64 (__fastcall ***)(struct ID2D1DeviceContext *, GUID *, char *))*v13)(
                        *v13,
                        &GUID_2ea67ed7_d42e_4c07_9dd5_a91ea23e01d2,
                        (char *)this + 184);
                v22 = v15;
                v6 = v15;
                if ( v15 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x36u);
                }
                else
                {
                  v16 = (**(__int64 (__fastcall ***)(struct ID2D1DeviceContext *, GUID *, char *))*v13)(
                          *v13,
                          &GUID_fbf7424d_cda8_418e_a508_cd1e58a113fb,
                          (char *)this + 192);
                  v22 = v16;
                  v6 = v16;
                  if ( v16 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x37u);
                  }
                  else
                  {
                    v17 = CD2DBitmapBrushWrapper::Create(*v13, this + 40);
                    v22 = v17;
                    v6 = v17;
                    if ( v17 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x3Du);
                    }
                    else
                    {
                      v18 = *v13;
                      v25[0] = 0LL;
                      v25[1] = 0LL;
                      v19 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, _QWORD *, _QWORD, char *))(*(_QWORD *)v18 + 64LL))(
                              v18,
                              v25,
                              0LL,
                              (char *)this + 328);
                      v22 = v19;
                      v6 = v19;
                      if ( v19 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x40u);
                      }
                      else
                      {
                        v20 = CD2DContext::PopulateEffectTable((CD2DContext *)this);
                        v22 = v20;
                        v6 = v20;
                        if ( v20 < 0 )
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x42u);
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
  }
  ReleaseInterfaceNoNULL<CD2DPencil>(v24);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  TranslateDXGIorD3DErrorInContext(v6, 0, &v22);
  return v22;
}
