/*
 * XREFs of ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x18009AC78
 * Callers:
 *     ?ReevaluateSaDevicesForEndpoint@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18009B4E0 (-ReevaluateSaDevicesForEndpoint@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP.c)
 * Callees:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000A4B0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180021E58 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18002F298 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030044 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18008A594 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x18009BF00 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18009C788 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CAudioResourceManager::ReevaluateSaDeviceSettings(
        CAudioResourceManager *this,
        const unsigned __int16 *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  char v5; // r12
  int v6; // r13d
  struct tWAVEFORMATEX *v7; // rdi
  struct tWAVEFORMATEX *v8; // rsi
  __int64 *i; // rbx
  __int64 *v10; // r15
  __int64 *v11; // r14
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // r14
  void *v15; // r14
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
  void *v26; // rbx
  __int64 *v27; // rbx
  __int64 *v28; // r14
  __int64 v29; // rcx
  __int64 *v30; // rbx
  __int64 *v31; // rdi
  void (*v32)(void); // rax
  void *v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  struct CEndpointCharacteristics *v38; // [rsp+98h] [rbp-68h] BYREF
  struct tWAVEFORMATEX *v39; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+A8h] [rbp-58h] BYREF
  struct tWAVEFORMATEX *v41; // [rsp+B0h] [rbp-50h] BYREF
  void *v42[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-38h]
  struct tWAVEFORMATEX *v44; // [rsp+D0h] [rbp-30h] BYREF
  struct tWAVEFORMATEX *v45; // [rsp+D8h] [rbp-28h]
  struct tWAVEFORMATEX *v46; // [rsp+E0h] [rbp-20h]
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+E8h] [rbp-18h] BYREF
  struct _GUID v48; // [rsp+100h] [rbp+0h] BYREF
  struct _GUID v49; // [rsp+110h] [rbp+10h] BYREF
  char v50[16]; // [rsp+120h] [rbp+20h] BYREF
  char v51[16]; // [rsp+130h] [rbp+30h] BYREF
  char v52[16]; // [rsp+140h] [rbp+40h] BYREF
  char v53[16]; // [rsp+150h] [rbp+50h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v38 = 0LL;
  v3 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         &v38);
  v4 = 0LL;
  v34 = 0LL;
  if ( v3 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v34);
    v3 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                             + 24LL))(
           g_DeviceGraphStore,
           a2,
           &v34);
    v4 = v34;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids, a2);
    v4 = v34;
  }
  if ( v3 >= 0 )
  {
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v4 + 96LL))(v4, lpCriticalSection);
    while ( 1 )
    {
      v5 = 1;
      *(_OWORD *)v42 = 0LL;
      v43 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v34 + 72LL))(v34, v42);
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Fu,
          (__int64)&WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids,
          ((char *)v42[1] - (char *)v42[0]) >> 3);
      }
      if ( v6 >= 0 )
        break;
LABEL_50:
      v30 = (__int64 *)v42[0];
      if ( v42[0] )
      {
        v31 = (__int64 *)v42[1];
        if ( v42[0] != v42[1] )
        {
          do
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v30++);
          while ( v30 != v31 );
          v30 = (__int64 *)v42[0];
        }
        std::_Deallocate(v30, (v43 - (__int64)v30) >> 3, 8uLL);
      }
      if ( v6 < 0 || v5 )
      {
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
        goto LABEL_59;
      }
    }
    v37 = 0LL;
    v7 = 0LL;
    v45 = 0LL;
    v8 = 0LL;
    v46 = 0LL;
    for ( i = (__int64 *)v42[0]; ; ++i )
    {
      if ( i == v42[1] )
      {
LABEL_49:
        CoTaskMemFree(v8);
        CoTaskMemFree(v7);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v37);
        goto LABEL_50;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 152LL))(*i)
        && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 120LL))(*i) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 136LL))(*i) )
        {
          v35 = 0LL;
          v36 = 0LL;
          if ( (*(int (__fastcall **)(__int64, __int64, struct _GUID *))(*(_QWORD *)v34 + 88LL))(v34, *i, &v35) < 0 )
            goto LABEL_26;
          v10 = *(__int64 **)v35.Data4;
          v11 = *(__int64 **)&v35.Data1;
          if ( (__int64)(*(_QWORD *)v35.Data4 - *(_QWORD *)&v35.Data1) >> 3 == 1 )
          {
            v33 = 0LL;
            if ( (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)*i + 104LL))(*i, &v33) >= 0 )
            {
              v12 = *i;
              v13 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v35.Data1 + 96LL))(**(_QWORD **)&v35.Data1);
              if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) != v13 )
              {
                v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
                if ( GetTickCount64() - v14 >= 0x2700 )
                {
                  Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v37, i);
                  v7 = (struct tWAVEFORMATEX *)*((_QWORD *)v33 + 2);
                  *((_QWORD *)v33 + 2) = 0LL;
                  CoTaskMemFree(0LL);
                  v45 = v7;
                  v8 = (struct tWAVEFORMATEX *)*((_QWORD *)v33 + 3);
                  *((_QWORD *)v33 + 3) = 0LL;
                  CoTaskMemFree(0LL);
                  v46 = v8;
                  v25 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v35.Data1 + 96LL))(**(_QWORD **)&v35.Data1);
                  v26 = v33;
                  if ( v33 )
                  {
                    CoTaskMemFree(*((LPVOID *)v33 + 3));
                    *((_QWORD *)v26 + 3) = 0LL;
                    CoTaskMemFree(*((LPVOID *)v26 + 2));
                    *((_QWORD *)v26 + 2) = 0LL;
                    CoTaskMemFree(*(LPVOID *)v26);
                    *(_QWORD *)v26 = 0LL;
                    operator delete(v26, (const struct std::nothrow_t *)0x68);
                  }
                  v33 = 0LL;
                  v27 = *(__int64 **)&v35.Data1;
                  if ( *(_QWORD *)&v35.Data1 )
                  {
                    v28 = *(__int64 **)v35.Data4;
                    if ( *(_QWORD *)&v35.Data1 != *(_QWORD *)v35.Data4 )
                    {
                      do
                        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v27++);
                      while ( v27 != v28 );
                      v27 = *(__int64 **)&v35.Data1;
                    }
                    std::_Deallocate(v27, (v36 - (__int64)v27) >> 3, 8uLL);
                  }
                  goto LABEL_47;
                }
              }
            }
            v15 = v33;
            if ( v33 )
            {
              CoTaskMemFree(*((LPVOID *)v33 + 3));
              *((_QWORD *)v15 + 3) = 0LL;
              CoTaskMemFree(*((LPVOID *)v15 + 2));
              *((_QWORD *)v15 + 2) = 0LL;
              CoTaskMemFree(*(LPVOID *)v15);
              *(_QWORD *)v15 = 0LL;
              operator delete(v15, (const struct std::nothrow_t *)0x68);
            }
LABEL_26:
            v11 = *(__int64 **)&v35.Data1;
            v10 = *(__int64 **)v35.Data4;
          }
          if ( v11 )
          {
            if ( v11 != v10 )
            {
              do
                Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v11++);
              while ( v11 != v10 );
              v11 = *(__int64 **)&v35.Data1;
            }
            std::_Deallocate(v11, (v36 - (__int64)v11) >> 3, 8uLL);
          }
          continue;
        }
        LODWORD(v33) = 0;
        v44 = 0LL;
        v39 = 0LL;
        v41 = 0LL;
        pv = 0LL;
        v48 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*i + 40LL))(*i, v50);
        v49 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*i + 40LL))(*i, v51);
        v35 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*i + 40LL))(*i, v52);
        v16 = v38;
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
        v18 = DeriveDeviceGraphFormatsForStream(
                v16,
                0,
                (struct _GUID *)v17,
                AUDCLNT_SHAREMODE_SHARED,
                &v35,
                &v49,
                &v48,
                0LL,
                &v41,
                (struct tWAVEFORMATEX **)&pv,
                &v39,
                &v44);
        v19 = v44;
        if ( v18 >= 0 )
        {
          v35 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*i + 40LL))(*i, v53);
          v20 = v38;
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
          if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                      (__int64)v20,
                      v21,
                      v19,
                      &v35,
                      0,
                      &v33,
                      0LL,
                      0LL,
                      0LL) >= 0 )
          {
            v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i);
            if ( v22 != (int)((double)(int)v33 * 10000000.0 / (double)(int)v19->nSamplesPerSec + 0.5)
              || (v23 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 48LL))(*i),
                  !(unsigned int)CompareWaveFormat(v19, v23)) )
            {
              v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
              if ( GetTickCount64() - v24 >= 0x2700 )
              {
                Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v37, i);
                CoTaskMemFree(0LL);
                v7 = v19;
                v45 = v19;
                CoTaskMemFree(0LL);
                v8 = v39;
                v46 = v39;
                v25 = (unsigned int)(int)((double)(int)v33 * 10000000.0 / (double)(int)v19->nSamplesPerSec + 0.5);
                CoTaskMemFree(pv);
                CoTaskMemFree(v41);
                CoTaskMemFree(0LL);
                CoTaskMemFree(0LL);
LABEL_47:
                v5 = 0;
                if ( v37 )
                {
                  std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(v42);
                  v6 = CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(v29, v38, v34, v7, v8, v25, &v37);
                }
                goto LABEL_49;
              }
            }
          }
        }
        CoTaskMemFree(pv);
        CoTaskMemFree(v41);
        CoTaskMemFree(v39);
        CoTaskMemFree(v19);
      }
    }
  }
LABEL_59:
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v34);
  if ( v38 )
  {
    v32 = *(void (**)(void))(*(_QWORD *)v38 + 16LL);
    if ( (char *)v32 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v38);
    else
      v32();
  }
}
