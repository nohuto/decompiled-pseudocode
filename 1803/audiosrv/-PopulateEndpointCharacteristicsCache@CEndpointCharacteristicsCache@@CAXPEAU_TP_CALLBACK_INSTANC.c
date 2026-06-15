/*
 * XREFs of ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005A210
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1800379F0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_WORK Work)
{
  int v4; // eax
  __int64 v5; // r8
  unsigned int i; // edi
  __int64 (__fastcall *v7)(RTL_SRWLOCK *, unsigned __int16 *, int, struct CEndpointCharacteristics **); // rax
  void (*v8)(void); // rax
  void (*v9)(void); // rax
  void (*v10)(void); // rax
  void (*v11)(void); // rax
  void (*v12)(void); // rax
  LPVOID pv; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h] BYREF
  struct CEndpointCharacteristics *v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16[3]; // [rsp+48h] [rbp-18h] BYREF
  LPVOID v17; // [rsp+88h] [rbp+28h] BYREF
  LPVOID ppv; // [rsp+98h] [rbp+38h] BYREF

  v16[1] = -2LL;
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
      if ( !LOBYTE(Context[13].Ptr) )
      {
        v14 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 0LL, &v14) >= 0 )
        {
          v17 = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &v17) >= 0 )
          {
            v16[0] = 0LL;
            (*((void (__fastcall **)(RTL_SRWLOCK *, LPVOID, _QWORD, __int64 *))Context->Ptr + 3))(
              Context,
              v17,
              0LL,
              v16);
            if ( v16[0] )
            {
              v9 = *(void (**)(void))(*(_QWORD *)v16[0] + 16LL);
              if ( (char *)v9 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release(v16[0]);
              else
                v9();
            }
          }
          CoTaskMemFree(v17);
        }
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( !LOBYTE(Context[13].Ptr) )
        {
          v14 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, __int64, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 1LL, 0LL, &v14) >= 0 )
          {
            v17 = 0LL;
            if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &v17) >= 0 )
            {
              v16[0] = 0LL;
              (*((void (__fastcall **)(RTL_SRWLOCK *, LPVOID, _QWORD, __int64 *))Context->Ptr + 3))(
                Context,
                v17,
                0LL,
                v16);
              if ( v16[0] )
              {
                v10 = *(void (**)(void))(*(_QWORD *)v16[0] + 16LL);
                if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release(v16[0]);
                else
                  v10();
              }
            }
            CoTaskMemFree(v17);
          }
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
      if ( !LOBYTE(Context[13].Ptr) )
      {
        v14 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 2LL, &v14) >= 0 )
        {
          v17 = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &v17) >= 0 )
          {
            v16[0] = 0LL;
            (*((void (__fastcall **)(RTL_SRWLOCK *, LPVOID, _QWORD, __int64 *))Context->Ptr + 3))(
              Context,
              v17,
              0LL,
              v16);
            if ( v16[0] )
            {
              v11 = *(void (**)(void))(*(_QWORD *)v16[0] + 16LL);
              if ( (char *)v11 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release(v16[0]);
              else
                v11();
            }
          }
          CoTaskMemFree(v17);
        }
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( !LOBYTE(Context[13].Ptr) )
        {
          v14 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 1LL, 2LL, &v14) >= 0 )
          {
            v17 = 0LL;
            if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &v17) >= 0 )
            {
              v16[0] = 0LL;
              (*((void (__fastcall **)(RTL_SRWLOCK *, LPVOID, _QWORD, __int64 *))Context->Ptr + 3))(
                Context,
                v17,
                0LL,
                v16);
              if ( v16[0] )
              {
                v12 = *(void (**)(void))(*(_QWORD *)v16[0] + 16LL);
                if ( (char *)v12 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release(v16[0]);
                else
                  v12();
              }
            }
            CoTaskMemFree(v17);
          }
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          if ( !LOBYTE(Context[13].Ptr) )
          {
            v14 = 0LL;
            v4 = PerformEndpointDiscoveryForUnpluggedEndpoints();
            v5 = 1LL;
            if ( v4 )
              v5 = 9LL;
            if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(
                   ppv,
                   2LL,
                   v5,
                   &v14) >= 0
              && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v14 + 24LL))(v14, &v17) >= 0 )
            {
              for ( i = 0; !LOBYTE(Context[13].Ptr) && i < (unsigned int)v17; ++i )
              {
                v16[0] = 0LL;
                if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, i, v16) >= 0 )
                {
                  pv = 0LL;
                  if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v16[0] + 40LL))(v16[0], &pv) >= 0 )
                  {
                    v15 = 0LL;
                    v7 = (__int64 (__fastcall *)(RTL_SRWLOCK *, unsigned __int16 *, int, struct CEndpointCharacteristics **))*((_QWORD *)Context->Ptr + 3);
                    if ( v7 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
                      CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                        Context,
                        (unsigned __int16 *)pv,
                        0,
                        &v15);
                    else
                      v7(Context, (unsigned __int16 *)pv, 0, &v15);
                    if ( v15 )
                    {
                      v8 = *(void (**)(void))(*(_QWORD *)v15 + 16LL);
                      if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
                        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((__int64)v15);
                      else
                        v8();
                    }
                  }
                  CoTaskMemFree(pv);
                }
                if ( v16[0] )
                  (*(void (**)(void))(*(_QWORD *)v16[0] + 16LL))();
              }
            }
            if ( v14 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          }
        }
      }
    }
    CoUninitialize();
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
}
