/*
 * XREFs of _lambda_3fdb60befb1dd70167fe026bdb430be3_::operator() @ 0x18019C298
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fdb60befb1dd70167fe026bdb430be3___::Run @ 0x18019F340 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3fdb60befb1dd70167fe026bdb430be3___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18019C600 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18019FA20 (-StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801A0734 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801A11DC (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801A13E8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1801DDD24 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_3fdb60befb1dd70167fe026bdb430be3_::operator()(__int64 *a1)
{
  __int64 *v2; // rcx
  int v3; // r14d
  int v4; // eax
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  RTL_SRWLOCK *v18; // rbx
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v21[3]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v22[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h]
  int *v24; // [rsp+80h] [rbp-88h]
  int *v25; // [rsp+88h] [rbp-80h]
  int v26; // [rsp+90h] [rbp-78h] BYREF
  char v27; // [rsp+94h] [rbp-74h]
  int v28; // [rsp+B8h] [rbp-50h] BYREF
  const char *v29; // [rsp+C0h] [rbp-48h]
  __int64 v30; // [rsp+C8h] [rbp-40h]
  char v31; // [rsp+D0h] [rbp-38h]
  __int64 v32; // [rsp+D8h] [rbp-30h]
  _BYTE v33[144]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v34; // [rsp+170h] [rbp+68h]
  __int64 v35; // [rsp+178h] [rbp+70h]
  __int64 v36; // [rsp+180h] [rbp+78h]
  __int64 v37; // [rsp+188h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v21[1] = -2LL;
  v22[1] = 0LL;
  v22[2] = v22;
  v22[3] = 0LL;
  LODWORD(v23) = 0;
  v24 = &v28;
  v25 = &v26;
  v26 = 0;
  v27 = 0;
  v31 = 0;
  v28 = 0;
  v29 = "InputAppActivation";
  v30 = 0LL;
  v32 = 1LL;
  v34 = 0LL;
  v35 = 0LL;
  memset(v33, 0, sizeof(v33));
  v36 = 0LL;
  v37 = 0LL;
  v22[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivation::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppActivation::StartActivity((TouchKeyboardExperienceTelemetryLogger::InputAppActivation *)v22);
  v2 = a1;
  if ( (unsigned __int64)a1[3] >= 8 )
    v2 = (__int64 *)*a1;
  v3 = ActivateApplicationForExperienceWithPropertySet(v2, &word_18021F3A8, L"TouchKeyboardExperienceId");
  v4 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges((TouchKeyboardExperienceManager *)a1[4]);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 1020LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v6);
    goto LABEL_30;
  }
  v8 = a1[4];
  v20 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v20);
  Instance = CoCreateInstance(
               &CLSID_ShellServiceHost,
               0LL,
               4u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)ppv);
  v5 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x40E,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
LABEL_7:
    v11 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_22;
  }
  v21[0] = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, _QWORD *))(*(_QWORD *)v20 + 24LL))(
          v20,
          &SID_ProcessLifetimeManagerControl,
          &GUID_48f4e2d1_eeba_461e_8f8f_6353da1a3aca,
          v21);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 1041LL;
    goto LABEL_11;
  }
  v15 = (_QWORD *)(v8 + 448);
  if ( *(_QWORD *)(v8 + 472) >= 8uLL )
    v15 = (_QWORD *)*v15;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, __int64, __int64))(*(_QWORD *)v21[0] + 24LL))(
          v21[0],
          v15,
          15LL,
          (v8 + 152) & -(__int64)(v8 != 0),
          v8 + 248);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 1046LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    v14 = v21[0];
    if ( v21[0] )
    {
      v21[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    goto LABEL_7;
  }
  v16 = v21[0];
  if ( v21[0] )
  {
    v21[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v5 = 0;
LABEL_22:
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 1021LL;
    goto LABEL_24;
  }
  v18 = (RTL_SRWLOCK *)(a1[4] + 624);
  AcquireSRWLockExclusive(v18);
  *(_DWORD *)(a1[4] + 616) = 1;
  if ( v18 )
    ReleaseSRWLockExclusive(v18);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v22,
    (unsigned int)v3);
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x404,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  v5 = v3;
LABEL_30:
  v22[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivation::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v22);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v22);
  return (unsigned int)v5;
}
