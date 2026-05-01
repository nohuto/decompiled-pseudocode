/*
 * XREFs of ??$Start@AEAW4MULTITASKING_VIEW_TYPES@@@DismissMultitaskingView@MultitaskingViewTelemetry@@SA?AV01@AEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180131018
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18012F450 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x18013FAE0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x180141830 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ?StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180131DCC (-StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall MultitaskingViewTelemetry::DismissMultitaskingView::Start<enum MULTITASKING_VIEW_TYPES &>(
        __int64 a1,
        unsigned int *a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rcx

  *(_QWORD *)(a1 + 16) = a1;
  v2 = a1 + 56;
  *(_QWORD *)(a1 + 40) = a1 + 96;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  v5 = (_QWORD *)(a1 + 136);
  *(_BYTE *)(v2 + 4) = 0;
  *(_BYTE *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = "DismissMultitaskingView";
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_QWORD *)(v2 + 72) = 1LL;
  v5[18] = 0LL;
  v5[19] = 0LL;
  memset(v5, 0, 0x90uLL);
  *(_QWORD *)(v2 + 240) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)a1 = &MultitaskingViewTelemetry::DismissMultitaskingView::`vftable';
  MultitaskingViewTelemetry::DismissMultitaskingView::StartActivity(a1, *a2);
  return a1;
}
