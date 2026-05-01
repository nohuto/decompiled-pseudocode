/*
 * XREFs of ?Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x18015D340
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180075030 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800750CC (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18015B014 (--1CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?CortanaExperienceManager_PreLaunch_LaunchRequired@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18015B870 (-CortanaExperienceManager_PreLaunch_LaunchRequired@CortanaExperienceManager_PreLaunch@CortanaPro.c)
 *     ?StartActivity@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18015DB48 (-StartActivity@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::Prelaunch(CortanaSharedExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v6; // [rsp+30h] [rbp-D8h]
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+50h] [rbp-B8h]
  _QWORD v9[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v6 = -2LL;
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v9,
    (__int64)"CortanaExperienceManager_PreLaunch");
  v9[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v9);
  LOBYTE(v5[0]) = 0;
  if ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 60) + 72LL))(*((_QWORD *)this + 60), v5) >= 0
    && LOBYTE(v5[0])
    || (CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::CortanaExperienceManager_PreLaunch_LaunchRequired((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v9),
        v8 = 0LL,
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"StartMode=Idle&QuerySource=Hidden&Positioner=desktop",
          0x35u,
          0x34u),
        v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 59) + 72LL))(*((_QWORD *)this + 59), v8),
        v3 = v2,
        v2 >= 0) )
  {
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)v9);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    v8 = 0LL;
  }
  CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::~CortanaExperienceManager_PreLaunch((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v9);
  return v3;
}
