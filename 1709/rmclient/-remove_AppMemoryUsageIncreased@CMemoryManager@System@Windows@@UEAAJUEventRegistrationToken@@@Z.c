/*
 * XREFs of ?remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000C790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::remove_AppMemoryUsageIncreased(
        Windows::System::CMemoryManager *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           (RTL_SRWLOCK *)&Windows::System::CMemoryManager::s_levelIncreasedEvent,
           (struct IUnknown *)a2.value);
}
