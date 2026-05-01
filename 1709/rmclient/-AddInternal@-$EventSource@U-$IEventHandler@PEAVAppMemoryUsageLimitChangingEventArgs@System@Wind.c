/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180002240
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180001BCC (-Add@-$AgileEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180002AB0 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180006348 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        Microsoft::WRL::Details::EventTargetArray *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v7; // ebx
  Microsoft::WRL::Details::EventTargetArray *v8; // rbx
  __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct IUnknown **v13; // r14
  void **i; // r15
  Microsoft::WRL::Details::EventTargetArray *v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v15 = a1;
  *a4 = 0LL;
  AcquireSRWLockExclusive(&stru_18001B700);
  v15 = 0LL;
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    v16 = ((__int64)(*(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24)
                   - *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 16)) >> 3)
        + 1;
  else
    v16 = 1LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
         &v15,
         &v16);
  if ( v7 < 0 )
  {
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v15);
    ReleaseSRWLockExclusive(&stru_18001B700);
    return (unsigned int)v7;
  }
  else
  {
    v8 = v15;
    if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    {
      v13 = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
      for ( i = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
            v13 != *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 24);
            ++v13 )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v8, *v13, *i++);
      }
    }
    *a4 = a2;
    v9 = (__int64 *)*((_QWORD *)v8 + 3);
    if ( *v9 != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v10 = *v9;
      *v9 = a2;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    *(_QWORD *)(*((_QWORD *)v8 + 4) + 8 * ((__int64)(*((_QWORD *)v8 + 3) - *((_QWORD *)v8 + 2)) >> 3)) = a3;
    *((_QWORD *)v8 + 3) += 8LL;
    AcquireSRWLockExclusive(&SRWLock);
    v11 = Windows::System::CMemoryManager::s_limitChangeEvent;
    Windows::System::CMemoryManager::s_limitChangeEvent = (__int64)v8;
    ReleaseSRWLockExclusive(&SRWLock);
    ReleaseSRWLockExclusive(&stru_18001B700);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v11);
    return 0LL;
  }
}
