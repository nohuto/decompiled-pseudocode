/*
 * XREFs of ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180058410
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005A958 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005A984 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005AA60 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18005F998 (-StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::GetWindowAndPrepareForActivation(__int64 a1, char a2, _QWORD *a3)
{
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+50h] [rbp-B0h]
  int *v13; // [rsp+58h] [rbp-A8h]
  int *v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+68h] [rbp-98h] BYREF
  char v16; // [rsp+6Ch] [rbp-94h]
  int v17; // [rsp+90h] [rbp-70h] BYREF
  const char *v18; // [rsp+98h] [rbp-68h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  char v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+B0h] [rbp-50h]
  _BYTE v22[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+148h] [rbp+48h]
  __int64 v24; // [rsp+150h] [rbp+50h]
  __int64 v25; // [rsp+158h] [rbp+58h]
  __int64 v26; // [rsp+160h] [rbp+60h]

  v10[1] = -2LL;
  v11[1] = 0LL;
  v11[2] = v11;
  v11[3] = 0LL;
  v12 = 0;
  v13 = &v17;
  v14 = &v15;
  v15 = 0;
  v16 = 0;
  v20 = 0;
  v17 = 0;
  v18 = "GetWindowAndPrepareForActivation";
  v19 = 0LL;
  v21 = 1LL;
  v23 = 0LL;
  v24 = 0LL;
  memset(v22, 0, sizeof(v22));
  v25 = 0LL;
  v26 = 0LL;
  v11[0] = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::StartActivity(
    (CImmersiveAppTelemetry::GetWindowAndPrepareForActivation *)v11,
    *(const unsigned __int16 **)(a1 + 432));
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 576) || (*(_BYTE *)(a1 + 424) & 1) == 0 && (*(_DWORD *)(a1 + 424) & 8) == 0 )
  {
    v6 = -2147019873;
    goto LABEL_18;
  }
  if ( (a2 & 1) == 0 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 440LL))(a1) )
  {
    v6 = -2147023598;
    goto LABEL_18;
  }
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152)) )
  {
    *a3 = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152));
LABEL_13:
    v10[0] = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 288) + 128LL))(*(_QWORD *)(a1 + 288), v10);
    if ( v6 >= 0 )
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v10[0] + 24LL))(v10[0], a3);
    v8 = v10[0];
    if ( v10[0] )
    {
      v10[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_18;
  }
  v7 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 304) + 128LL))(**(_QWORD **)(a1 + 304)) )
    v7 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 304) + 32LL))(**(_QWORD **)(a1 + 304));
  v6 = v7 == 0 ? 0x80070005 : 0;
  if ( v7 )
  {
    CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(a1 + 152);
    goto LABEL_13;
  }
LABEL_18:
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v11, v6);
  v11[0] = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  return (unsigned int)v6;
}
