/*
 * XREFs of ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800FD46C
 * Callers:
 *     ?SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800FD140 (-SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z @ 0x1800FD1D0 (-GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z.c)
 *     ?IsEqualObject@?$CComPtrBase@UIAudioMuteAPO@@@ATL@@QEAA_NPEAUIUnknown@@@Z @ 0x1800FD2E0 (-IsEqualObject@-$CComPtrBase@UIAudioMuteAPO@@@ATL@@QEAA_NPEAUIUnknown@@@Z.c)
 *     ?IsNeverSetAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800FD390 (-IsNeverSetAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL.c)
 *     ?PublishChangeNotification@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x1800FD3C0 (-PublishChangeNotification@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_i.c)
 *     ?SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x1800FDA48 (-SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CDefaultDeviceManager::SetDefaultEndpoint(__int64 a1, __int64 a2, unsigned int a3)
{
  int Instance; // ebx
  __int64 v6; // rdi
  unsigned int v7; // r14d
  __int64 v8; // r8
  struct IUnknown *v9; // rcx
  __int64 v10; // r14
  unsigned int v11; // edi
  __int64 v12; // r8
  struct IUnknown *v13; // rcx
  unsigned int v14; // edi
  struct IUnknown *v16; // [rsp+30h] [rbp-50h] BYREF
  struct IUnknown *v17; // [rsp+38h] [rbp-48h] BYREF
  struct IUnknown *v18; // [rsp+40h] [rbp-40h] BYREF
  struct IUnknown *v19; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-30h] BYREF
  struct IUnknown *v21; // [rsp+58h] [rbp-28h] BYREF
  LPVOID ppv[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+30h] BYREF
  int v25; // [rsp+B4h] [rbp+34h]
  unsigned int v26; // [rsp+C8h] [rbp+48h] BYREF

  v25 = HIDWORD(a1);
  ppv[1] = (LPVOID)-2LL;
  ppv[0] = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v24 = 0;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               ppv);
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(LPVOID, __int64, struct IUnknown **))(*(_QWORD *)ppv[0] + 40LL))(
                 ppv[0],
                 a2,
                 &v19);
    if ( Instance >= 0 )
    {
      if ( !ATL::CComPtrBase<IAudioMuteAPO>::IsEqualObject((void (__fastcall ****)(_QWORD, GUID *, __int64 *))&v21, v19) )
        ATL::AtlComQIPtrAssign(&v21, v19, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      if ( !v21
        || (((void (__fastcall *)(struct IUnknown *, unsigned int *))v21->lpVtbl[1].QueryInterface)(v21, &v26),
            (unsigned int)IsNeverSetAsDefault((__int64)v19, v26, a3)) )
      {
        Instance = -2147467259;
      }
      else
      {
        Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, struct IUnknown **))(*(_QWORD *)ppv[0] + 24LL))(
                     ppv[0],
                     v26,
                     1LL,
                     &v18);
        if ( Instance >= 0 )
        {
          Instance = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v18->lpVtbl[1].QueryInterface)(
                       v18,
                       &v24);
          if ( Instance >= 0 )
          {
            if ( v24 )
            {
              v6 = -1LL;
              v7 = 0;
              while ( 1 )
              {
                v16 = 0LL;
                Instance = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v18->lpVtbl[1].AddRef)(
                             v18,
                             v7,
                             &v16);
                if ( Instance < 0 )
                  break;
                if ( !(unsigned int)IsNeverSetAsDefault((__int64)v16, v26, a3)
                  && (int)GetEndpointLevel(v16, a3, &v17) >= 0
                  && v6 <= (__int64)v17 )
                {
                  v6 = (__int64)v17;
                }
                if ( v16 )
                  ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
                if ( ++v7 >= v24 )
                {
                  if ( v6 == -1 )
                    v8 = 1LL;
                  else
                    v8 = v6 + 2;
                  v10 = 0LL;
                  if ( v6 != -1 )
                    v10 = v6 + 1;
                  Instance = SetEndpointLevels(v19, a3, v8);
                  if ( Instance < 0 )
                    goto LABEL_59;
                  v11 = 0;
                  if ( v24 )
                  {
                    while ( 1 )
                    {
                      v16 = 0LL;
                      Instance = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v18->lpVtbl[1].AddRef)(
                                   v18,
                                   v11,
                                   &v16);
                      if ( Instance < 0 )
                        break;
                      if ( !(unsigned int)IsNeverSetAsDefault((__int64)v16, v26, a3)
                        && (int)GetEndpointLevel(v16, a3, &v23) < 0 )
                      {
                        v17 = 0LL;
                        v20 = 0;
                        v9 = v16;
                        if ( !v16 )
                          goto LABEL_73;
                        ATL::AtlComQIPtrAssign(&v17, v16, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
                        if ( !v17 )
                        {
                          v9 = v16;
LABEL_73:
                          Instance = -2147024809;
                          goto LABEL_24;
                        }
                        Instance = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, unsigned int *))v17->lpVtbl[3].QueryInterface)(
                                     v17,
                                     a3,
                                     &v20);
                        if ( Instance < 0 )
                        {
                          v13 = v17;
LABEL_69:
                          if ( v13 )
                            ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
                          goto LABEL_23;
                        }
                        v12 = v10;
                        if ( v20 < 0x60000000 )
                          v12 = 0LL;
                        Instance = SetEndpointLevels(v16, a3, v12);
                        v13 = v17;
                        if ( Instance < 0 )
                          goto LABEL_69;
                        if ( v17 )
                          ((void (*)(void))v17->lpVtbl->Release)();
                      }
                      if ( v16 )
                        ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
                      if ( ++v11 >= v24 )
                        goto LABEL_45;
                    }
                  }
                  else
                  {
LABEL_45:
                    if ( v18 )
                      ATL::AtlComPtrAssign(&v18, 0LL);
                    Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, struct IUnknown **))(*(_QWORD *)ppv[0] + 24LL))(
                                 ppv[0],
                                 v26,
                                 14LL,
                                 &v18);
                    if ( Instance < 0 )
                      goto LABEL_59;
                    Instance = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v18->lpVtbl[1].QueryInterface)(
                                 v18,
                                 &v24);
                    if ( Instance < 0 )
                      goto LABEL_59;
                    v14 = 0;
                    if ( !v24 )
                    {
LABEL_58:
                      Instance = PublishChangeNotification(v26, a3, a2);
                      goto LABEL_59;
                    }
                    while ( 1 )
                    {
                      v16 = 0LL;
                      Instance = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v18->lpVtbl[1].AddRef)(
                                   v18,
                                   v14,
                                   &v16);
                      if ( Instance < 0 )
                        break;
                      if ( !(unsigned int)IsNeverSetAsDefault((__int64)v16, v26, a3)
                        && (int)GetEndpointLevel(v16, a3, &v17) >= 0
                        && (__int64)v17 >= v10 )
                      {
                        v17 = (struct IUnknown *)((char *)v17 + 1);
                        Instance = SetEndpointLevels(v16, a3, v17);
                        if ( Instance < 0 )
                          break;
                      }
                      if ( v16 )
                        ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
                      if ( ++v14 >= v24 )
                        goto LABEL_58;
                    }
                  }
                  break;
                }
              }
LABEL_23:
              v9 = v16;
LABEL_24:
              if ( v9 )
                ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
            }
            else
            {
              Instance = -2147023728;
            }
          }
        }
      }
    }
  }
LABEL_59:
  if ( v18 )
    ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  if ( v19 )
    ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  return (unsigned int)Instance;
}
