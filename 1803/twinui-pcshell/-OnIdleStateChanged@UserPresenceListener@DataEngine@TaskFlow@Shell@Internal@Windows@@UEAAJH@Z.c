/*
 * XREFs of ?OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z @ 0x1801A97A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1800FA514 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801A8EF8 (--$GetActivationFactory@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@w.c)
 *     ??$UserPresenceDataCreated@AEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_J@TaskFlowDataEngineTelemetry@@SAXAEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_J@Z @ 0x1801A912C (--$UserPresenceDataCreated@AEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AE.c)
 *     ??$UserPresenceIdleState@AEAH@TaskFlowDataEngineTelemetry@@SAXAEAH@Z @ 0x1801A93CC (--$UserPresenceIdleState@AEAH@TaskFlowDataEngineTelemetry@@SAXAEAH@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::OnIdleStateChanged(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this,
        int a2)
{
  unsigned __int64 v3; // rbx
  int v4; // eax
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+78h] [rbp+20h] BYREF

  v12 = a2;
  v10[1] = -2LL;
  try
  {
    LOWORD(v13) = 0;
    TaskFlowDataEngineTelemetry::UserPresenceIdleState<int &>((__int64)&v12);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    v10[0] = v3;
    wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceDataFactory>((const WCHAR *)&v9);
    SystemTimeAsFileTime.dwLowDateTime = v12 != 0;
    v8 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, bool, unsigned __int64, __int64 *))(*(_QWORD *)v9 + 48LL))(
           v9,
           v12 != 0,
           v3,
           &v8);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        109LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
        (const char *)(unsigned int)v4);
    TaskFlowDataEngineTelemetry::UserPresenceDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceState &,__int64 &>(
      (int *)&SystemTimeAsFileTime,
      v10);
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7), v8);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        113LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
        (const char *)(unsigned int)v5);
    LOBYTE(v13) = 1;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x76,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
                           v6);
  }
  return result;
}
