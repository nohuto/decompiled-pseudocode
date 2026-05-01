/*
 * XREFs of ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1801D233C
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1801D1350 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1801D177C (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x1801D3508 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::ShowView(__int64 a1, char a2)
{
  BOOL v4; // esi
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (a2 & 2) == 0;
  if ( (a2 & 2) != 0
    || (v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), a1),
        v6 = v5,
        v5 >= 0) )
  {
    *(_DWORD *)(a1 + 40) = 2;
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 0;
    if ( *(_DWORD *)(a1 + 72) )
    {
      *(_DWORD *)(a1 + 72) = 4;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 336LL))(*(_QWORD *)(a1 + 24), 4LL);
      v9 = v8;
      if ( v8 >= 0 )
      {
        *(_DWORD *)(a1 + 76) = 4;
        v9 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x63,
          (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
          (const char *)(unsigned int)v8);
      }
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x7E,
          (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
          (const char *)(unsigned int)v9);
        goto LABEL_12;
      }
    }
    v9 = 0;
LABEL_12:
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x350,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v9);
    if ( (a2 & 1) != 0
      || (v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 72LL))(*(_QWORD *)(a1 + 80)), v10 >= 0)
      || (wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x353,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v10),
          (a2 & 4) == 0) )
    {
      if ( v4 )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80));
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 863LL;
          goto LABEL_22;
        }
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 40LL))(*(_QWORD *)(a1 + 88), a1);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 56LL))(*(_QWORD *)(a1 + 88), a1);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x356,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v11);
    }
    v6 = 0;
    goto LABEL_26;
  }
  v7 = 841LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v5);
LABEL_26:
  CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1);
  return v6;
}
