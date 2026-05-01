/*
 * XREFs of ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1801829F0
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180181CB0 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180181FD4 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180183A78 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::ShowView(__int64 a1, char a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  CSingleViewShellExperience *v12; // [rsp+28h] [rbp-20h] BYREF
  char v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = a1;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v12, &v15);
  if ( (a2 & 2) == 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 840LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v6,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_26;
    }
  }
  *(_DWORD *)(a1 + 40) = 2;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  if ( *(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a1 + 72) = 4;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 336LL))(*(_QWORD *)(a1 + 24), 4LL);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *(_DWORD *)(a1 + 76) = 4;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x63,
        (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v7);
    }
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x7E,
        (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v8);
      goto LABEL_12;
    }
  }
  v8 = 0;
LABEL_12:
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x34F,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8);
  if ( (a2 & 1) != 0
    || (v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 72LL))(*(_QWORD *)(a1 + 80)), v9 >= 0)
    || (wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x352,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v9),
        (a2 & 4) == 0) )
  {
    if ( (a2 & 2) == 0 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80));
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 862LL;
        goto LABEL_22;
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 40LL))(*(_QWORD *)(a1 + 88), a1);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 56LL))(*(_QWORD *)(a1 + 88), a1);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x355,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v10);
  }
  v5 = 0;
LABEL_26:
  if ( v13 )
    CSingleViewShellExperience::UnboostDiskIo(v12);
  return v5;
}
