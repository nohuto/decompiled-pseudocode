/*
 * XREFs of ??0?$AgileEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x180001C60
 * Callers:
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_limitChangeEvent__ @ 0x180001060 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_limitChangeEvent__.c)
 * Callees:
 *     <none>
 */

__int64 *Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AgileEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>()
{
  Windows::System::CMemoryManager::s_limitChangeEvent = 0LL;
  InitializeSRWLock(&SRWLock);
  InitializeSRWLock(&stru_18001B700);
  return &Windows::System::CMemoryManager::s_limitChangeEvent;
}
