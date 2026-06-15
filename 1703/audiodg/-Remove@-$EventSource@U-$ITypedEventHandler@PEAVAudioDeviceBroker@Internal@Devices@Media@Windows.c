/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x140017430
 * Callers:
 *     ?remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x140016EB0 (-remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEvent.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_7a5afc4a4ab7279ab8854289e6e83419__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___ @ 0x140048860 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_7a5afc4a4ab7279ab8854289e6e83419__Wind.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140001770 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140017A50 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14002F948 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x140048B18 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // r14
  unsigned int v4; // ebp
  volatile signed __int32 *v5; // rbx
  _QWORD *Ptr; // rax
  Microsoft::WRL::Details::EventTargetArray *v8; // r12
  char v9; // r13
  __int64 v10; // r15
  volatile signed __int32 *v11; // rcx
  void *(__fastcall *v12)(Microsoft::WRL::Details::EventTargetArray *__hidden, unsigned int); // rax
  int v14; // eax
  void **v15; // rbp
  struct IUnknown **v16; // r14
  Microsoft::WRL::Details::EventTargetArray *v17; // [rsp+20h] [rbp-48h]
  Microsoft::WRL::Details::EventTargetArray *v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF
  PVOID v20; // [rsp+88h] [rbp+20h] BYREF

  v2 = a1 + 2;
  v4 = 0;
  v5 = 0LL;
  v17 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( a1->Ptr )
  {
    v8 = 0LL;
    v9 = 0;
    v10 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) - 1;
    v18 = 0LL;
    v19 = v10;
    if ( !v10 )
    {
      if ( *(struct IUnknown **)Ptr[2] != a2 )
      {
LABEL_10:
        if ( v2 )
          ReleaseSRWLockExclusive(v2);
        if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        {
          v12 = *(void *(__fastcall **)(Microsoft::WRL::Details::EventTargetArray *__hidden, unsigned int))(*(_QWORD *)v17 + 24LL);
          if ( v12 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
            Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(v17, 1u);
          else
            v12(v17, 1u);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
        return v4;
      }
LABEL_4:
      AcquireSRWLockExclusive(a1 + 1);
      v5 = 0LL;
      v20 = 0LL;
      if ( &v20 != (PVOID *)a1 )
      {
        v5 = (volatile signed __int32 *)a1->Ptr;
        v20 = a1->Ptr;
        a1->Ptr = 0LL;
      }
      v11 = (volatile signed __int32 *)a1->Ptr;
      v17 = (Microsoft::WRL::Details::EventTargetArray *)v5;
      a1->Ptr = v8;
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      goto LABEL_10;
    }
    v14 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
            &v18,
            &v19);
    if ( v14 >= 0 )
    {
      v8 = v18;
      if ( *((_QWORD *)a1->Ptr + 2) == *((_QWORD *)a1->Ptr + 3) )
        goto LABEL_34;
      v15 = (void **)*((_QWORD *)a1->Ptr + 4);
      v16 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
      do
      {
        if ( v9 || a2 != *v16 )
        {
          if ( !v10 )
            break;
          Microsoft::WRL::Details::EventTargetArray::AddTail(v8, *v16, *v15++);
          v19 = --v10;
        }
        else
        {
          v9 = 1;
        }
        ++v16;
      }
      while ( v16 != *((struct IUnknown ***)a1->Ptr + 3) );
      v2 = a1 + 2;
      v4 = 0;
      if ( !v9 )
      {
LABEL_34:
        if ( v8 )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v8);
        goto LABEL_10;
      }
      goto LABEL_4;
    }
    v4 = v14;
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v18);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v4;
}
