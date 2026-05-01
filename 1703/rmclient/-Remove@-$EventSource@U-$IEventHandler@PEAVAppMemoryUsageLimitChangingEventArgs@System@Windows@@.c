/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000B910
 * Callers:
 *     sub_1800010E0 @ 0x1800010E0 (sub_1800010E0.c)
 *     ?remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000BBF0 (-remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001A10 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180001B18 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18000A16C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18000AD00 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        Microsoft::WRL::Details::EventTargetArray *a1,
        struct IUnknown *a2)
{
  volatile signed __int32 *v2; // rdi
  int v4; // ebx
  Microsoft::WRL::Details::EventTargetArray *v5; // rbx
  bool v6; // r12
  __int64 v7; // r14
  __int64 v8; // rax
  struct IUnknown **v9; // r15
  void **v10; // r13
  Microsoft::WRL::Details::EventTargetArray *v12; // [rsp+60h] [rbp+40h] BYREF
  volatile signed __int32 *v13; // [rsp+70h] [rbp+50h] BYREF
  __int64 v14; // [rsp+78h] [rbp+58h] BYREF

  v12 = a1;
  v2 = 0LL;
  v13 = 0LL;
  AcquireSRWLockExclusive(&stru_1800186C0);
  if ( !Windows::System::CMemoryManager::s_limitChangeEvent )
  {
    v4 = 0;
LABEL_8:
    ReleaseSRWLockExclusive(&stru_1800186C0);
    return (unsigned int)v4;
  }
  v5 = 0LL;
  v6 = 0;
  v7 = ((__int64)(*(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24)
                - *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 16)) >> 3)
     - 1;
  v12 = 0LL;
  v14 = v7;
  if ( !v7 )
  {
    v6 = **(_QWORD **)(Windows::System::CMemoryManager::s_limitChangeEvent + 16) == (_QWORD)a2;
LABEL_16:
    if ( v6 )
    {
      AcquireSRWLockExclusive(&stru_1800186B8);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        &v13,
        (char *)&Windows::System::CMemoryManager::s_limitChangeEvent);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        (volatile signed __int32 **)&Windows::System::CMemoryManager::s_limitChangeEvent,
        (char *)&v12);
      ReleaseSRWLockExclusive(&stru_1800186B8);
      v2 = v13;
      v5 = v12;
    }
    goto LABEL_18;
  }
  v4 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
         (volatile signed __int32 **)&v12,
         (unsigned __int64 *)&v14);
  if ( v4 < 0 )
  {
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v12);
    goto LABEL_8;
  }
  v8 = Windows::System::CMemoryManager::s_limitChangeEvent;
  v5 = v12;
  v9 = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
  v10 = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
  if ( v9 != *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 24) )
  {
    do
    {
      if ( v6 || a2 != *v9 )
      {
        if ( !v7 )
          goto LABEL_16;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v5, *v9, *v10);
        v8 = Windows::System::CMemoryManager::s_limitChangeEvent;
        ++v10;
        --v7;
      }
      else
      {
        v6 = 1;
      }
      ++v9;
    }
    while ( v9 != *(struct IUnknown ***)(v8 + 24) );
    goto LABEL_16;
  }
LABEL_18:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5);
  ReleaseSRWLockExclusive(&stru_1800186C0);
  v4 = 0;
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  return (unsigned int)v4;
}
