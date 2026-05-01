/*
 * XREFs of ?_CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18016C4CC
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@UEAAJPEAUMsgString@@@Z @ 0x18016B4A0 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@UEAAJPEAUMsgString@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?_ChangeExperiencePropertiesForView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18016CE3C (-_ChangeExperiencePropertiesForView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_673908d937c0411dbdcd60700f9c4b37___ @ 0x18016D844 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_673908d937c0411dbdcd60700f9c4b37___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TouchKeyboardExperienceManager::_CreateModalExperienceAsync(TouchKeyboardExperienceManager *this)
{
  __int64 v2; // rdi
  PCWSTR StringRawBuffer; // r12
  HMONITOR v4; // rax
  int ScaleFactorForMonitor; // eax
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  LONG WindowLongW; // eax
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  IUnknown *v28; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  HWND hWnd; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v36[3]; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v37[24]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  __int64 hasEmbedNull; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v40; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v41; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v42; // [rsp+C8h] [rbp+60h] BYREF

  v36[1] = -2LL;
  v2 = *((_QWORD *)this + 41);
  v36[2] = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  WindowsStringHasEmbeddedNull(*((HSTRING *)this + 45), (BOOL *)&hasEmbedNull);
  if ( (_DWORD)hasEmbedNull )
  {
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2AA,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80070057LL);
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 45), 0LL);
    *((_DWORD *)this + 81) = 100;
    v4 = MonitorFromWindow(0LL, 1u);
    ScaleFactorForMonitor = GetScaleFactorForMonitor(v4, (char *)this + 324);
    v6 = ScaleFactorForMonitor;
    if ( ScaleFactorForMonitor >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x29D,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ScaleFactorForMonitor);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2AC,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    v36[0] = this;
    wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)v37, v36);
    if ( !v2 )
    {
      v7 = -2144927145;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B3,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)0x80270257LL);
      goto LABEL_50;
    }
    v8 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v40);
    v7 = v9;
    if ( v9 < 0 )
    {
      v10 = (unsigned int)v9;
      v11 = 692LL;
LABEL_47:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)v10);
      goto LABEL_50;
    }
    v12 = v40;
    if ( *((_QWORD *)this + 38) != v40 )
    {
      v13 = v40;
      if ( v40 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
        v12 = v40;
      }
      v14 = *((_QWORD *)this + 38);
      *((_QWORD *)this + 38) = v13;
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v12 = v40;
      }
    }
    v15 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, &v41);
    v7 = v16;
    if ( v16 < 0 )
    {
      v10 = (unsigned int)v16;
      v11 = 695LL;
      goto LABEL_47;
    }
    v17 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v41 + 24LL))(v41, &hWnd);
    v7 = v17;
    if ( v17 < 0 )
    {
      v10 = (unsigned int)v17;
      v11 = 698LL;
      goto LABEL_47;
    }
    WindowLongW = GetWindowLongW(hWnd, -20);
    SetWindowLongW(hWnd, -20, WindowLongW | 0x8000000);
    v19 = v41;
    v20 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 144LL))(v19, &v42);
    v7 = v21;
    if ( v21 < 0 )
    {
      v10 = (unsigned int)v21;
      v11 = 705LL;
      goto LABEL_47;
    }
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v42 + 88LL))(v42, 255LL, 4LL);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2C3,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v22);
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v41 + 112LL))(v41, 31LL, 1LL);
    v7 = v23;
    if ( v23 < 0 )
    {
      v10 = (unsigned int)v23;
      v11 = 708LL;
      goto LABEL_47;
    }
    v24 = TouchKeyboardExperienceManager::_ChangeExperiencePropertiesForView(
            this,
            (TouchKeyboardExperienceManager *)((char *)this + 296));
    v7 = v24;
    if ( v24 < 0 )
    {
      v10 = (unsigned int)v24;
      v11 = 712LL;
      goto LABEL_47;
    }
    if ( StringRawBuffer )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, PCWSTR, _QWORD))(*(_QWORD *)v41 + 72LL))(v41, StringRawBuffer, 0LL);
      if ( v25 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2CD,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v25);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 48LL))(v40, 3LL);
    v7 = v26;
    if ( v26 < 0 )
    {
      v10 = (unsigned int)v26;
      v11 = 721LL;
      goto LABEL_47;
    }
    v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 128LL))(v40, 1LL);
    if ( v27 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D3,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v27);
    v36[0] = StringRawBuffer;
    v28 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_673908d937c0411dbdcd60700f9c4b37___(
                          &hasEmbedNull,
                          v36);
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::RunTask(0, 0, CurrentThreadId, 0, v28, 0LL);
    v30 = hasEmbedNull;
    if ( hasEmbedNull )
    {
      hasEmbedNull = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    if ( v7 < 0 )
    {
      v10 = (unsigned int)v7;
      v11 = 733LL;
      goto LABEL_47;
    }
    v7 = 0;
  }
LABEL_50:
  v31 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v7;
}
