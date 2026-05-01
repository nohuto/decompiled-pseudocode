/*
 * XREFs of ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAPEAUIApplicationFrameTitleBar@@@Z @ 0x18019CFFC
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18019D214 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrameWrapper *a2,
        struct IApplicationFrameTitleBar **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  TouchKeyboardExperienceManager *v9; // rcx
  TouchKeyboardExperienceManager *v10; // rcx
  struct IApplicationFrameTitleBar *v11; // rax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  TouchKeyboardExperienceManager *v15; // [rsp+40h] [rbp+10h] BYREF
  __int64 v16; // [rsp+48h] [rbp+18h] BYREF

  v15 = this;
  v16 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4CC,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_25;
  }
  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 112LL))(v16, 127LL, 24LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 1231LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    v10 = v15;
    goto LABEL_23;
  }
  v8 = v16;
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(TouchKeyboardExperienceManager *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, TouchKeyboardExperienceManager **))(*(_QWORD *)v8 + 144LL))(v8, &v15);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 1232LL;
    goto LABEL_21;
  }
  v6 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, __int64, __int64))(*(_QWORD *)v15 + 48LL))(
         v15,
         1LL,
         1LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 1233LL;
    goto LABEL_21;
  }
  v6 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, __int64, _QWORD))(*(_QWORD *)v15 + 88LL))(
         v15,
         255LL,
         0LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 1234LL;
    goto LABEL_21;
  }
  v6 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, _QWORD))(*(_QWORD *)v15 + 56LL))(v15, 0LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 1237LL;
    goto LABEL_21;
  }
  v6 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, __int64))(*(_QWORD *)v15 + 104LL))(v15, 1LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 1240LL;
    goto LABEL_21;
  }
  v6 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, _QWORD))(*(_QWORD *)v15 + 32LL))(v15, 0LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 1241LL;
    goto LABEL_21;
  }
  v6 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, const WCHAR *))(*(_QWORD *)v15 + 24LL))(
         v15,
         &word_18021F3A8);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 1242LL;
    goto LABEL_21;
  }
  v11 = v15;
  v10 = 0LL;
  v15 = 0LL;
  *a3 = v11;
  v5 = 0;
LABEL_23:
  if ( v10 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(TouchKeyboardExperienceManager *))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_25:
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v5;
}
