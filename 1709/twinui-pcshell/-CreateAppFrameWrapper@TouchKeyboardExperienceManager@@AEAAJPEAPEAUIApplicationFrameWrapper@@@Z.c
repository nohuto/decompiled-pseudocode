/*
 * XREFs of ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x18019CE2C
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18019D214 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::CreateAppFrameWrapper(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrameWrapper **a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  LONG WindowLongW; // eax
  _QWORD *v10; // rdx
  int v11; // eax
  struct IApplicationFrameWrapper *v12; // rax
  __int64 v13; // rcx
  struct IApplicationFrameWrapper *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IApplicationFrameWrapper *v17; // [rsp+50h] [rbp+20h] BYREF
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  HWND hWnd; // [rsp+68h] [rbp+38h] BYREF

  v17 = 0LL;
  v4 = *((_QWORD *)this + 52);
  if ( !v4 )
  {
    v5 = -2144927145;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4AE,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80270257LL);
    goto LABEL_20;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, struct IApplicationFrameWrapper **))(*(_QWORD *)v4 + 24LL))(v4, &v17);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4AF,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_20;
  }
  v18 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64 *))(*(_QWORD *)v17 + 32LL))(v17, &v18);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 1202LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_18;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v18 + 24LL))(v18, &hWnd);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 1205LL;
    goto LABEL_16;
  }
  WindowLongW = GetWindowLongW(hWnd, -20);
  SetWindowLongW(hWnd, -20, WindowLongW | 0x8000000);
  if ( *((_QWORD *)this + 58) )
  {
    v10 = (_QWORD *)((char *)this + 448);
    if ( *((_QWORD *)this + 59) >= 8uLL )
      v10 = (_QWORD *)*v10;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v18 + 72LL))(v18, v10, 0LL);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4BE,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
  }
  v7 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v17 + 40LL))(v17, 1LL);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 1218LL;
    goto LABEL_16;
  }
  v12 = v17;
  v17 = 0LL;
  *a2 = v12;
  v5 = 0;
LABEL_18:
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_20:
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrameWrapper *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v5;
}
