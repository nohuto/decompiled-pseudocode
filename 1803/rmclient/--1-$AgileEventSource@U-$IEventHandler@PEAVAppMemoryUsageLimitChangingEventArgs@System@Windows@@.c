/*
 * XREFs of ??1?$AgileEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800011F8
 * Callers:
 *     _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_limitChangeEvent__ @ 0x1800088F0 (_dynamic_atexit_destructor_for__Windows--System--CMemoryManager--s_limitChangeEvent__.c)
 * Callees:
 *     <none>
 */

__int64 Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::~AgileEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>()
{
  __int64 result; // rax

  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
  {
    Windows::System::CMemoryManager::s_limitChangeEvent = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
  }
  return result;
}
