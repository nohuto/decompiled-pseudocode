/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x140018880
 * Callers:
 *     ?add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x140018AB0 (-add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU-$ITy.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140016620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x140018700 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14002E7F0 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v4; // r15
  _QWORD *Ptr; // rcx
  __int64 v10; // rax
  int v11; // ebx
  _QWORD *v12; // rax
  Microsoft::WRL::Details::EventTargetArray *v13; // rbx
  __int64 *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdi
  struct IUnknown **v19; // r12
  void **v20; // r13
  Microsoft::WRL::Details::EventTargetArray *v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  v4 = a1 + 2;
  *a4 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v21 = 0LL;
  if ( Ptr )
    v10 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v22 = v10;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v21,
          (unsigned __int64 *)&v22);
  if ( v11 < 0 )
  {
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v21);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v11;
  }
  else
  {
    v12 = a1->Ptr;
    v13 = v21;
    if ( a1->Ptr )
    {
      v19 = (struct IUnknown **)v12[2];
      v20 = (void **)v12[4];
      if ( v19 != (struct IUnknown **)v12[3] )
      {
        do
          Microsoft::WRL::Details::EventTargetArray::AddTail(v13, *v19++, *v20++);
        while ( v19 != *((struct IUnknown ***)a1->Ptr + 3) );
      }
    }
    *a4 = a2;
    v14 = (__int64 *)*((_QWORD *)v13 + 3);
    v15 = *v14;
    if ( *v14 != a2 )
    {
      if ( a2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
        v15 = *v14;
      }
      *v14 = a2;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    *(_QWORD *)(*((_QWORD *)v13 + 4) + 8 * ((__int64)(*((_QWORD *)v13 + 3) - *((_QWORD *)v13 + 2)) >> 3)) = a3;
    *((_QWORD *)v13 + 3) += 8LL;
    AcquireSRWLockExclusive(a1 + 1);
    v16 = (__int64)a1->Ptr;
    v17 = 0LL;
    if ( &v21 != (Microsoft::WRL::Details::EventTargetArray **)a1 )
    {
      v17 = (__int64)a1->Ptr;
      a1->Ptr = 0LL;
      v16 = 0LL;
    }
    a1->Ptr = v13;
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v16);
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17);
    return 0LL;
  }
}
