/*
 * XREFs of ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800B6FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache(
        PTP_CALLBACK_INSTANCE Instance,
        _BYTE *Context,
        PTP_WORK Work)
{
  void (*v4)(void); // rax
  void (*v5)(void); // rax
  void (*v6)(void); // rax
  void (*v7)(void); // rax
  int v8; // eax
  __int64 v9; // r8
  unsigned int i; // edi
  void (*v11)(void); // rax
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  LPVOID v13; // [rsp+38h] [rbp-28h] BYREF
  volatile signed __int32 *v14; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int32 *v15[3]; // [rsp+48h] [rbp-18h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+28h] BYREF
  LPVOID ppv; // [rsp+98h] [rbp+38h] BYREF

  v15[1] = (volatile signed __int32 *)-2LL;
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    ppv = 0LL;
    if ( CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv) >= 0 )
    {
      if ( !Context[104] )
      {
        v12 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 0LL, &v12) >= 0 )
        {
          pv = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, &pv) >= 0 )
          {
            v14 = 0LL;
            (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, volatile signed __int32 **))(*(_QWORD *)Context + 24LL))(
              Context,
              pv,
              0LL,
              &v14);
            if ( v14 )
            {
              v4 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
              if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release(v14);
              else
                v4();
            }
          }
          CoTaskMemFree(pv);
        }
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        if ( !Context[104] )
        {
          v12 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, __int64, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 1LL, 0LL, &v12) >= 0 )
          {
            pv = 0LL;
            if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, &pv) >= 0 )
            {
              v14 = 0LL;
              (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, volatile signed __int32 **))(*(_QWORD *)Context + 24LL))(
                Context,
                pv,
                0LL,
                &v14);
              if ( v14 )
              {
                v5 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
                if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release(v14);
                else
                  v5();
              }
            }
            CoTaskMemFree(pv);
          }
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      if ( !Context[104] )
      {
        v12 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 2LL, &v12) >= 0 )
        {
          pv = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, &pv) >= 0 )
          {
            v14 = 0LL;
            (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, volatile signed __int32 **))(*(_QWORD *)Context + 24LL))(
              Context,
              pv,
              0LL,
              &v14);
            if ( v14 )
            {
              v6 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
              if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release(v14);
              else
                v6();
            }
          }
          CoTaskMemFree(pv);
        }
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        if ( !Context[104] )
        {
          v12 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 1LL, 2LL, &v12) >= 0 )
          {
            pv = 0LL;
            if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, &pv) >= 0 )
            {
              v14 = 0LL;
              (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, volatile signed __int32 **))(*(_QWORD *)Context + 24LL))(
                Context,
                pv,
                0LL,
                &v14);
              if ( v14 )
              {
                v7 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
                if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release(v14);
                else
                  v7();
              }
            }
            CoTaskMemFree(pv);
          }
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          if ( !Context[104] )
          {
            v12 = 0LL;
            v8 = PerformEndpointDiscoveryForUnpluggedEndpoints();
            v9 = 1LL;
            if ( v8 )
              v9 = 9LL;
            if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(
                   ppv,
                   2LL,
                   v9,
                   &v12) >= 0
              && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 24LL))(v12, &pv) >= 0 )
            {
              for ( i = 0; !Context[104] && i < (unsigned int)pv; ++i )
              {
                v14 = 0LL;
                if ( (*(int (__fastcall **)(__int64, _QWORD, volatile signed __int32 **))(*(_QWORD *)v12 + 32LL))(
                       v12,
                       i,
                       &v14) >= 0 )
                {
                  v13 = 0LL;
                  if ( (*(int (__fastcall **)(volatile signed __int32 *, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &v13) >= 0 )
                  {
                    v15[0] = 0LL;
                    (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, volatile signed __int32 **))(*(_QWORD *)Context
                                                                                                + 24LL))(
                      Context,
                      v13,
                      0LL,
                      v15);
                    if ( v15[0] )
                    {
                      v11 = *(void (**)(void))(*(_QWORD *)v15[0] + 16LL);
                      if ( (char *)v11 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
                        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release(v15[0]);
                      else
                        v11();
                    }
                  }
                  CoTaskMemFree(v13);
                }
                if ( v14 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
              }
            }
            if ( v12 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
        }
      }
    }
    CoUninitialize();
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
}
