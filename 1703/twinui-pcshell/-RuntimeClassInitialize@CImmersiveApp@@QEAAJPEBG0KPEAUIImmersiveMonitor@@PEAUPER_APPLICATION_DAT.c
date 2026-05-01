/*
 * XREFs of ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@@Z @ 0x1800504E8
 * Callers:
 *     ?CImmersiveApp_CreateInstance@@YAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x180059B2C (-CImmersiveApp_CreateInstance@@YAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIA.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x180056D58 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x1800578EC (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18005A980 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ??$Start@AEAPEBG@Initialization@CFramePresentationTelemetry@@SA?AV01@AEAPEBG@Z @ 0x18005B268 (--$Start@AEAPEBG@Initialization@CFramePresentationTelemetry@@SA-AV01@AEAPEBG@Z.c)
 *     CreateAsyncCallbackWithLambda__lambda_8e616b3fe271a175255dafacf66255eb___ @ 0x18005B324 (CreateAsyncCallbackWithLambda__lambda_8e616b3fe271a175255dafacf66255eb___.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18017675C (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CImmersiveApp::RuntimeClassInitialize(
        CImmersiveApp *this,
        LPCWSTR psz,
        const unsigned __int16 *a3,
        int a4,
        struct IImmersiveMonitor *a5,
        struct PER_APPLICATION_DATA *a6,
        struct IIAMServiceProvider *a7)
{
  const unsigned __int16 *v8; // r14
  LPCWSTR *v11; // r12
  int v12; // r15d
  __int64 v13; // rcx
  enum ORIENTATION_PREFERENCE *v14; // r8
  int v15; // esi
  int v16; // ebx
  int v17; // eax
  WCHAR *v18; // r14
  LSTATUS ValueW; // eax
  signed int v20; // edx
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rcx
  LPCWSTR v25; // rcx
  __int64 v27; // [rsp+48h] [rbp-C0h] BYREF
  __int64 pvData; // [rsp+50h] [rbp-B8h] BYREF
  LPCWSTR v29; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  DWORD pcbData[2]; // [rsp+68h] [rbp-A0h] BYREF
  LPCWSTR lpSubKey; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+78h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-88h]
  const unsigned __int16 *v35; // [rsp+88h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  _QWORD v37[40]; // [rsp+98h] [rbp-70h] BYREF

  v36 = -2LL;
  v8 = a3;
  v35 = a3;
  v29 = psz;
  CFramePresentationTelemetry::Initialization::Start<unsigned short const * &>((CFramePresentationTelemetry::Initialization *)v37);
  v11 = (LPCWSTR *)((char *)this + 504);
  v12 = SHStrDupW(psz, (LPWSTR *)this + 63);
  if ( v12 >= 0 )
  {
    *((_DWORD *)this + 128) = a4;
    if ( *((struct IImmersiveMonitor **)this + 86) != a5 )
    {
      if ( a5 )
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a5 + 8LL))(a5);
      v13 = *((_QWORD *)this + 86);
      *((_QWORD *)this + 86) = a5;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    *((_BYTE *)this + 668) = *((_BYTE *)a6 + 19);
    *((_BYTE *)this + 669) = *((_BYTE *)a6 + 20);
    *((_BYTE *)this + 670) = *((_BYTE *)a6 + 21);
    *((_BYTE *)this + 671) = *((_BYTE *)a6 + 22);
    *((_BYTE *)this + 672) = *((_BYTE *)a6 + 23);
    *((_BYTE *)this + 673) = *((_BYTE *)a6 + 24);
    *((_BYTE *)this + 674) = *((_BYTE *)a6 + 25);
    *((_BYTE *)this + 675) = *((_BYTE *)a6 + 26);
    *((_BYTE *)this + 676) = *((_BYTE *)a6 + 27);
    *((_BYTE *)this + 677) = *((_BYTE *)a6 + 28);
    v12 = CImmersiveApp::CImmersiveWindowCollection::Initialize((CImmersiveApp *)((char *)this + 224), a7);
    if ( v12 >= 0 )
    {
      v15 = 500;
      v27 = 0x300000001F4LL;
      if ( (int)CallerIdentity::GetManifestedOrientationPreference(*v11, (const unsigned __int16 *)this + 340, v14) < 0 )
        *((_DWORD *)this + 170) = 0;
      if ( *((_BYTE *)this + 668) )
      {
        v16 = 320;
        LODWORD(v27) = 320;
      }
      else if ( *((_BYTE *)this + 674) )
      {
        lpSubKey = 0LL;
        v33 = 0LL;
        v34 = 0LL;
        v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                &lpSubKey,
                L"%s\\%s",
                L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationView",
                *v11);
        v16 = 320;
        v18 = (WCHAR *)lpSubKey;
        if ( v17 >= 0 )
        {
          pcbData[0] = 4;
          ValueW = RegGetValueW(HKEY_CURRENT_USER, lpSubKey, L"MinWidth", 0x10u, 0LL, &pvData, pcbData);
          v20 = (unsigned __int16)ValueW | 0x80070000;
          if ( ValueW <= 0 )
            v20 = ValueW;
          if ( v20 >= 0 )
          {
            v21 = v27;
            if ( (_DWORD)pvData == 1 )
              v21 = 320;
            LODWORD(v27) = v21;
          }
        }
        if ( v18 )
        {
          CoTaskMemFree(v18);
          lpSubKey = 0LL;
        }
        v33 = 0LL;
        v34 = 0LL;
        v8 = v35;
      }
      else
      {
        v27 = 0x140000001F4LL;
        v16 = 320;
      }
      if ( *((_BYTE *)this + 670) )
        v27 = 0x30000000C0LL;
      (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 45) + 176LL))(*((_QWORD *)this + 45), &v27);
      v29 = 0LL;
      if ( (*(int (__fastcall **)(struct IIAMServiceProvider *, GUID *, GUID *, LPCWSTR *))(*(_QWORD *)a7 + 24LL))(
             a7,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &v29) >= 0
        && (*(int (__fastcall **)(LPCWSTR, LPCWSTR, __int64 *))(*(_QWORD *)v29 + 56LL))(v29, *v11, &pvData) >= 0 )
      {
        if ( (int)pvData < 500 )
          v15 = pvData;
        LODWORD(v27) = v15;
        if ( SHIDWORD(pvData) < 320 )
          v16 = HIDWORD(pvData);
        HIDWORD(v27) = v16;
      }
      (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 45) + 168LL))(*((_QWORD *)this + 45), &v27);
      CImmersiveApp::_UpdateWindowTitleAndButtons(this);
      v30 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 45) + 128LL))(*((_QWORD *)this + 45), &v30) >= 0
        && *((_BYTE *)this + 671) )
      {
        v22 = v30;
        pvData = v30;
        if ( v30 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
        CreateAsyncCallbackWithLambda__lambda_8e616b3fe271a175255dafacf66255eb_(pcbData, &pvData);
        if ( v22 )
        {
          pvData = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        v23 = *(_QWORD *)pcbData;
        if ( *(_QWORD *)pcbData )
          (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 45) + 200LL))(
            *((_QWORD *)this + 45),
            *(_QWORD *)pcbData);
        if ( v23 )
        {
          *(_QWORD *)pcbData = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
      v24 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v25 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(LPCWSTR))(*(_QWORD *)v25 + 16LL))(v25);
      }
      if ( v8 )
        v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (__int64)this + 560,
                v8,
                0xFFFFFFFFFFFFFFFFuLL);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v37, v12);
  v37[0] = &CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v37);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v37);
  return (unsigned int)v12;
}
