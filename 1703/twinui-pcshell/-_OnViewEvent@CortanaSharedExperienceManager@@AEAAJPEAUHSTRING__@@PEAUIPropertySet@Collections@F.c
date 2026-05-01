/*
 * XREFs of ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800BCFE4
 * Callers:
 *     ?_OnViewEventHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x1800BCAE0 (-_OnViewEventHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Sh.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800179F8 (--$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180098068 (-Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009BAC4 (--1-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009C6B8 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009CAC8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??$_GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x18009E4F0 (--$_GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__.c)
 *     ??$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA?AV01@$$QEAPEBG@Z @ 0x18009E9C0 (--$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA-AV01@$$QEAPEB.c)
 *     ??$CortanaExperienceManager_SuspensionAllowedByApp@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z @ 0x18009EA7C (--$CortanaExperienceManager_SuspensionAllowedByApp@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009F4C4 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?_IsViewVisible@CortanaSharedExperienceManager@@AEAA_NXZ @ 0x1800BC864 (-_IsViewVisible@CortanaSharedExperienceManager@@AEAA_NXZ.c)
 *     ?_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BDCA4 (-_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BDDA0 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CortanaSharedExperienceManager::_OnViewEvent(
        CortanaSharedExperienceManager *this,
        HSTRING string1,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  HSTRING_HEADER *v6; // rax
  HRESULT v7; // eax
  HSTRING_HEADER *v8; // rsi
  struct Windows::Foundation::IPropertyValue *v9; // r8
  int v10; // ebx
  bool *v11; // rbx
  HSTRING_HEADER *v12; // rax
  HRESULT v13; // eax
  HANDLE v14; // rax
  void *v15; // rbx
  const struct _TlgProvider_t *v16; // rax
  const struct _TlgProvider_t *v17; // rax
  HSTRING_HEADER *v18; // rax
  HRESULT v19; // eax
  HSTRING_HEADER *v20; // rsi
  struct Windows::Foundation::IPropertyValue *v21; // r8
  int v22; // eax
  HSTRING v23; // rsi
  int v24; // eax
  __int64 v25; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v26; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v27; // rcx
  struct Windows::Foundation::Collections::IPropertySet *result; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C8h] BYREF
  PCWSTR StringRawBuffer; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v31; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING v32; // [rsp+58h] [rbp-B0h]
  __int64 v33; // [rsp+60h] [rbp-A8h]
  _QWORD v34[40]; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING_HEADER pData; // [rsp+1A8h] [rbp+A0h] BYREF
  const WCHAR *v36; // [rsp+1C8h] [rbp+C0h]
  __int64 v37; // [rsp+1D0h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v33 = -2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(string1, 0LL);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::Start<unsigned short const *>(
    (CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v34,
    &StringRawBuffer);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)&off_1801BD0E8);
  LODWORD(result) = 0;
  v7 = WindowsCompareStringOrdinal(string1, (HSTRING)v6[1].Reserved.Reserved1, (INT32 *)&result);
  if ( v7 >= 0 )
  {
    if ( (_DWORD)result )
    {
      v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)&off_1801BD0E0);
      LODWORD(result) = 0;
      v13 = WindowsCompareStringOrdinal(string1, (HSTRING)v12[1].Reserved.Reserved1, (INT32 *)&result);
      if ( v13 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
        __debugbreak();
      }
      if ( (_DWORD)result )
      {
        v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)&off_1801BD0D8);
        LODWORD(result) = 0;
        v19 = WindowsCompareStringOrdinal(string1, (HSTRING)v18[1].Reserved.Reserved1, (INT32 *)&result);
        if ( v19 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
          __debugbreak();
        }
        if ( (_DWORD)result )
          goto LABEL_43;
        v32 = 0LL;
        v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)&off_1801BD0C8);
        StringRawBuffer = (PCWSTR)a3;
        if ( a3 )
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a3 + 8LL))(a3);
        v22 = Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<HSTRING__ *>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&StringRawBuffer,
                (HSTRING)v20[1].Reserved.Reserved1,
                v21,
                (__int64)&v31);
        v23 = v31;
        if ( v22 < 0 )
          v23 = 0LL;
        v31 = v23;
        WindowsDeleteString(0LL);
        v32 = v23;
        if ( StringRawBuffer )
          (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)StringRawBuffer + 16LL))(StringRawBuffer);
        result = 0LL;
        v24 = (*(__int64 (__fastcall **)(_QWORD, SID *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))(**((_QWORD **)this + 48) + 24LL))(
                *((_QWORD *)this + 48),
                &SID_ImmersiveLauncher,
                &GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce,
                &result);
        if ( v24 >= 0 )
        {
          v24 = (*(__int64 (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *, HSTRING))(*(_QWORD *)result + 32LL))(
                  result,
                  v23);
          if ( v24 >= 0 )
          {
            v27 = result;
            if ( result )
            {
              result = 0LL;
              (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v27 + 16LL))(v27);
            }
            WindowsDeleteString(v23);
            goto LABEL_43;
          }
          v25 = 1125LL;
        }
        else
        {
          v25 = 1124LL;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v25,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v24);
        v26 = result;
        if ( result )
        {
          result = 0LL;
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v26 + 16LL))(v26);
        }
        WindowsDeleteString(v23);
        goto LABEL_44;
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 59) + 80LL))(*((_QWORD *)this + 59));
      v14 = OpenEventW(2u, 0, L"ShellSearchReadyEvent");
      v15 = v14;
      if ( v14 )
      {
        SetEvent(v14);
        CloseHandle(v15);
      }
      v16 = CortanaProactiveLogging::Provider();
      if ( *(_DWORD *)v16 > 5u )
        TlgWrite(v16, &unk_1801F95AC, (LPCGUID)(v34[6] + 8LL), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
      v17 = SingleViewExperienceLogging::Provider();
      if ( *(_DWORD *)v17 > 5u
        && (*((_QWORD *)v17 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v17 + 3) & 0x200000000000LL) == *((_QWORD *)v17 + 3) )
      {
        v36 = L"Windows.Internal.ShellExperience.Cortana";
        v37 = 82LL;
        TlgWrite(v17, &unk_1801FC59F, 0LL, 0LL, 3u, (EVENT_DATA_DESCRIPTOR *)&pData);
      }
    }
    else
    {
      v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)&off_1801BD0D0);
      result = a3;
      if ( a3 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a3 + 8LL))(a3);
      v10 = Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<unsigned char>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&result,
              (HSTRING)v8[1].Reserved.Reserved1,
              v9,
              (__int64)&v29);
      if ( result )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)result + 16LL))(result);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x432,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
LABEL_44:
        v34[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
        wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v34);
        wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v34);
        return;
      }
      v11 = (bool *)this + 512;
      if ( *((_BYTE *)this + 512) != ((_BYTE)v29 != 0) )
      {
        *v11 = (_BYTE)v29 != 0;
        CortanaProactiveTelemetry::CortanaExperienceManager_SuspensionAllowedByApp<bool &>((__int64)this + 512);
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
LABEL_43:
    wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v34);
    goto LABEL_44;
  }
  Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
}
