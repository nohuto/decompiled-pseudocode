/*
 * XREFs of ??$Start@AEAPEAUIApplicationView@@AEAW4APPLICATION_VIEW_CHANGE@@AEAPEAUIUnknown@@@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@SA?AV012@AEAPEAUIApplicationView@@AEAW4APPLICATION_VIEW_CHANGE@@AEAPEAUIUnknown@@@Z @ 0x180074FA8
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180073730 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007716C (-StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::Start<IApplicationView * &,enum APPLICATION_VIEW_CHANGE &,IUnknown * &>(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  _QWORD *v8; // rcx

  *(_QWORD *)(a1 + 16) = a1;
  v4 = a1 + 56;
  *(_QWORD *)(a1 + 40) = a1 + 96;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  v8 = (_QWORD *)(a1 + 136);
  *(_BYTE *)(v4 + 4) = 0;
  *(_BYTE *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = "RaiseApplicationViewChange";
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_QWORD *)(v4 + 72) = 1LL;
  v8[18] = 0LL;
  v8[19] = 0LL;
  memset(v8, 0, 0x90uLL);
  *(_QWORD *)(v4 + 240) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)a1 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(a1, *a2, *a3, *a4);
  return a1;
}
