/*
 * XREFs of ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x1800476B0
 * Callers:
 *     _lambda_0d74f069fa796de4b01adcedcd59308d_::operator() @ 0x18000EA38 (_lambda_0d74f069fa796de4b01adcedcd59308d_--operator().c)
 *     _lambda_8e77f3627fbb508724cf2b62e627d849_::operator() @ 0x180010D50 (_lambda_8e77f3627fbb508724cf2b62e627d849_--operator().c)
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180014950 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180014FA0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0001_0001@@@Z @ 0x180053930 (-SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x180105D94 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_Ld @ 0x180132694 (WPP_SF_Ld.c)
 */

// Hidden C++ exception states: #wind=1
signed int __fastcall CTaskWindow::SetPresentationState(unsigned int *a1, __int64 a2, unsigned int a3)
{
  signed int result; // eax
  _DWORD *v7; // rcx
  __int64 (__fastcall *v8)(CTaskWindow *); // rax
  int NativeWindow; // eax
  __int64 v10; // r10
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(__int64, __int64, _QWORD); // rax
  __int64 v19; // [rsp+30h] [rbp-79h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-71h] BYREF
  WINBOOL v21; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v22; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-65h] BYREF
  int v24; // [rsp+48h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-59h] BYREF
  LPVOID v26; // [rsp+58h] [rbp-51h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-49h] BYREF
  __int64 v28; // [rsp+70h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-29h] BYREF
  void *v30; // [rsp+90h] [rbp-19h]
  int v31; // [rsp+98h] [rbp-11h]
  int v32; // [rsp+9Ch] [rbp-Dh]
  int *v33; // [rsp+A0h] [rbp-9h]
  __int64 v34; // [rsp+A8h] [rbp-1h]
  unsigned int *v35; // [rsp+B0h] [rbp+7h]
  __int64 v36; // [rsp+B8h] [rbp+Fh]
  int *v37; // [rsp+C0h] [rbp+17h]
  __int64 v38; // [rsp+C8h] [rbp+1Fh]

  v28 = -2LL;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Ld(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_c7112eb849c034c9bca4c47c1b6552d2_Traceguids, a1[34]);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438698;
    qword_180438698[0] = &IamTraceLogging::`vftable';
    atexit(lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
    CAppManagerTelemetry::Create((CAppManagerTelemetry *)qword_180438698);
    InitOnceComplete(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, qword_180438698);
  }
  result = (int)Context;
  v7 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v7 && *v7 )
  {
    v24 = a2;
    v23 = a3;
    v8 = *(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)a1 + 32LL);
    if ( v8 == CTaskWindow::GetNativeWindow )
      NativeWindow = CTaskWindow::GetNativeWindow((CTaskWindow *)a1);
    else
      NativeWindow = v8((CTaskWindow *)a1);
    v22 = NativeWindow;
    v26 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v21, &v26) && v21 )
    {
      v26 = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    result = (int)v26;
    v10 = *((_QWORD *)v26 + 1);
    if ( *(_DWORD *)v10 > 5u )
    {
      v33 = &v22;
      v34 = 4LL;
      v35 = &v23;
      v36 = 4LL;
      v37 = &v24;
      v38 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180388DB9 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v10 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v30 = &unk_180388DC4;
      v31 = 56;
      v32 = 1;
      result = EventWriteTransfer(*(_QWORD *)(v10 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  a1[34] = a3;
  v19 = 0LL;
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a1 + 6);
  if ( v11 )
  {
    result = (**v11)(v11, &GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20, &v19);
    if ( result >= 0 )
    {
      v12 = a1[34];
      if ( v12 != 3 )
      {
        if ( v12 == 4 )
        {
          if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v19 + 24LL) == ViewWrapperBase::SetFrameWindow )
            result = ViewWrapperBase::SetFrameWindow(v19, a2, 1LL);
          else
            result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v19 + 24LL))(v19, a2, 1LL);
          goto LABEL_26;
        }
        if ( !v12 || (v13 = v12 - 1) == 0 || (v14 = v13 - 1) == 0 )
        {
          v15 = v19;
          v16 = 0LL;
          v18 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19 + 24LL);
LABEL_35:
          result = v18(v15, v16, 0LL);
          goto LABEL_26;
        }
        if ( v14 != 3 )
          goto LABEL_26;
      }
      v15 = v19;
      v16 = a2;
      if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v19 + 24LL) == ViewWrapperBase::SetFrameWindow )
      {
        result = ViewWrapperBase::SetFrameWindow(v19, a2, 0LL);
        goto LABEL_26;
      }
      v18 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19 + 24LL);
      goto LABEL_35;
    }
  }
LABEL_26:
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return result;
}
