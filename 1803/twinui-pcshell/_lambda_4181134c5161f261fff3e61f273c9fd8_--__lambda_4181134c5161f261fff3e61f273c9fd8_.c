/*
 * XREFs of _lambda_4181134c5161f261fff3e61f273c9fd8_::__lambda_4181134c5161f261fff3e61f273c9fd8_ @ 0x1800F9C90
 * Callers:
 *     NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x180017610 (NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___.c)
 *     _NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8____::_1_::dtor$0 @ 0x1800B1720 (_NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8____--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x1800F6910 (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_4181134c5161f261fff3e61f273c9fd8_::__lambda_4181134c5161f261fff3e61f273c9fd8_(__int64 a1)
{
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((volatile signed __int32 **)(a1 + 32));
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)(a1 + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)(a1 + 16));
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)a1);
}
