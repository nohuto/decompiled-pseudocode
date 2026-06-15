/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x140017570
 * Callers:
 *     ?add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x140016EC0 (-add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU-$ITy.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140001770 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x140017694 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14002F948 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v4; // r15
  _QWORD *Ptr; // rcx
  int v10; // ebx
  _QWORD *v11; // rax
  Microsoft::WRL::Details::EventTargetArray *v12; // rbx
  __int64 *v13; // r14
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rdi
  Microsoft::WRL::Details::EventTargetArray *v16; // rcx
  struct IUnknown **v18; // r12
  void **v19; // r13
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v4 = a1 + 2;
  *a4 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v20 = 0LL;
  if ( Ptr )
    v21 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v21 = 1LL;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v20,
          &v21);
  if ( v10 < 0 )
  {
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v20);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v10;
  }
  else
  {
    v11 = a1->Ptr;
    v12 = v20;
    if ( a1->Ptr )
    {
      v18 = (struct IUnknown **)v11[2];
      v19 = (void **)v11[4];
      if ( v18 != (struct IUnknown **)v11[3] )
      {
        do
          Microsoft::WRL::Details::EventTargetArray::AddTail(v12, *v18++, *v19++);
        while ( v18 != *((struct IUnknown ***)a1->Ptr + 3) );
      }
    }
    *a4 = a2;
    v13 = (__int64 *)*((_QWORD *)v12 + 3);
    if ( *v13 != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v14 = *v13;
      *v13 = a2;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    *(_QWORD *)(*((_QWORD *)v12 + 4) + 8 * ((__int64)(*((_QWORD *)v12 + 3) - *((_QWORD *)v12 + 2)) >> 3)) = a3;
    *((_QWORD *)v12 + 3) += 8LL;
    AcquireSRWLockExclusive(a1 + 1);
    v15 = 0LL;
    if ( &v20 != (Microsoft::WRL::Details::EventTargetArray **)a1 )
    {
      v15 = (volatile signed __int32 *)a1->Ptr;
      a1->Ptr = 0LL;
    }
    v16 = (Microsoft::WRL::Details::EventTargetArray *)a1->Ptr;
    a1->Ptr = v12;
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v16);
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v15);
    return 0LL;
  }
}
