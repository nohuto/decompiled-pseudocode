/*
 * XREFs of ??_GPendingViewData@ViewEventDispatcher@@QEAAPEAXI@Z @ 0x180095DDC
 * Callers:
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180095D7C (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x1801C8928 (--1ViewEventDispatcher@@EEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CWinRTApplicationView **__fastcall ViewEventDispatcher::PendingViewData::`scalar deleting destructor'(
        CWinRTApplicationView **this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this + 1);
  return this;
}
