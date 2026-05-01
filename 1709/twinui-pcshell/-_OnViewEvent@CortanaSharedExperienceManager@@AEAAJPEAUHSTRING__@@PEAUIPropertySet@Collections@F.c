/*
 * XREFs of ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A364C
 * Callers:
 *     ?_OnViewEventHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x1800A30F0 (-_OnViewEventHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Sh.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180018AF4 (--$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009E2C0 (-Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009FE80 (--1-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?_IsViewVisible@CortanaSharedExperienceManager@@AEAA_NXZ @ 0x1800A2E70 (-_IsViewVisible@CortanaSharedExperienceManager@@AEAA_NXZ.c)
 *     ?_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800A4404 (-_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800A4500 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A5CC4 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A60D8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??$_GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x1800A7B7C (--$_GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__.c)
 *     ??$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA?AV01@$$QEAPEBG@Z @ 0x1800A7E18 (--$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA-AV01@$$QEAPEB.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A9D84 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CortanaSharedExperienceManager::_OnViewEvent(
        CortanaSharedExperienceManager *this,
        HSTRING string1,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v6; // rax
  HRESULT v7; // eax
  __int64 v8; // rsi
  struct Windows::Foundation::IPropertyValue *v9; // r8
  int v10; // ebx
  bool *v11; // rbx
  const struct _TlgProvider_t *v12; // rax
  __int64 v13; // rax
  HRESULT v14; // eax
  HANDLE v15; // rax
  void *v16; // rbx
  const struct _TlgProvider_t *v17; // rax
  const struct _TlgProvider_t *v18; // rax
  __int64 v19; // rax
  HRESULT v20; // eax
  __int64 v21; // rsi
  __int64 v22; // r8
  int v23; // eax
  HSTRING v24; // rsi
  int v25; // eax
  __int64 v26; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v27; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v28; // rcx
  struct Windows::Foundation::Collections::IPropertySet *result; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  PCWSTR StringRawBuffer; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v32; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING v33; // [rsp+58h] [rbp-B0h]
  __int64 v34; // [rsp+60h] [rbp-A8h]
  _QWORD v35[40]; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A8h] [rbp+A0h] BYREF
  const WCHAR *v37; // [rsp+1C8h] [rbp+C0h]
  __int64 v38; // [rsp+1D0h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v34 = -2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(string1, 0LL);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::Start<unsigned short const *>((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v35);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&pData, (const WCHAR **)&off_180214708);
  LODWORD(result) = 0;
  v7 = WindowsCompareStringOrdinal(string1, *(HSTRING *)(v6 + 24), (INT32 *)&result);
  if ( v7 >= 0 )
  {
    if ( (_DWORD)result )
    {
      v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)&pData,
              (const WCHAR **)&off_180214700);
      LODWORD(result) = 0;
      v14 = WindowsCompareStringOrdinal(string1, *(HSTRING *)(v13 + 24), (INT32 *)&result);
      if ( v14 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
        __debugbreak();
      }
      if ( (_DWORD)result )
      {
        v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)&pData,
                (const WCHAR **)&off_1802146F8);
        LODWORD(result) = 0;
        v20 = WindowsCompareStringOrdinal(string1, *(HSTRING *)(v19 + 24), (INT32 *)&result);
        if ( v20 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
          __debugbreak();
        }
        if ( (_DWORD)result )
          goto LABEL_45;
        v33 = 0LL;
        v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)&pData,
                (const WCHAR **)&off_1802146E8);
        StringRawBuffer = (PCWSTR)a3;
        if ( a3 )
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a3 + 8LL))(a3);
        v23 = Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<HSTRING__ *>(
                &StringRawBuffer,
                *(_QWORD *)(v21 + 24),
                v22,
                &v32);
        v24 = v32;
        if ( v23 < 0 )
          v24 = 0LL;
        v32 = v24;
        WindowsDeleteString(0LL);
        v33 = v24;
        if ( StringRawBuffer )
          (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)StringRawBuffer + 16LL))(StringRawBuffer);
        result = 0LL;
        v25 = (*(__int64 (__fastcall **)(_QWORD, SID *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))(**((_QWORD **)this + 48) + 24LL))(
                *((_QWORD *)this + 48),
                &SID_ImmersiveLauncher,
                &GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce,
                &result);
        if ( v25 >= 0 )
        {
          v25 = (*(__int64 (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *, HSTRING))(*(_QWORD *)result + 32LL))(
                  result,
                  v24);
          if ( v25 >= 0 )
          {
            v28 = result;
            if ( result )
            {
              result = 0LL;
              (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v28 + 16LL))(v28);
            }
            WindowsDeleteString(v24);
            goto LABEL_45;
          }
          v26 = 1140LL;
        }
        else
        {
          v26 = 1139LL;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v26,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v25);
        v27 = result;
        if ( result )
        {
          result = 0LL;
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v27 + 16LL))(v27);
        }
        WindowsDeleteString(v24);
        goto LABEL_46;
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 59) + 80LL))(*((_QWORD *)this + 59));
      v15 = OpenEventW(2u, 0, L"ShellSearchReadyEvent");
      v16 = v15;
      if ( v15 )
      {
        SetEvent(v15);
        CloseHandle(v16);
      }
      v17 = CortanaProactiveLogging::Provider();
      if ( *(_DWORD *)v17 > 5u )
        TlgWrite(v17, &unk_18025ABD2, (LPCGUID)(v35[6] + 8LL), 0LL, 2u, &pData);
      v18 = SingleViewExperienceLogging::Provider();
      if ( *(_DWORD *)v18 > 5u
        && (*((_QWORD *)v18 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v18 + 3) & 0x200000000000LL) == *((_QWORD *)v18 + 3) )
      {
        v37 = L"Windows.Internal.ShellExperience.Cortana";
        v38 = 82LL;
        TlgWrite(v18, &unk_18025B9B2, 0LL, 0LL, 3u, &pData);
      }
    }
    else
    {
      v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&pData, (const WCHAR **)&off_1802146F0);
      result = a3;
      if ( a3 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a3 + 8LL))(a3);
      v10 = Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<unsigned char>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&result,
              *(HSTRING *)(v8 + 24),
              v9,
              (__int64)&v30);
      if ( result )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)result + 16LL))(result);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x441,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
LABEL_46:
        v35[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
        wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v35);
        wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v35);
        return;
      }
      v11 = (bool *)this + 512;
      if ( *((_BYTE *)this + 512) != ((_BYTE)v30 != 0) )
      {
        *v11 = (_BYTE)v30 != 0;
        v12 = CortanaProactiveLogging::Provider();
        if ( *(_DWORD *)v12 > 4u )
        {
          v37 = (const WCHAR *)((char *)this + 512);
          v38 = 1LL;
          TlgWrite(v12, &unk_18025A526, 0LL, 0LL, 3u, &pData);
        }
        if ( *v11 )
        {
          if ( !CortanaSharedExperienceManager::_IsViewVisible(this) )
            CortanaSharedExperienceManager::_StartDeferredSuspensionTimer(this);
        }
        else
        {
          CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer(this);
          if ( !CortanaSharedExperienceManager::_IsViewVisible(this) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 59) + 88LL))(*((_QWORD *)this + 59));
        }
      }
    }
LABEL_45:
    wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v35);
    goto LABEL_46;
  }
  Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
}
