/*
 * XREFs of ?Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x1800A0970
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009E2C0 (-Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StartActivity@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18009E778 (-StartActivity@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009FE0C (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A61EC (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A6874 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  _QWORD v10[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v11; // [rsp+88h] [rbp-80h]
  int *v12; // [rsp+90h] [rbp-78h]
  int *v13; // [rsp+98h] [rbp-70h]
  int v14; // [rsp+A0h] [rbp-68h] BYREF
  char v15; // [rsp+A4h] [rbp-64h]
  int v16; // [rsp+C8h] [rbp-40h] BYREF
  const char *v17; // [rsp+D0h] [rbp-38h]
  __int64 v18; // [rsp+D8h] [rbp-30h]
  char v19; // [rsp+E0h] [rbp-28h]
  __int64 v20; // [rsp+E8h] [rbp-20h]
  _BYTE v21[144]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v22; // [rsp+180h] [rbp+78h]
  __int64 v23; // [rsp+188h] [rbp+80h]
  __int64 v24; // [rsp+190h] [rbp+88h]
  __int64 v25; // [rsp+198h] [rbp+90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v7[1] = -2LL;
  v10[1] = 0LL;
  v10[2] = v10;
  v10[3] = 0LL;
  v11 = 0;
  v12 = &v16;
  v13 = &v14;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  v16 = 0;
  v17 = "CortanaExperienceManager_PreLaunch";
  v18 = 0LL;
  v20 = 1LL;
  v22 = 0LL;
  v23 = 0LL;
  memset(v21, 0, sizeof(v21));
  v24 = 0LL;
  v25 = 0LL;
  v10[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v10);
  LOBYTE(v7[0]) = 0;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 60) + 72LL))(*((_QWORD *)this + 60), v7) >= 0
    && LOBYTE(v7[0]) )
  {
    goto LABEL_9;
  }
  v2 = CortanaProactiveLogging::Provider();
  if ( *(_DWORD *)v2 > 4u )
    TlgWrite(v2, &unk_18025AF7D, (LPCGUID)(v13 + 2), 0LL, 2u, &pData);
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
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(v10);
    v10[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::`vftable';
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v10);
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x17C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    string = 0LL;
    v10[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::`vftable';
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v10);
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v10);
    return v5;
  }
}
