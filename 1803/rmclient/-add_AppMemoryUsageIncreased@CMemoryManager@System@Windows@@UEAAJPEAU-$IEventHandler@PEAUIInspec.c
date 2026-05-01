/*
 * XREFs of ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180003050
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800012F8 (-Add@-$AgileEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOpt.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003D2C (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::add_AppMemoryUsageIncreased(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = Windows::System::CMemoryManager::Init();
  if ( (int)result >= 0 )
    return Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
             (__int64)&Windows::System::CMemoryManager::s_levelIncreasedEvent,
             a2,
             a3);
  return result;
}
