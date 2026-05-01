/*
 * XREFs of ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180180F38
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____ptr64___lambda_758b2e0460ec60a3197f9f2eea1280c5__2__1_::Invoke @ 0x1801854F0 (Microsoft--WRL--Details--InvokeHelper_Windows--Foundation--ITypedEventHandler_Windo_ea_1801854F0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180181330 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180181828 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801818D0 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180181DE4 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 *     ??$Start@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x180183F54 (--$Start@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0@Z.c)
 *     ??$Created@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x180184020 (--$Created@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z.c)
 *     ??$PropertiesChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x180184144 (--$PropertiesChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z.c)
 *     ??$EventQueued@PEBGPEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG00@Z @ 0x180184268 (--$EventQueued@PEBGPEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG00@Z.c)
 *     ??$Destroyed@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x1801843CC (--$Destroyed@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z.c)
 *     ??$VisibilityRevokedChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x1801844F0 (--$VisibilityRevokedChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEA.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018B014 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18018B440 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18018BE38 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::OnViewStateChanged(
        HSTRING *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdx
  int v9; // eax
  unsigned __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  HSTRING string; // [rsp+28h] [rbp-E0h] BYREF
  PCWSTR StringRawBuffer; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-C8h] BYREF
  PCWSTR v19; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v21[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v20[1] = -2LL;
  string = (HSTRING)WindowsGetStringRawBuffer(this[2], 0LL);
  StringRawBuffer = WindowsGetStringRawBuffer(this[1], 0LL);
  SingleViewExperienceTelemetry::OnPropertyChanged::Start<unsigned short const *,unsigned short const *>((SingleViewExperienceTelemetry::OnPropertyChanged *)v21);
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 56LL))(
         a2,
         &v17);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x148,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_30;
  }
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v18);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 331LL;
LABEL_25:
    v10 = (unsigned int)v6;
    goto LABEL_26;
  }
  if ( (_DWORD)v17 )
  {
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this[3];
    if ( v8 && (unsigned int)SHIsSameObject(v18, v8) )
    {
      switch ( (_DWORD)v17 )
      {
        case 1:
          v20[0] = WindowsGetStringRawBuffer(this[2], 0LL);
          v19 = WindowsGetStringRawBuffer(this[1], 0LL);
          SingleViewExperienceTelemetry::OnPropertyChanged::PropertiesChanged<unsigned short const *,unsigned short const *>(
            v21,
            &v19,
            v20);
          v6 = CSingleViewShellExperience::OnViewPropertiesChangedBase((CSingleViewShellExperience *)this, a2);
          v5 = v6;
          if ( v6 < 0 )
          {
            v7 = 353LL;
            goto LABEL_25;
          }
          break;
        case 2:
          WindowsDeleteString(0LL);
          string = 0LL;
          v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, HSTRING *))(*(_QWORD *)a2 + 64LL))(
                  a2,
                  &string);
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x168,
              (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
              (const char *)(unsigned int)v11);
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          v19 = WindowsGetStringRawBuffer(this[2], 0LL);
          v20[0] = WindowsGetStringRawBuffer(this[1], 0LL);
          SingleViewExperienceTelemetry::OnPropertyChanged::EventQueued<unsigned short const *,unsigned short const *,unsigned short const *>(
            v21,
            v20,
            &v19,
            &StringRawBuffer);
          v12 = CSingleViewShellExperience::OnEventQueued((CSingleViewShellExperience *)this, a2);
          v5 = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x16A,
              (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
              (const char *)(unsigned int)v12);
            WindowsDeleteString(string);
            goto LABEL_28;
          }
          WindowsDeleteString(string);
          break;
        case 3:
          StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
          string = (HSTRING)WindowsGetStringRawBuffer(this[1], 0LL);
          SingleViewExperienceTelemetry::OnPropertyChanged::Destroyed<unsigned short const *,unsigned short const *>(
            v21,
            &string,
            &StringRawBuffer);
          v6 = CSingleViewShellExperience::OnViewDestroyedBase((CSingleViewShellExperience *)this);
          v5 = v6;
          if ( v6 < 0 )
          {
            v7 = 368LL;
            goto LABEL_25;
          }
          break;
        case 4:
          StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
          string = (HSTRING)WindowsGetStringRawBuffer(this[1], 0LL);
          SingleViewExperienceTelemetry::OnPropertyChanged::VisibilityRevokedChanged<unsigned short const *,unsigned short const *>(
            v21,
            &string,
            &StringRawBuffer);
          v9 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)this[11] + 64LL))(this[11], this);
          v5 = v9;
          if ( v9 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x21D,
              (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
              (const char *)(unsigned int)v9);
            v10 = v5;
            v7 = 373LL;
LABEL_26:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)v7,
              (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
              (const char *)v10);
            goto LABEL_28;
          }
          break;
      }
    }
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
    string = (HSTRING)WindowsGetStringRawBuffer(this[1], 0LL);
    SingleViewExperienceTelemetry::OnPropertyChanged::Created<unsigned short const *,unsigned short const *>(
      v21,
      &string,
      &StringRawBuffer);
    v6 = CSingleViewShellExperience::OnViewCreatedBase((CSingleViewShellExperience *)this);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 337LL;
      goto LABEL_25;
    }
  }
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
  v5 = 0;
LABEL_28:
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v13)[2])(v13);
  }
LABEL_30:
  v21[0] = &SingleViewExperienceTelemetry::OnPropertyChanged::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v21);
  return v5;
}
