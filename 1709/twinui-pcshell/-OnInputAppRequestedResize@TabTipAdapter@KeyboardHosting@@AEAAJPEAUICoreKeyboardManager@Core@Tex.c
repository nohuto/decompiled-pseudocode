/*
 * XREFs of ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x1801A3AA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x1801999E8 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18019DB1C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x1801AB6AC (-VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Window.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedResize(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *a3)
{
  __int64 v5; // rdi
  int v6; // eax
  int LastError; // edi
  __int64 v8; // rdx
  int ViewInfo; // eax
  const char *v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  char v21; // [rsp+38h] [rbp-D0h] BYREF
  char v22; // [rsp+39h] [rbp-CFh] BYREF
  bool v23; // [rsp+3Ah] [rbp-CEh] BYREF
  struct tagRECT v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v26[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  int v28[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  HWND v30; // [rsp+80h] [rbp-88h] BYREF
  struct tagRECT v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+98h] [rbp-70h]
  bool *v33; // [rsp+A0h] [rbp-68h]
  char v34; // [rsp+A8h] [rbp-60h]
  __int128 v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C8h] [rbp-40h]
  struct tagRECT v37; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v38; // [rsp+E8h] [rbp-20h] BYREF
  struct tagRECT Rect; // [rsp+F8h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  unsigned int *v41; // [rsp+128h] [rbp+20h]
  __int64 v42; // [rsp+130h] [rbp+28h]
  __int64 *v43; // [rsp+138h] [rbp+30h]
  __int64 v44; // [rsp+140h] [rbp+38h]
  char *v45; // [rsp+148h] [rbp+40h]
  __int64 v46; // [rsp+150h] [rbp+48h]
  char *v47; // [rsp+158h] [rbp+50h]
  __int64 v48; // [rsp+160h] [rbp+58h]
  char *v49; // [rsp+168h] [rbp+60h]
  __int64 v50; // [rsp+170h] [rbp+68h]
  unsigned int *v51; // [rsp+178h] [rbp+70h]
  __int64 v52; // [rsp+180h] [rbp+78h]
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v36 = -2LL;
  v23 = 0;
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *))(*(_QWORD *)v5 + 8LL))(
      *((_QWORD *)this + 3),
      a2);
  v32 = v5;
  v33 = &v23;
  v34 = 1;
  v26[0] = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         v26);
  LastError = v6;
  if ( v6 < 0 )
  {
    v8 = 468LL;
LABEL_35:
    v17 = (unsigned int)v6;
    goto LABEL_36;
  }
  v27 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, __int64 *))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v27);
  LastError = v6;
  if ( v6 < 0 )
  {
    v8 = 470LL;
    goto LABEL_35;
  }
  v21 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, char *))(*(_QWORD *)a3 + 64LL))(
         a3,
         &v21);
  LastError = v6;
  if ( v6 < 0 )
  {
    v8 = 472LL;
    goto LABEL_35;
  }
  v35 = 0uLL;
  v31 = (struct tagRECT)0LL;
  v24 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*((RTL_SRWLOCK **)this + 7), v26[0], (__int64 *)&v24.left);
  LastError = ViewInfo;
  if ( ViewInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1C7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
LABEL_11:
    if ( *(_QWORD *)&v24.right )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)&v24.right + 8LL), 0xFFFFFFFF) == 1 )
      {
        v11 = *(_QWORD *)&v24.right;
        (***(void (__fastcall ****)(_QWORD))&v24.right)(*(_QWORD *)&v24.right);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v24.right + 8LL))(*(_QWORD *)&v24.right);
      }
    }
    goto LABEL_31;
  }
  v25 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)&v24.left + 8LL) + 32LL))(
          *(_QWORD *)(*(_QWORD *)&v24.left + 8LL),
          &v25);
  LastError = v12;
  if ( v12 < 0 )
  {
    v13 = 458LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_18;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v25 + 24LL))(v25, &v30);
  LastError = v12;
  if ( v12 < 0 )
  {
    v13 = 461LL;
    goto LABEL_17;
  }
  if ( !GetWindowRect(v30, &Rect) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1D0,
                  (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                  v10);
LABEL_18:
    v14 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    goto LABEL_11;
  }
  v31 = Rect;
  v15 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( *(_QWORD *)&v24.right )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)&v24.right + 8LL), 0xFFFFFFFF) == 1 )
    {
      v16 = *(_QWORD *)&v24.right;
      (***(void (__fastcall ****)(_QWORD))&v24.right)(*(_QWORD *)&v24.right);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v24.right + 8LL))(*(_QWORD *)&v24.right);
    }
  }
  LastError = 0;
LABEL_31:
  if ( LastError < 0 )
  {
    v17 = (unsigned int)LastError;
    v8 = 475LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)v17);
    goto LABEL_45;
  }
  v22 = 0;
  *(_QWORD *)v28 = 0LL;
  v29 = 0LL;
  *(float *)&v24.left = (float)v31.left;
  *(float *)&v24.top = (float)v31.top;
  *(float *)&v24.right = (float)(v31.right - v31.left);
  *(float *)&v24.bottom = (float)(v31.bottom - v31.top);
  v37 = v24;
  LOBYTE(v10) = v21;
  v6 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedResize(
         *((_QWORD *)this + 12),
         v27,
         &v37,
         v10,
         v28,
         &v22);
  LastError = v6;
  if ( v6 < 0 )
  {
    v8 = 484LL;
    goto LABEL_35;
  }
  LastError = 0;
  v26[1] = 0;
  if ( v22 )
  {
    v24.left = (int)*(float *)v28;
    v24.top = (int)*(float *)&v28[1];
    v24.right = (int)(float)(*(float *)&v29 + *(float *)v28);
    v24.bottom = (int)(float)(*(float *)&v28[1] + *((float *)&v29 + 1));
    v38 = v24;
    LastError = TouchKeyboardExperienceManager::OnInputAppRequestedResize(
                  *((TouchKeyboardExperienceManager **)this + 7),
                  v26[0],
                  &v38);
    v26[1] = LastError;
    v23 = LastError == 0;
  }
  if ( hProvider > 5u )
  {
    v18 = 0x200000000000LL;
    if ( (qword_1802B2100 & 0x200000000000LL) != 0 && (qword_1802B2108 & 0x200000000000LL) == qword_1802B2108 )
    {
      v41 = v26;
      v42 = 4LL;
      v43 = &v27;
      v44 = 4LL;
      v45 = (char *)&v27 + 4;
      v46 = 4LL;
      v47 = &v21;
      v48 = 1LL;
      v49 = &v22;
      v50 = 1LL;
      v51 = &v26[1];
      v52 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180268041, 0LL, 0LL, 8u, &pData);
      LastError = v26[1];
    }
  }
  if ( LastError < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)LastError);
LABEL_45:
  LOBYTE(v18) = v23;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 368LL))(v32, v18);
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D0,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v19);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  return (unsigned int)LastError;
}
