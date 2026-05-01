/*
 * XREFs of ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180181330
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180180F38 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x180180EEC (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801815C8 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x180181734 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::OnViewCreatedBase(
        CSingleViewShellExperience *this,
        CSingleViewShellExperience **a2)
{
  int v4; // esi
  int v5; // ebp
  int v6; // eax
  CSingleViewShellExperience *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  int v11; // edi
  char v12; // si
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  CSingleViewShellExperience *v24; // [rsp+28h] [rbp-30h] BYREF
  char v25; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CSingleViewShellExperience *v27; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 3) )
  {
    v4 = *((_DWORD *)this + 16);
    v5 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 16) = 0;
    *((_DWORD *)this + 17) = 0;
    v6 = CSingleViewShellExperience::DestroyView(this);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x189,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v6);
    *((_DWORD *)this + 16) = v4;
    *((_DWORD *)this + 17) = v5;
  }
  v7 = 0LL;
  if ( &v27 != a2 )
  {
    v7 = *a2;
    *a2 = 0LL;
  }
  v8 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v7;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v27 = this;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v24, &v27);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 32LL))(*((_QWORD *)this + 10));
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x194,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v9);
    v12 = v25;
    goto LABEL_36;
  }
  v12 = 0;
  v25 = 0;
  if ( *((_DWORD *)this + 16) == 2 )
  {
    v11 = -2147023673;
    goto LABEL_30;
  }
  v13 = *((unsigned int *)this + 15);
  if ( (_DWORD)v13 )
  {
    v14 = CSingleViewShellExperience::SetWindowBand(this, v13);
    v11 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1A3,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_36;
    }
  }
  if ( *((_BYTE *)this + 53) )
  {
    v15 = *((_DWORD *)this + 19);
    if ( v15 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 336LL))(*((_QWORD *)this + 3), 1LL);
      v17 = v16;
      if ( v16 >= 0 )
      {
        *((_DWORD *)this + 19) = 1;
        v17 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x63,
          (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
          (const char *)(unsigned int)v16);
      }
      if ( v17 >= 0 )
        *((_DWORD *)this + 18) = v15;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xA5,
          (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
          (const char *)(unsigned int)v17);
    }
    LOBYTE(v10) = *((_BYTE *)this + 53);
    v18 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *, __int64))(**((_QWORD **)this + 11) + 96LL))(
            *((_QWORD *)this + 11),
            this,
            v10);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AE,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v18);
  }
  if ( !*((_QWORD *)this + 3) )
  {
    v11 = -2147023673;
    v21 = 441LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_36;
  }
  v19 = (***((__int64 (__fastcall ****)(_QWORD, CSingleViewShellExperience *))this + 11))(*((_QWORD *)this + 11), this);
  v11 = v19;
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B5,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v19);
  if ( v11 < 0 )
  {
LABEL_30:
    v20 = CSingleViewShellExperience::DestroyView(this);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1BF,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v20);
    *((_DWORD *)this + 16) = 0;
    *((_DWORD *)this + 17) = 0;
    CSingleViewShellExperience::ResetViews(this);
    v21 = 452LL;
    goto LABEL_35;
  }
LABEL_36:
  if ( v12 )
  {
    v22 = CSingleViewShellExperience::DestroyView(v24);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x193,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v22);
  }
  return (unsigned int)v11;
}
