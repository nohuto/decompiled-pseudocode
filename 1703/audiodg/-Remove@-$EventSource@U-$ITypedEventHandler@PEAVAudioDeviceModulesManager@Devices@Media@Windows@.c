/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14004E3C0
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_01b468a4540f623758798edfc5ae3ab2__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64___ @ 0x140048728 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_01b468a4540f623758798edfc5ae3ab2__Wind.c)
 *     ?remove_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x14004F910 (-remove_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJUEventR.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140001770 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14002F948 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x140031B5C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x140048B18 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // r14
  volatile signed __int32 *v4; // rbx
  RTL_SRWLOCK v6; // rax
  int v7; // esi
  bool v8; // r13
  __int64 v9; // r12
  __int64 v10; // r12
  struct IUnknown **v11; // rsi
  void **v12; // r14
  Microsoft::WRL::Details::EventTargetArray *v14; // [rsp+60h] [rbp+40h] BYREF
  volatile signed __int32 *v15; // [rsp+70h] [rbp+50h] BYREF
  __int64 v16; // [rsp+78h] [rbp+58h] BYREF

  v2 = a1 + 2;
  v4 = 0LL;
  v15 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  v6.Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    v7 = 0;
LABEL_8:
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return (unsigned int)v7;
  }
  v8 = 0;
  v9 = *((_QWORD *)v6.Ptr + 3) - *((_QWORD *)v6.Ptr + 2);
  v14 = 0LL;
  v10 = (v9 >> 3) - 1;
  v16 = v10;
  if ( !v10 )
  {
    v8 = **((_QWORD **)v6.Ptr + 2) == (_QWORD)a2;
LABEL_19:
    if ( v8 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v15, (char *)a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        (volatile signed __int32 **)a1,
        (char *)&v14);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v4 = v15;
    }
    goto LABEL_23;
  }
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
         (volatile signed __int32 **)&v14,
         (unsigned __int64 *)&v16);
  if ( v7 < 0 )
  {
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v14);
    goto LABEL_8;
  }
  v11 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
  if ( v11 != *((struct IUnknown ***)a1->Ptr + 3) )
  {
    v12 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v8 || a2 != *v11 )
      {
        if ( !v10 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v14, *v11, *v12++);
        --v10;
      }
      else
      {
        v8 = 1;
      }
      ++v11;
    }
    while ( v11 != *((struct IUnknown ***)a1->Ptr + 3) );
    v2 = a1 + 2;
    goto LABEL_19;
  }
LABEL_23:
  if ( v14 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v14);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v7 = 0;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  return (unsigned int)v7;
}
