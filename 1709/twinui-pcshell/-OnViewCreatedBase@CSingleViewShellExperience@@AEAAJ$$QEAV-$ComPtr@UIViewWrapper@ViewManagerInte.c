/*
 * XREFs of ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801D0A14
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801D0594 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x1801D0548 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D0C88 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x1801D0DF4 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::OnViewCreatedBase(CSingleViewShellExperience *this, char *a2)
{
  int v4; // esi
  int v5; // ebp
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // si
  int v10; // eax
  __int64 v11; // r8
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // ebp
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v25; // [rsp+60h] [rbp+8h] BYREF

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
  if ( &v25 != a2 )
  {
    v7 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v8 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v7;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = 1;
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 32LL))(*((_QWORD *)this + 10));
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = 404LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_37;
  }
  v9 = 0;
  if ( *((_DWORD *)this + 16) == 2 )
  {
    v12 = -2147023673;
    goto LABEL_31;
  }
  v14 = *((unsigned int *)this + 15);
  if ( (_DWORD)v14 )
  {
    v10 = CSingleViewShellExperience::SetWindowBand(this, v14);
    v12 = v10;
    if ( v10 < 0 )
    {
      v13 = 419LL;
      goto LABEL_16;
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
    LOBYTE(v11) = *((_BYTE *)this + 53);
    v18 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *, __int64))(**((_QWORD **)this + 11) + 96LL))(
            *((_QWORD *)this + 11),
            this,
            v11);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AE,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v18);
  }
  if ( !*((_QWORD *)this + 3) )
  {
    v12 = -2147023673;
    v21 = 441LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_37;
  }
  v19 = (***((__int64 (__fastcall ****)(_QWORD, CSingleViewShellExperience *))this + 11))(*((_QWORD *)this + 11), this);
  v12 = v19;
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B5,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v19);
  if ( v12 < 0 )
  {
LABEL_31:
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
    goto LABEL_36;
  }
LABEL_37:
  if ( v9 )
  {
    v22 = CSingleViewShellExperience::DestroyView(this);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x193,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v22);
  }
  return (unsigned int)v12;
}
