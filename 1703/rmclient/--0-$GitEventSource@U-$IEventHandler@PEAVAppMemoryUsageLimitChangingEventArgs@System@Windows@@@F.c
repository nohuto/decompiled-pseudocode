/*
 * XREFs of ??0?$GitEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAA@XZ @ 0x180004D80
 * Callers:
 *     sub_180001080 @ 0x180001080 (sub_180001080.c)
 * Callees:
 *     <none>
 */

__int64 *Windows::Internal::GitEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::GitEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>()
{
  Windows::System::CMemoryManager::s_limitChangeEvent = 0LL;
  InitializeSRWLock(&stru_1800186B8);
  InitializeSRWLock(&stru_1800186C0);
  return &Windows::System::CMemoryManager::s_limitChangeEvent;
}
