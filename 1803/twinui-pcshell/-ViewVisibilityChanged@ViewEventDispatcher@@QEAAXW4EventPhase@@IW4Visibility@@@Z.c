/*
 * XREFs of ?ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z @ 0x1800363D0
 * Callers:
 *     ?OnRequestEndPresentView@ViewManagerBridge@@UEAAJI_NW4Direction@Navigation@@W4AnimationType@3@W4AnimationFlags@3@@Z @ 0x1800584D0 (-OnRequestEndPresentView@ViewManagerBridge@@UEAAJI_NW4Direction@Navigation@@W4AnimationType@3@W4.c)
 *     ?OnRequestBeginPresentView@ViewManagerBridge@@UEAAJI_N@Z @ 0x180058840 (-OnRequestBeginPresentView@ViewManagerBridge@@UEAAJI_N@Z.c)
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call @ 0x18003A320 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Do_call.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x180054420 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18005A704 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18005B5B4 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ViewEventDispatcher::ViewVisibilityChanged(RTL_SRWLOCK *a1, unsigned int a2, int a3, unsigned int a4)
{
  RTL_SRWLOCK *v8; // rsi
  unsigned int (__fastcall *v9)(ViewWrapperBase *__hidden); // rdx
  _QWORD *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rbx
  _DWORD *v13; // rcx
  unsigned int (__fastcall *v14)(ViewWrapperBase *__hidden); // rax
  int v15; // eax
  int v16; // eax
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD **); // rcx
  int v18; // eax
  _QWORD *v19; // rbx
  void (__fastcall *v20)(_QWORD, _QWORD, _QWORD); // rax
  RTL_SRWLOCK *v21; // rdi
  _QWORD *v22; // rcx
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // rax
  WindowReadyState *v24; // rbx
  char v25; // bp
  char v26; // al
  _QWORD *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  void (__fastcall *v30)(__int64, int *); // rax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  _QWORD *v32; // [rsp+80h] [rbp+8h] BYREF
  int v33; // [rsp+90h] [rbp+18h] BYREF

  v32 = 0LL;
  v8 = a1 + 37;
  AcquireSRWLockShared(a1 + 37);
  v10 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
  }
  v11 = 0LL;
  v12 = 0LL;
  if ( a1[47].Ptr )
  {
    v9 = ViewWrapperBase::GetViewInstanceId;
    while ( 1 )
    {
      v13 = (_DWORD *)*((_QWORD *)a1[46].Ptr + v12);
      v14 = *(unsigned int (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)v13 + 592LL);
      if ( v14 == ViewWrapperBase::GetViewInstanceId )
      {
        v15 = v13[35];
      }
      else
      {
        v15 = ((__int64 (__fastcall *)(_DWORD *, unsigned int (__fastcall *)(ViewWrapperBase *__hidden)))v14)(
                v13,
                ViewWrapperBase::GetViewInstanceId);
        v9 = ViewWrapperBase::GetViewInstanceId;
      }
      if ( v15 == a3 )
        break;
      if ( (PVOID)++v12 >= a1[47].Ptr )
        goto LABEL_50;
    }
    v11 = v12;
    v16 = 0;
  }
  else
  {
LABEL_50:
    v16 = -2147319765;
  }
  if ( v16 >= 0 )
  {
    v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))*((_QWORD *)a1[46].Ptr + v11);
    v18 = (**v17)(v17, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v32);
    if ( v18 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B8,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v18,
        -2);
  }
  if ( v8 )
    ReleaseSRWLockShared(v8);
  v19 = v32;
  if ( v32 )
  {
    v20 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*v32 + 696LL);
    if ( (char *)v20 != (char *)&ViewWrapperBase::VisibilityChanged )
    {
      v20(v32, a2, a4);
      goto LABEL_33;
    }
    v21 = (RTL_SRWLOCK *)(v32[20] + 296LL);
    AcquireSRWLockExclusive(v21);
    v22 = v19 - 1;
    v23 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(v19 - 1) + 192LL);
    v9 = (unsigned int (__fastcall *)(ViewWrapperBase *__hidden))&UAPViewWrapper::v_OnViewVisibilityChanged;
    if ( (char *)v23 != (char *)&UAPViewWrapper::v_OnViewVisibilityChanged )
    {
      v23(v22, a2, a4);
LABEL_31:
      if ( v21 )
        ReleaseSRWLockExclusive(v21);
      goto LABEL_33;
    }
    v24 = (WindowReadyState *)(v22 + 44);
    v25 = v22[44] && !*((_DWORD *)v22 + 90);
    if ( a4 == 1 )
    {
      if ( a2 )
      {
        v33 = *((_DWORD *)v22 + 90);
        *((_DWORD *)v22 + 90) = v33 & 0xFFFFFFFE;
        ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
          v22 + 44,
          &v33,
          v22 + 45);
        if ( !*(_QWORD *)v24 )
          goto LABEL_29;
        if ( !*((_DWORD *)v24 + 2) )
          WindowReadyState::_WaitForUnfreezeIfNecessary(v24);
LABEL_27:
        if ( *(_QWORD *)v24 && !*((_DWORD *)v24 + 2) )
        {
          v26 = 1;
LABEL_30:
          if ( v25 != v26 )
          {
            LOBYTE(v33) = v26;
            v29 = *((_QWORD *)v24 + 12);
            if ( !v29 )
            {
              std::_Xbad_function_call();
              JUMPOUT(0x180036672LL);
            }
            v30 = *(void (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 16LL);
            if ( (char *)v30 == (char *)std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call )
              std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call(v29, &v33);
            else
              v30(v29, &v33);
          }
          goto LABEL_31;
        }
LABEL_29:
        v26 = 0;
        goto LABEL_30;
      }
      if ( !*((_BYTE *)v22 + 376) || (v22[45] & 1) == 0 )
        goto LABEL_27;
      v28 = 2LL;
    }
    else
    {
      if ( !a2 )
        goto LABEL_27;
      v28 = 1LL;
    }
    WindowReadyState::WaitFlags::Set(v22 + 45, v22 + 44, v28);
    goto LABEL_27;
  }
LABEL_33:
  v27 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(_QWORD *, unsigned int (__fastcall *)(ViewWrapperBase *__hidden)))(*v27 + 16LL))(v27, v9);
  }
}
