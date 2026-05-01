/*
 * XREFs of ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180069978
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C144 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180069930 (-BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x180069F70 (-EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18007AE68 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?OnPriorityBoostRequested@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007B8D0 (-OnPriorityBoostRequested@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

BOOLEAN __fastcall CSingleViewShellExperience::BoostPriority(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  CActionCenterExperienceManager *v6; // rcx
  __int64 (__fastcall *v7)(CActionCenterExperienceManager *__hidden, struct CSingleViewShellExperience *); // rax
  int v8; // eax
  int v9; // ebx
  bool v10; // bl
  int v11; // eax
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v13; // rcx
  const WCHAR *StringRawBuffer; // rbx
  PCWSTR v15; // rax
  const WCHAR *v16; // r14
  BOOLEAN result; // al
  int v18; // eax
  char v19; // al
  TraceLoggingHProvider v20; // r10
  int cData; // [rsp+28h] [rbp-69h]
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-59h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-51h] BYREF
  int v24; // [rsp+44h] [rbp-4Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+78h] [rbp-19h] BYREF
  int *v28; // [rsp+88h] [rbp-9h]
  int v29; // [rsp+90h] [rbp-1h]
  int v30; // [rsp+94h] [rbp+3h]
  __int64 v31; // [rsp+98h] [rbp+7h]
  int v32; // [rsp+A0h] [rbp+Fh]
  int v33; // [rsp+A4h] [rbp+13h]
  __int64 v34; // [rsp+A8h] [rbp+17h]
  int v35; // [rsp+B0h] [rbp+1Fh]
  int v36; // [rsp+B4h] [rbp+23h]
  __int64 v37; // [rsp+B8h] [rbp+27h]
  int v38; // [rsp+C0h] [rbp+2Fh]
  int v39; // [rsp+C4h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v4 = a2;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 1 && !*(_BYTE *)(a1 + 140) )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 120LL))(*(_QWORD *)(a1 + 88), a1);
      if ( v18 >= 0 )
      {
        v19 = 1;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x44B,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v18,
          cData);
        v19 = 0;
      }
      *(_BYTE *)(a1 + 140) = v19;
    }
  }
  else
  {
    ++*(_DWORD *)(a1 + 144);
    if ( *(_BYTE *)(a1 + 148) )
      goto LABEL_8;
    CSingleViewShellExperience::BoostDiskIo((CSingleViewShellExperience *)a1, a2, a3, a4, cData);
    v6 = *(CActionCenterExperienceManager **)(a1 + 88);
    v7 = *(__int64 (__fastcall **)(CActionCenterExperienceManager *__hidden, struct CSingleViewShellExperience *))(*(_QWORD *)v6 + 120LL);
    if ( v7 == CActionCenterExperienceManager::OnPriorityBoostRequested )
      v8 = CActionCenterExperienceManager::OnPriorityBoostRequested(v6, (struct CSingleViewShellExperience *)a1);
    else
      v8 = v7(v6, (struct CSingleViewShellExperience *)a1);
    v9 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x41B,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v8,
        cData);
    v10 = v9 >= 0;
    *(_BYTE *)(a1 + 148) = v10;
    if ( v10 )
    {
LABEL_8:
      v11 = CSingleViewShellExperience::EnsureUnboostCallback((CSingleViewShellExperience *)a1);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x420,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v11,
          cData);
      }
      else
      {
        pftDueTime = (struct _FILETIME)-300000000LL;
        ThreadpoolTimer = CreateThreadpoolTimer(
                            lambda_ade08872bf0a4cde4024ec805f1037dc_::_lambda_invoker_cdecl_,
                            (PVOID)a1,
                            0LL);
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
          a1 + 152,
          ThreadpoolTimer);
        v13 = *(struct _TP_TIMER **)(a1 + 152);
        if ( v13 )
          SetThreadpoolTimer(v13, &pftDueTime, 0, 0);
      }
    }
  }
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v15 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  pftDueTime = 0LL;
  v16 = v15;
  if ( InitOnceBeginInitialize(
         &`SingleViewExperienceLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         (LPVOID *)&pftDueTime)
    && fPending )
  {
    pftDueTime = (struct _FILETIME)qword_180438800;
    qword_180438800[0] = &LockScreenServiceLogging::`vftable';
    qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
  }
  result = pftDueTime.dwLowDateTime;
  if ( **(_DWORD **)(*(_QWORD *)&pftDueTime + 8LL) > 5u )
  {
    result = TlgKeywordOn(*(TraceLoggingHProvider *)(*(_QWORD *)&pftDueTime + 8LL), 0x200000000000uLL);
    if ( result )
    {
      TlgCreateWsz(&pDesc, v16);
      TlgCreateWsz(&v27, StringRawBuffer);
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v28 = &v24;
      v31 = a1 + 148;
      v34 = a1 + 144;
      v37 = a1 + 140;
      v24 = v4;
      v29 = 4;
      v32 = 1;
      v35 = 4;
      v38 = 1;
      return TlgWrite(v20, &unk_18039F1DF, 0LL, 0LL, 8u, &pData);
    }
  }
  return result;
}
