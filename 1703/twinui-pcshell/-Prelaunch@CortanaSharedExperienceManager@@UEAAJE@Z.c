/*
 * XREFs of ?Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x1800BA600
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180098068 (-Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009BA50 (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009CBDC (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009D264 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??$Start@$$V@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x18009E5A0 (--$Start@$$V@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@SA-AV01@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::Prelaunch(CortanaSharedExperienceManager *this)
{
  const struct _TlgProvider_t *v2; // rax
  HRESULT v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v10[40]; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v7[1] = -2LL;
  CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::Start<>((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v10);
  LOBYTE(v7[0]) = 0;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 60) + 72LL))(*((_QWORD *)this + 60), v7) >= 0
    && LOBYTE(v7[0]) )
  {
    goto LABEL_9;
  }
  v2 = CortanaProactiveLogging::Provider();
  if ( *(_DWORD *)v2 > 4u )
    TlgWrite(v2, &unk_1801F9957, (LPCGUID)(v10[6] + 8LL), 0LL, 2u, &pData);
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"StartMode=Idle&QuerySource=Hidden&Positioner=desktop",
         0x34u,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
  v4 = (*(__int64 (__fastcall **)(_QWORD, HSTRING))(**((_QWORD **)this + 59) + 72LL))(*((_QWORD *)this + 59), string);
  v5 = v4;
  if ( v4 >= 0 )
  {
LABEL_9:
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v10);
    v10[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::`vftable';
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v10);
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x16D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    string = 0LL;
    v10[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::`vftable';
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v10);
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v10);
    return v5;
  }
}
