/*
 * XREFs of ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x180199B24
 * Callers:
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A50C4 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18019DB1C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?StartActivity@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x18019F8CC (-StartActivity@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801A0734 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801A11DC (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801A13E8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::EnsureInputAppIsActivated(TouchKeyboardExperienceManager *this)
{
  RTL_SRWLOCK *v2; // rdi
  int v3; // eax
  int ViewInfo; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9[4]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-D0h]
  _QWORD v11[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+68h] [rbp-A0h]
  int *v13; // [rsp+70h] [rbp-98h]
  int *v14; // [rsp+78h] [rbp-90h]
  int v15; // [rsp+80h] [rbp-88h] BYREF
  char v16; // [rsp+84h] [rbp-84h]
  int v17; // [rsp+A8h] [rbp-60h] BYREF
  const char *v18; // [rsp+B0h] [rbp-58h]
  __int64 v19; // [rsp+B8h] [rbp-50h]
  char v20; // [rsp+C0h] [rbp-48h]
  __int64 v21; // [rsp+C8h] [rbp-40h]
  _BYTE v22[144]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v23; // [rsp+160h] [rbp+58h]
  __int64 v24; // [rsp+168h] [rbp+60h]
  __int64 v25; // [rsp+170h] [rbp+68h]
  __int64 v26; // [rsp+178h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v10 = -2LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 624);
  AcquireSRWLockExclusive((PSRWLOCK)this + 78);
  v3 = *((_DWORD *)this + 154);
  if ( (v3 & 0xFFFFFFFA) == 0 && v3 != 5 )
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v11[1] = 0LL;
  v11[2] = v11;
  v11[3] = 0LL;
  LODWORD(v12) = 0;
  v13 = &v17;
  v14 = &v15;
  v15 = 0;
  v16 = 0;
  v20 = 0;
  v17 = 0;
  v18 = "InputAppResumeRequested";
  v19 = 0LL;
  v21 = 1LL;
  v23 = 0LL;
  v24 = 0LL;
  memset(v22, 0, sizeof(v22));
  v25 = 0LL;
  v26 = 0LL;
  v11[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested *)v11,
    *((_DWORD *)this + 154));
  *(_OWORD *)v9 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(this, 0LL, v9);
  v6 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 398LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_14;
  }
  ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)v9 + 336LL))(**(_QWORD **)v9, 3LL);
  v6 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 402LL;
    goto LABEL_12;
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v11,
    0LL);
  v6 = 0;
LABEL_14:
  if ( *(_QWORD *)&v9[2] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)&v9[2] + 8LL), 0xFFFFFFFF) == 1 )
    {
      v8 = *(_QWORD *)&v9[2];
      (***(void (__fastcall ****)(_QWORD))&v9[2])(*(_QWORD *)&v9[2]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v9[2] + 8LL))(*(_QWORD *)&v9[2]);
    }
  }
  v11[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v11);
  return v6;
}
