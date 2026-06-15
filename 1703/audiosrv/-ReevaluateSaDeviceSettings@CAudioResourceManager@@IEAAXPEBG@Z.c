/*
 * XREFs of ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ABF78
 * Callers:
 *     ?ReevaluateSaDevicesForEndpoint@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800AC6B0 (-ReevaluateSaDevicesForEndpoint@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP.c)
 * Callees:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180003570 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180003C10 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000CBA0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18007B774 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18009FDAC (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009FE14 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800ACE74 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800AD824 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CAudioResourceManager::ReevaluateSaDeviceSettings(
        CAudioResourceManager *this,
        const unsigned __int16 *a2)
{
  int AliasedEndpointCharacteristics; // ebx
  __int64 v4; // rcx
  char v5; // r13
  int v6; // r12d
  struct tWAVEFORMATEX *v7; // rdi
  struct tWAVEFORMATEX *v8; // rsi
  __int64 *i; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // r14
  struct CEndpointCharacteristics *v13; // r14
  unsigned int v14; // eax
  int v15; // eax
  struct tWAVEFORMATEX *v16; // r14
  struct CEndpointCharacteristics *v17; // r15
  int v18; // eax
  __int64 v19; // rax
  const struct tWAVEFORMATEX *v20; // rax
  __int64 v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rcx
  SaDeviceParams *v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  struct CEndpointCharacteristics *v27; // [rsp+78h] [rbp-88h] BYREF
  struct _GUID v28; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+90h] [rbp-70h]
  struct tWAVEFORMATEX *v30; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+A8h] [rbp-58h] BYREF
  struct tWAVEFORMATEX *v32; // [rsp+B0h] [rbp-50h] BYREF
  struct tWAVEFORMATEX *v33; // [rsp+B8h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v34; // [rsp+C0h] [rbp-40h]
  struct tWAVEFORMATEX *v35; // [rsp+C8h] [rbp-38h]
  __int128 v36; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-20h]
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+E8h] [rbp-18h] BYREF
  struct _GUID v39; // [rsp+100h] [rbp+0h] BYREF
  struct _GUID v40; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v41[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v42[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v43[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v44[16]; // [rsp+150h] [rbp+50h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v27 = 0LL;
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a2, 0, &v27);
  v4 = 0LL;
  v25 = 0LL;
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
                                       g_DeviceGraphStore,
                                       a2,
                                       &v25);
    v4 = v25;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids, a2);
    v4 = v25;
  }
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v4 + 88LL))(v4, lpCriticalSection);
    do
    {
      v5 = 1;
      v36 = 0LL;
      v37 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 72LL))(v25, &v36);
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x20u,
          (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids,
          (__int64)(*((_QWORD *)&v36 + 1) - v36) >> 3);
      }
      if ( v6 >= 0 )
      {
        v26 = 0LL;
        v7 = 0LL;
        v34 = 0LL;
        v8 = 0LL;
        v35 = 0LL;
        for ( i = (__int64 *)v36; i != *((__int64 **)&v36 + 1); ++i )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 152LL))(*i)
            && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 120LL))(*i) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 136LL))(*i) )
            {
              v28 = 0LL;
              v29 = 0LL;
              if ( (*(int (__fastcall **)(__int64, __int64, struct _GUID *))(*(_QWORD *)v25 + 80LL))(v25, *i, &v28) >= 0
                && (__int64)(*(_QWORD *)v28.Data4 - *(_QWORD *)&v28.Data1) >> 3 == 1 )
              {
                v24 = 0LL;
                if ( (*(int (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*i + 104LL))(*i, &v24) >= 0 )
                {
                  v10 = *i;
                  v11 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v28.Data1 + 96LL))(**(_QWORD **)&v28.Data1);
                  if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10) != v11 )
                  {
                    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
                    if ( GetTickCount64() - v12 >= 0x2700 )
                    {
                      v5 = 0;
                      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v26, i);
                      v7 = (struct tWAVEFORMATEX *)*((_QWORD *)v24 + 2);
                      *((_QWORD *)v24 + 2) = 0LL;
                      CoTaskMemFree(0LL);
                      v34 = v7;
                      v8 = (struct tWAVEFORMATEX *)*((_QWORD *)v24 + 3);
                      *((_QWORD *)v24 + 3) = 0LL;
                      CoTaskMemFree(0LL);
                      v35 = v8;
                      v22 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v28.Data1 + 96LL))(**(_QWORD **)&v28.Data1);
                      if ( v24 )
                        SaDeviceParams::`scalar deleting destructor'((LPVOID *)v24);
                      v24 = 0LL;
                      std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64 **)&v28);
                      goto LABEL_38;
                    }
                  }
                }
                if ( v24 )
                  SaDeviceParams::`scalar deleting destructor'((LPVOID *)v24);
              }
              std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64 **)&v28);
            }
            else
            {
              LODWORD(v24) = 0;
              v33 = 0LL;
              v30 = 0LL;
              v32 = 0LL;
              pv = 0LL;
              v39 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v41);
              v40 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v42);
              v28 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v43);
              v13 = v27;
              v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
              v15 = DeriveDeviceGraphFormatsForStream(
                      v13,
                      0,
                      (struct _GUID *)v14,
                      AUDCLNT_SHAREMODE_SHARED,
                      &v28,
                      &v40,
                      &v39,
                      0LL,
                      &v32,
                      (struct tWAVEFORMATEX **)&pv,
                      &v30,
                      &v33);
              v16 = v33;
              if ( v15 >= 0 )
              {
                v28 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v44);
                v17 = v27;
                v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
                if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                            (__int64)v17,
                            v18,
                            &v16->wFormatTag,
                            &v28,
                            0,
                            &v24,
                            0LL,
                            0LL,
                            0LL) >= 0 )
                {
                  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i);
                  if ( v19 != (int)((double)(int)v24 * 10000000.0 / (double)(int)v16->nSamplesPerSec + 0.5)
                    || (v20 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 48LL))(*i),
                        !(unsigned int)CompareWaveFormat(v16, v20)) )
                  {
                    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
                    if ( GetTickCount64() - v21 >= 0x2700 )
                    {
                      v5 = 0;
                      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v26, i);
                      CoTaskMemFree(0LL);
                      v7 = v16;
                      v34 = v16;
                      CoTaskMemFree(0LL);
                      v8 = v30;
                      v35 = v30;
                      v22 = (unsigned int)(int)((double)(int)v24 * 10000000.0 / (double)(int)v16->nSamplesPerSec + 0.5);
                      CoTaskMemFree(pv);
                      CoTaskMemFree(v32);
                      CoTaskMemFree(0LL);
                      CoTaskMemFree(0LL);
LABEL_38:
                      if ( v26 )
                      {
                        std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v36);
                        v6 = CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(v23, v27, v25, v7, v8, v22, &v26);
                      }
                      break;
                    }
                  }
                }
              }
              CoTaskMemFree(pv);
              CoTaskMemFree(v32);
              CoTaskMemFree(v30);
              CoTaskMemFree(v16);
            }
          }
        }
        CoTaskMemFree(v8);
        CoTaskMemFree(v7);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v26);
      }
      std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64 **)&v36);
    }
    while ( v6 >= 0 && !v5 );
    if ( lpCriticalSection[0] )
      LeaveCriticalSection(lpCriticalSection[0]);
    v4 = v25;
  }
  if ( v4 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v27 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v27 + 16LL))(v27);
}
