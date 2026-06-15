/*
 * XREFs of ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800D1D08
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_49e61b4b5e107012da56e971e0ef5073__void_::_Do_call @ 0x1800D3650 (std--_Func_impl_no_alloc__lambda_49e61b4b5e107012da56e971e0ef5073__void_--_Do_call.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180011D90 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180038CD0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180097CB0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800C8550 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800D2C80 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800D3888 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800F00EC (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CAudioResourceManager::ReevaluateSaDeviceSettings(
        CAudioResourceManager *this,
        const unsigned __int16 *a2)
{
  int v3; // ebx
  char v4; // r12
  int v5; // r13d
  struct tWAVEFORMATEX *v6; // rdi
  struct tWAVEFORMATEX *v7; // rsi
  _QWORD *i; // rbx
  char v9; // al
  __int64 v10; // r9
  __int64 *v11; // r14
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 *v15; // r15
  struct CEndpointCharacteristics *v16; // r14
  unsigned int v17; // eax
  int v18; // eax
  struct tWAVEFORMATEX *v19; // r14
  struct CEndpointCharacteristics *v20; // r15
  int v21; // eax
  __int64 v22; // rax
  const struct tWAVEFORMATEX *v23; // rax
  __int64 v24; // r15
  __int64 v25; // r15
  __int64 *v26; // rbx
  __int64 *v27; // r14
  __int64 *v28; // rbx
  __int64 *v29; // rdi
  __int64 v30; // rcx
  void (*v31)(void); // rax
  SaDeviceParams *v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-70h] BYREF
  struct CEndpointCharacteristics *v37; // [rsp+98h] [rbp-68h] BYREF
  struct tWAVEFORMATEX *v38; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+A8h] [rbp-58h] BYREF
  struct tWAVEFORMATEX *v40; // [rsp+B0h] [rbp-50h] BYREF
  void *v41[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-38h]
  struct tWAVEFORMATEX *v43; // [rsp+D0h] [rbp-30h] BYREF
  struct tWAVEFORMATEX *v44; // [rsp+D8h] [rbp-28h]
  struct tWAVEFORMATEX *v45; // [rsp+E0h] [rbp-20h]
  CAudioResourceManager *v46; // [rsp+E8h] [rbp-18h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct _GUID v48; // [rsp+100h] [rbp+0h] BYREF
  struct _GUID v49; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v50[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v51[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v52[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v53[16]; // [rsp+150h] [rbp+50h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v46 = this;
  v37 = 0LL;
  v3 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         &v37);
  v33 = 0LL;
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                             + 24LL))(
           g_DeviceGraphStore,
           a2,
           &v33);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids, a2);
  }
  if ( v3 >= 0 )
  {
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v33 + 112LL))(v33, lpCriticalSection);
    while ( 1 )
    {
      v4 = 1;
      *(_OWORD *)v41 = 0LL;
      v42 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v33 + 80LL))(v33, v41);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Eu,
          (__int64)&WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids,
          ((char *)v41[1] - (char *)v41[0]) >> 3);
      }
      if ( v5 >= 0 )
        break;
LABEL_50:
      v28 = (__int64 *)v41[0];
      if ( v41[0] )
      {
        v29 = (__int64 *)v41[1];
        if ( v41[0] != v41[1] )
        {
          do
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v28++);
          while ( v28 != v29 );
          v28 = (__int64 *)v41[0];
        }
        std::_Deallocate(v28, (v42 - (__int64)v28) >> 3, 8uLL);
      }
      if ( v5 < 0 || v4 )
      {
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
        goto LABEL_59;
      }
    }
    v36 = 0LL;
    v6 = 0LL;
    v44 = 0LL;
    v7 = 0LL;
    v45 = 0LL;
    for ( i = v41[0]; ; ++i )
    {
      if ( i == v41[1] )
      {
LABEL_49:
        CoTaskMemFree(v7);
        CoTaskMemFree(v6);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
        goto LABEL_50;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 152LL))(*i)
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 120LL))(*i) )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 136LL))(*i);
        v10 = *i;
        if ( v9 )
        {
          v34 = 0LL;
          v35 = 0LL;
          if ( (*(int (__fastcall **)(__int64, __int64, struct _GUID *))(*(_QWORD *)v33 + 104LL))(v33, v10, &v34) < 0 )
            goto LABEL_26;
          v11 = *(__int64 **)&v34.Data1;
          if ( (__int64)(*(_QWORD *)v34.Data4 - *(_QWORD *)&v34.Data1) >> 3 == 1 )
          {
            v32 = 0LL;
            if ( (*(int (__fastcall **)(_QWORD, SaDeviceParams **))(*(_QWORD *)*i + 104LL))(*i, &v32) >= 0 )
            {
              v12 = **(_QWORD **)&v34.Data1;
              v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
              if ( v13 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12) )
              {
                v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 176LL))(*i);
                if ( GetTickCount64() - v14 >= 0x2700 )
                {
                  Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v36, i);
                  v6 = (struct tWAVEFORMATEX *)*((_QWORD *)v32 + 2);
                  *((_QWORD *)v32 + 2) = 0LL;
                  CoTaskMemFree(0LL);
                  v44 = v6;
                  v7 = (struct tWAVEFORMATEX *)*((_QWORD *)v32 + 3);
                  *((_QWORD *)v32 + 3) = 0LL;
                  CoTaskMemFree(0LL);
                  v45 = v7;
                  v25 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v34.Data1 + 96LL))(**(_QWORD **)&v34.Data1);
                  if ( v32 )
                    SaDeviceParams::`scalar deleting destructor'((LPVOID *)v32);
                  v32 = 0LL;
                  v26 = *(__int64 **)&v34.Data1;
                  if ( *(_QWORD *)&v34.Data1 )
                  {
                    v27 = *(__int64 **)v34.Data4;
                    if ( *(_QWORD *)&v34.Data1 != *(_QWORD *)v34.Data4 )
                    {
                      do
                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26++);
                      while ( v26 != v27 );
                      v26 = *(__int64 **)&v34.Data1;
                    }
                    std::_Deallocate(v26, (v35 - (__int64)v26) >> 3, 8uLL);
                  }
                  goto LABEL_47;
                }
              }
            }
            if ( v32 )
              SaDeviceParams::`scalar deleting destructor'((LPVOID *)v32);
LABEL_26:
            v11 = *(__int64 **)&v34.Data1;
          }
          if ( v11 )
          {
            v15 = *(__int64 **)v34.Data4;
            if ( v11 != *(__int64 **)v34.Data4 )
            {
              do
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11++);
              while ( v11 != v15 );
              v11 = *(__int64 **)&v34.Data1;
            }
            std::_Deallocate(v11, (v35 - (__int64)v11) >> 3, 8uLL);
          }
          continue;
        }
        LODWORD(v32) = 0;
        v43 = 0LL;
        v38 = 0LL;
        v40 = 0LL;
        pv = 0LL;
        v48 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 40LL))(v10, v50);
        v49 = *(struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v51);
        v34 = *(struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v52);
        v16 = v37;
        v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 80LL))(*i);
        v18 = DeriveDeviceGraphFormatsForStream(
                v16,
                0,
                (struct _GUID *)v17,
                AUDCLNT_SHAREMODE_SHARED,
                &v34,
                &v49,
                &v48,
                0LL,
                &v40,
                (struct tWAVEFORMATEX **)&pv,
                &v38,
                &v43);
        v19 = v43;
        if ( v18 >= 0 )
        {
          v34 = *(struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v53);
          v20 = v37;
          v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 80LL))(*i);
          if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                      (__int64)v20,
                      v21,
                      &v19->wFormatTag,
                      &v34,
                      0,
                      &v32,
                      0LL,
                      0LL,
                      0LL) >= 0 )
          {
            v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
            if ( v22 != (int)((double)(int)v32 * 10000000.0 / (double)(int)v19->nSamplesPerSec + 0.5)
              || (v23 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 48LL))(*i),
                  !(unsigned int)CompareWaveFormat(v19, v23)) )
            {
              v24 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 176LL))(*i);
              if ( GetTickCount64() - v24 >= 0x2700 )
              {
                Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v36, i);
                CoTaskMemFree(0LL);
                v6 = v19;
                v44 = v19;
                CoTaskMemFree(0LL);
                v7 = v38;
                v45 = v38;
                v25 = (unsigned int)(int)((double)(int)v32 * 10000000.0 / (double)(int)v19->nSamplesPerSec + 0.5);
                CoTaskMemFree(pv);
                CoTaskMemFree(v40);
                CoTaskMemFree(0LL);
                CoTaskMemFree(0LL);
LABEL_47:
                v4 = 0;
                if ( v36 )
                {
                  std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(v41);
                  v5 = CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(v46, v37, v33, v6, v7, v25, &v36);
                }
                goto LABEL_49;
              }
            }
          }
        }
        CoTaskMemFree(pv);
        CoTaskMemFree(v40);
        CoTaskMemFree(v38);
        CoTaskMemFree(v19);
      }
    }
  }
LABEL_59:
  v30 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  if ( v37 )
  {
    v31 = *(void (**)(void))(*(_QWORD *)v37 + 16LL);
    if ( (char *)v31 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((__int64)v37);
    else
      v31();
  }
}
