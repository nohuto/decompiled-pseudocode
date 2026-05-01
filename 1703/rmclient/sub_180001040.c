/*
 * XREFs of sub_180001040 @ 0x180001040
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$GitEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAA@XZ @ 0x1800019A0 (--0-$GitEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptions.c)
 */

int sub_180001040()
{
  Windows::Internal::GitEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::GitEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>(&Windows::System::CMemoryManager::s_levelDecreasedEvent);
  return atexit((void (__cdecl *)())sub_180008A20);
}
