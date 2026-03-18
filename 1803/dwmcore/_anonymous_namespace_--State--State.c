/*
 * XREFs of _anonymous_namespace_::State::State @ 0x1800C7B2C
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18005E608 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x1800223EC (-CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ.c)
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x18002282C (_anonymous_namespace_--FramesReport--_FramesReport.c)
 *     _anonymous_namespace_::FramesReport::FramesReport @ 0x180022974 (_anonymous_namespace_--FramesReport--FramesReport.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall anonymous_namespace_::State::State(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  char *v3; // r15
  _OWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  char **v8; // rbx
  char **v9; // rsi
  PTP_WORK ThreadpoolWork; // rax
  _QWORD *v11; // rbx
  int v12; // eax
  int v14; // eax
  char v15; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v1 = a1 + 6;
  *a1 = 0LL;
  v2 = a1 + 2;
  a1[1] = 0LL;
  v3 = (char *)(a1 + 5);
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[10] = 0LL;
  v5 = (_OWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x10uLL);
  *v1 = v5;
  *v5 = 0LL;
  *(_QWORD *)*v1 = v1;
  v6 = HeapAlloc(WPF::g_processHeap, 0, 0xB0uLL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0xB0uLL);
    v8 = (char **)anonymous_namespace_::FramesReport::FramesReport(v7);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v3 != &v15 )
  {
    v9 = *(char ***)v3;
    *(_QWORD *)v3 = v8;
    if ( !v9 )
      goto LABEL_5;
    anonymous_namespace_::FramesReport::_FramesReport(v9);
    operator delete(v9, 0xB0uLL);
    v8 = 0LL;
  }
  if ( v8 )
  {
    anonymous_namespace_::FramesReport::_FramesReport(v8);
    operator delete(v8, 0xB0uLL);
  }
LABEL_5:
  ThreadpoolWork = CreateThreadpoolWork(anonymous_namespace_::SendFramesReports, 0LL, 0LL);
  a1[1] = ThreadpoolWork;
  if ( !ThreadpoolWork )
    RaiseFailFastException(0LL, 0LL, 0);
  *a1 = CProcessAttributionManager::CreateObserver(qword_1802D60A0);
  v11 = v2 + 2;
  v2[1] = anonymous_namespace_::OnScreenOnStudySessionStateChange;
  *(_BYTE *)v2 = 1;
  v12 = RtlSubscribeWnfStateChangeNotification(
          v2 + 2,
          WNF_SRUM_SCREENONSTUDY_SESSION,
          0LL,
          anonymous_namespace_::ScreenOnStudySessionStateTracker::WnfCallback,
          v2,
          0LL,
          0,
          0) | 0x10000000;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x14Au);
    if ( *(_BYTE *)v2 )
    {
      *(_BYTE *)v2 = 0;
      if ( *v11 )
      {
        v14 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
        if ( v14 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v14, retaddr);
        *v11 = 0LL;
      }
    }
  }
  return a1;
}
