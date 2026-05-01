/*
 * XREFs of ??1?$AgileEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800012E0
 * Callers:
 *     _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__ @ 0x1800088D0 (_dynamic_atexit_destructor_for__Windows--System--CMemoryManager--s_levelDecreasedEvent__.c)
 *     _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__ @ 0x1800088E0 (_dynamic_atexit_destructor_for__Windows--System--CMemoryManager--s_levelIncreasedEvent__.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180003A70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::~AgileEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (__int64)a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
  }
  return result;
}
