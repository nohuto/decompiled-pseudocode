/*
 * XREFs of ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800457B4
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180020D0C (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x180043D34 (-D2DRemoveClip@CD2DContext@@IEAAXXZ.c)
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x180043DF0 (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD2DBitmapBrushWrapper@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800864F0 (-Create@CD2DBitmapBrushWrapper@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 *     ?CreateDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z @ 0x1800BA250 (-CreateDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z.c)
 *     ?Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z @ 0x1800C060C (-Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

__int64 __fastcall CD2DContext::InitializeD2D(struct CD2DResourceManager **this, struct IDXGIDeviceDWM *a2)
{
  int Device; // eax
  int v5; // ebx
  enum D2D1_FACTORY_TYPE v6; // ecx
  struct CD2DFactory *v7; // rax
  _QWORD *v8; // r14
  struct ID2D1DeviceContext **v9; // r15
  struct ID2D1DeviceContext *v10; // rcx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-40h]
  unsigned int v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-18h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  Device = CD2DResourceManager::Create((struct CD2DContext *)this, this + 18);
  v15 = Device;
  v5 = Device;
  if ( Device < 0 )
  {
    v14 = 34;
    goto LABEL_37;
  }
  EnterCriticalSection(&CriticalSection);
  v7 = qword_18026EF28;
  v5 = 0;
  if ( qword_18026EF28 )
    goto LABEL_3;
  v12 = CD2DFactory::Create(v6, 0, &qword_18026EF28);
  v5 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x10Fu);
    goto LABEL_25;
  }
  v13 = CMesh2DEffect::Register(qword_18026EF28);
  v5 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x13Fu);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x111u);
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x3FFu);
    goto LABEL_4;
  }
  v7 = qword_18026EF28;
LABEL_3:
  this[19] = v7;
LABEL_4:
  LeaveCriticalSection(&CriticalSection);
  v15 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x24u);
    goto LABEL_15;
  }
  Device = (**(__int64 (__fastcall ***)(struct IDXGIDeviceDWM *, GUID *, __int64 *))a2)(
             a2,
             &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
             &v17);
  v15 = Device;
  v5 = Device;
  if ( Device < 0 )
  {
    v14 = 38;
  }
  else
  {
    v8 = this + 20;
    Device = CD2DFactory::CreateDevice(this[19], a2, this + 20);
    v15 = Device;
    v5 = Device;
    if ( Device < 0 )
    {
      v14 = 43;
    }
    else
    {
      Device = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v8)(
                 *v8,
                 &GUID_46fdbfea_53f8_440c_b9e2_81dfec612a72,
                 (char *)this + 168);
      v15 = Device;
      v5 = Device;
      if ( Device < 0 )
      {
        v14 = 45;
      }
      else
      {
        Device = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v8 + 32LL))(*v8, 0LL, &v16);
        v15 = Device;
        v5 = Device;
        if ( Device < 0 )
        {
          v14 = 48;
        }
        else
        {
          v9 = this + 22;
          Device = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v16)(
                     v16,
                     &GUID_394ea6a3_0c34_4321_950b_6ca20f0be6c7,
                     (char *)this + 176);
          v15 = Device;
          v5 = Device;
          if ( Device < 0 )
          {
            v14 = 50;
          }
          else
          {
            Device = (**(__int64 (__fastcall ***)(struct ID2D1DeviceContext *, GUID *, char *))*v9)(
                       *v9,
                       &GUID_2ea67ed7_d42e_4c07_9dd5_a91ea23e01d2,
                       (char *)this + 184);
            v15 = Device;
            v5 = Device;
            if ( Device < 0 )
            {
              v14 = 52;
            }
            else
            {
              Device = CD2DBitmapBrushWrapper::Create(*v9, this + 37);
              v15 = Device;
              v5 = Device;
              if ( Device < 0 )
              {
                v14 = 58;
              }
              else
              {
                v10 = *v9;
                v18[0] = 0LL;
                v18[1] = 0LL;
                Device = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, _QWORD *, _QWORD, char *))(*(_QWORD *)v10 + 64LL))(
                           v10,
                           v18,
                           0LL,
                           (char *)this + 304);
                v15 = Device;
                v5 = Device;
                if ( Device < 0 )
                {
                  v14 = 61;
                }
                else
                {
                  Device = CD2DContext::PopulateEffectTable((CD2DContext *)this);
                  v15 = Device;
                  v5 = Device;
                  if ( Device >= 0 )
                  {
                    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v8 + 48LL))(*v8, 0x40000000LL);
                    CD2DContext::D2DRemoveClip((CD2DContext *)this);
                    goto LABEL_15;
                  }
                  v14 = 63;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_37:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Device, v14);
LABEL_15:
  ReleaseInterfaceNoNULL<CManipulationManager>(v17);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  TranslateDXGIorD3DErrorInContext(v5, 0, &v15);
  return v15;
}
