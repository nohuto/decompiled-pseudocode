/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180002110
 * Callers:
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1800034F0 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAVApp.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001A10 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x1800028A0 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v7; // ebx
  volatile signed __int32 *v8; // rbx
  __int64 *v9; // rsi
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rdi
  __int64 *v13; // r14
  volatile signed __int32 **i; // r13
  __int64 *v15; // r12
  __int64 v16; // r15
  __int64 v17; // rcx
  volatile signed __int32 *v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  v18 = a1;
  *a4 = 0LL;
  AcquireSRWLockExclusive(&stru_1800186C0);
  v18 = 0LL;
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    v19 = ((__int64)(*(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24)
                   - *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 16)) >> 3)
        + 1;
  else
    v19 = 1LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
         &v18,
         &v19);
  if ( v7 < 0 )
  {
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v18);
    ReleaseSRWLockExclusive(&stru_1800186C0);
    return (unsigned int)v7;
  }
  else
  {
    v8 = v18;
    if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    {
      v13 = *(__int64 **)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
      for ( i = *(volatile signed __int32 ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
            v13 != *(__int64 **)(Windows::System::CMemoryManager::s_limitChangeEvent + 24);
            *((_QWORD *)v8 + 3) += 8LL )
      {
        v15 = (__int64 *)*((_QWORD *)v8 + 3);
        v16 = *v13;
        v18 = *i;
        if ( *v15 != v16 )
        {
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
          v17 = *v15;
          *v15 = v16;
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        ++i;
        ++v13;
        *(_QWORD *)(*((_QWORD *)v8 + 4) + 8 * ((__int64)(*((_QWORD *)v8 + 3) - *((_QWORD *)v8 + 2)) >> 3)) = v18;
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
    AcquireSRWLockExclusive(&stru_1800186B8);
    v11 = (volatile signed __int32 *)Windows::System::CMemoryManager::s_limitChangeEvent;
    Windows::System::CMemoryManager::s_limitChangeEvent = (__int64)v8;
    ReleaseSRWLockExclusive(&stru_1800186B8);
    ReleaseSRWLockExclusive(&stru_1800186C0);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
    return 0LL;
  }
}
