/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180001D44
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18000120C (-Add@-$AgileEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x1800020FC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800021F4 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180003A2C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180003A70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        Microsoft::WRL::Details::EventTargetArray *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rax
  Microsoft::WRL::Details::EventTargetArray *v10; // rcx
  void **v12; // rdi
  struct IUnknown **i; // rbx
  __int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v15 = a1;
  *a4 = 0LL;
  v16 = 0LL;
  AcquireSRWLockExclusive(&stru_18001C6E0);
  v15 = 0LL;
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    v7 = ((__int64)(*(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24)
                  - *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 16)) >> 3)
       + 1;
  else
    v7 = 1LL;
  v14[0] = v7;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
         &v15,
         v14);
  if ( v8 < 0 )
  {
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
    ReleaseSRWLockExclusive(&stru_18001C6E0);
  }
  else
  {
    v9 = Windows::System::CMemoryManager::s_limitChangeEvent;
    if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    {
      v12 = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
      for ( i = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
            i != *(struct IUnknown ***)(v9 + 24);
            ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v15, *i, *v12);
        v9 = Windows::System::CMemoryManager::s_limitChangeEvent;
        ++v12;
      }
    }
    v10 = v15;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v10, a2, a3);
    AcquireSRWLockExclusive(&SRWLock);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      &v16,
      &Windows::System::CMemoryManager::s_limitChangeEvent);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      &Windows::System::CMemoryManager::s_limitChangeEvent,
      &v15);
    ReleaseSRWLockExclusive(&SRWLock);
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
    ReleaseSRWLockExclusive(&stru_18001C6E0);
    v8 = 0;
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
  }
  return (unsigned int)v8;
}
