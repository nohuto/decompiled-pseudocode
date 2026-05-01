/*
 * XREFs of ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1801D3108
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D0060 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1801D177C (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x1801D2FE8 (-EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x1801D3544 (-SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ??$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAIAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAI2@Z @ 0x1801D42EC (--$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAE.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::BoostPriority(__int64 a1, int a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v10; // rcx
  PCWSTR StringRawBuffer; // rax
  HSTRING v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF
  int v16; // [rsp+48h] [rbp+10h] BYREF
  PCWSTR v17; // [rsp+50h] [rbp+18h] BYREF

  v16 = a2;
  if ( a2 )
  {
    if ( a2 == 1 && !*(_BYTE *)(a1 + 140) )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 120LL))(*(_QWORD *)(a1 + 88), a1);
      v4 = v3;
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x445,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v3);
      *(_BYTE *)(a1 + 140) = v4 >= 0;
    }
  }
  else
  {
    ++*(_DWORD *)(a1 + 144);
    if ( !*(_BYTE *)(a1 + 148) )
    {
      if ( (*(_DWORD *)(a1 + 168) & 2) != 0 )
      {
        v5 = CSingleViewShellExperience::SetImportanceValues(a1);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x47C,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v5);
      }
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 120LL))(*(_QWORD *)(a1 + 88), a1);
      v7 = v6;
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x415,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v6);
      *(_BYTE *)(a1 + 148) = v7 >= 0;
    }
    if ( *(_BYTE *)(a1 + 148) )
    {
      v8 = CSingleViewShellExperience::EnsureUnboostCallback((CSingleViewShellExperience *)a1);
      if ( v8 >= 0 )
      {
        pftDueTime = (struct _FILETIME)-300000000LL;
        ThreadpoolTimer = CreateThreadpoolTimer(
                            lambda_192fc81feaf8a8a0e8017e6eb44c8d83_::_lambda_invoker_cdecl_,
                            (PVOID)a1,
                            0LL);
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
          (struct _TP_TIMER **)(a1 + 152),
          ThreadpoolTimer);
        v10 = *(struct _TP_TIMER **)(a1 + 152);
        if ( v10 )
          SetThreadpoolTimer(v10, &pftDueTime, 0, 0);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x41A,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v8);
      }
    }
  }
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v12 = *(HSTRING *)(a1 + 8);
  pftDueTime = (struct _FILETIME)StringRawBuffer;
  v17 = WindowsGetStringRawBuffer(v12, 0LL);
  return SingleViewExperienceTelemetry::OnPriorityBoostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,unsigned int &,bool &>(
           (unsigned int)&v17,
           (unsigned int)&pftDueTime,
           (unsigned int)&v16,
           (int)a1 + 148,
           a1 + 144,
           a1 + 140);
}
