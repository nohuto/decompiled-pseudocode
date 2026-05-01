/*
 * XREFs of ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18004EF60
 * Callers:
 *     ?ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004FF50 (-ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180050B20 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call @ 0x18003A320 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Do_call.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18005A704 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x180087740 (--$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogg.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180110E88 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall ViewWrapperBase::PushDesiredPositionToWindow(__int64 a1, char a2)
{
  UINT uFlags; // eax
  int cy; // r15d
  int v6; // r8d
  int v7; // edi
  const char *v8; // r9
  __int64 *v9; // rbx
  char v10; // r12
  int v11; // edi
  __int64 v12; // r10
  REGHANDLE v13; // rcx
  char v14; // al
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, char *); // rax
  char v17[8]; // [rsp+40h] [rbp-69h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-61h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-59h] BYREF
  int v20; // [rsp+54h] [rbp-55h] BYREF
  int v21; // [rsp+58h] [rbp-51h] BYREF
  __int64 v22; // [rsp+60h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-29h] BYREF
  void *v25; // [rsp+90h] [rbp-19h]
  int v26; // [rsp+98h] [rbp-11h]
  int v27; // [rsp+9Ch] [rbp-Dh]
  __int64 *v28; // [rsp+A0h] [rbp-9h]
  __int64 v29; // [rsp+A8h] [rbp-1h]
  int *v30; // [rsp+B0h] [rbp+7h]
  __int64 v31; // [rsp+B8h] [rbp+Fh]
  int *v32; // [rsp+C0h] [rbp+17h]
  __int64 v33; // [rsp+C8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  if ( *(_QWORD *)(a1 + 264) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1) )
      a2 &= ~2u;
    uFlags = 82964;
    if ( (a2 & 1) == 0 )
      uFlags = 82966;
    if ( (a2 & 2) == 0 )
      uFlags |= 1u;
    cy = *(_DWORD *)(a1 + 212) - *(_DWORD *)(a1 + 204);
    v6 = *(_DWORD *)(a1 + 200);
    v7 = *(_DWORD *)(a1 + 208) - v6;
    if ( SetWindowPos(*(HWND *)(a1 + 264), 0LL, v6, *(_DWORD *)(a1 + 204), v7, cy, uFlags) )
    {
      v9 = (__int64 *)(a1 + 352);
      v10 = *((_DWORD *)v9 + 2) == 0;
      if ( v7 != *((_DWORD *)v9 + 7) || cy != *((_DWORD *)v9 + 8) )
      {
        if ( *((_BYTE *)v9 + 24) )
        {
          WindowReadyState::WaitFlags::Set(v9 + 1, v9, 2LL);
          BeginLayoutUpdate(*v9);
        }
        Context = (LPVOID)__PAIR64__(cy, v7);
        *(__int64 *)((char *)v9 + 28) = __PAIR64__(cy, v7);
      }
      ++v9[2];
      ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
        v9,
        v9 + 2,
        (char *)v9 + 28,
        v9 + 4);
      v11 = *((_DWORD *)v9 + 2);
      *((_DWORD *)v9 + 2) = v11 | 8;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_180438940;
        qword_180438940[0] = &LockScreenServiceLogging::`vftable';
        qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
        InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
      }
      v12 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v12 > 5u )
      {
        v22 = *v9;
        v28 = &v22;
        v30 = &v20;
        v21 = *((_DWORD *)v9 + 2);
        v32 = &v21;
        v29 = 8LL;
        v20 = v11;
        v31 = 4LL;
        v33 = 4LL;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = *(_QWORD *)(v12 + 8);
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180397989 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v13 = *(_QWORD *)(v12 + 32);
        EventDescriptor.Keyword = 0LL;
        UserData.Size = *(unsigned __int16 *)UserData.Ptr;
        v25 = &unk_180397994;
        UserData.Reserved = 2;
        v26 = 66;
        v27 = 1;
        EventWriteTransfer(v13, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
      }
      v14 = *v9 && !*((_DWORD *)v9 + 2);
      if ( v10 != v14 )
      {
        v15 = v9[12];
        v17[0] = v14;
        if ( !v15 )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x18004F255LL);
        }
        v16 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 16LL);
        if ( v16 == std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call )
          std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call(v15, v17);
        else
          v16(v15, v17);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x938,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        v8);
    }
  }
}
