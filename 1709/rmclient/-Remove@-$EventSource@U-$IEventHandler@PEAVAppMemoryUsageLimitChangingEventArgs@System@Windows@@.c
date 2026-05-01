/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000C4B8
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_7a3eaf1d56c5be833176df6bff83e236__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64___ @ 0x18000B2A8 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_7a3eaf1d56c5be833176df6bff83e236__Wind.c)
 *     ?remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000C7A0 (-remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180006348 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18000A300 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18000B5C4 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        Microsoft::WRL::Details::EventTargetArray *a1,
        struct IUnknown *a2)
{
  volatile signed __int32 *v2; // rdi
  int v4; // ebx
  struct IUnknown **v5; // rax
  Microsoft::WRL::Details::EventTargetArray *v6; // rbx
  bool v7; // r12
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // rax
  struct IUnknown **v11; // r15
  void **v12; // r13
  Microsoft::WRL::Details::EventTargetArray *v14; // [rsp+60h] [rbp+40h] BYREF
  volatile signed __int32 *v15; // [rsp+70h] [rbp+50h] BYREF
  __int64 v16; // [rsp+78h] [rbp+58h] BYREF

  v14 = a1;
  v2 = 0LL;
  v15 = 0LL;
  AcquireSRWLockExclusive(&stru_18001B700);
  if ( !Windows::System::CMemoryManager::s_limitChangeEvent )
  {
    v4 = 0;
LABEL_8:
    ReleaseSRWLockExclusive(&stru_18001B700);
    return (unsigned int)v4;
  }
  v5 = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
  v6 = 0LL;
  v7 = 0;
  v8 = *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24) - (_QWORD)v5;
  v14 = 0LL;
  v9 = (v8 >> 3) - 1;
  v16 = v9;
  if ( !v9 )
  {
    v7 = *v5 == a2;
LABEL_16:
    if ( v7 )
    {
      AcquireSRWLockExclusive(&SRWLock);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        &v15,
        (char *)&Windows::System::CMemoryManager::s_limitChangeEvent);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        (volatile signed __int32 **)&Windows::System::CMemoryManager::s_limitChangeEvent,
        (char *)&v14);
      ReleaseSRWLockExclusive(&SRWLock);
      v2 = v15;
      v6 = v14;
    }
    goto LABEL_18;
  }
  v4 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
         (volatile signed __int32 **)&v14,
         (unsigned __int64 *)&v16);
  if ( v4 < 0 )
  {
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v14);
    goto LABEL_8;
  }
  v10 = Windows::System::CMemoryManager::s_limitChangeEvent;
  v6 = v14;
  v11 = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
  v12 = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
  if ( v11 != *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 24) )
  {
    do
    {
      if ( v7 || a2 != *v11 )
      {
        if ( !v9 )
          goto LABEL_16;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v6, *v11, *v12);
        v10 = Windows::System::CMemoryManager::s_limitChangeEvent;
        ++v12;
        --v9;
      }
      else
      {
        v7 = 1;
      }
      ++v11;
    }
    while ( v11 != *(struct IUnknown ***)(v10 + 24) );
    goto LABEL_16;
  }
LABEL_18:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v6);
  ReleaseSRWLockExclusive(&stru_18001B700);
  v4 = 0;
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v2);
  return (unsigned int)v4;
}
