/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x14004B8D4
 * Callers:
 *     ?add_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x140050670 (-add_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAU-$ITyp.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400166A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x140018090 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14002F870 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1400313EC (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        __int64 a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // rbx
  _QWORD *v9; // rcx
  int v10; // edi
  _QWORD *v11; // rax
  void **v12; // r14
  struct IUnknown **i; // rdi
  Microsoft::WRL::Details::EventTargetArray *v14; // rcx
  volatile signed __int32 *v16; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v17; // [rsp+70h] [rbp+40h] BYREF
  __int64 v18; // [rsp+88h] [rbp+58h] BYREF

  *a4 = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 16);
  v16 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v9 = *(_QWORD **)a1;
  v17 = 0LL;
  if ( v9 )
    v18 = ((__int64)(v9[3] - v9[2]) >> 3) + 1;
  else
    v18 = 1LL;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v17,
          (unsigned __int64 *)&v18);
  if ( v10 >= 0 )
  {
    v11 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      v12 = (void **)v11[4];
      for ( i = (struct IUnknown **)v11[2]; i != (struct IUnknown **)v11[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v17, *i, *v12);
        v11 = *(_QWORD **)a1;
        ++v12;
      }
    }
    v14 = v17;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v14, a2, a3);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v16, (char *)a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      (volatile signed __int32 **)a1,
      (char *)&v17);
    if ( a1 != -8 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v17);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v10 = 0;
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v16);
  }
  else
  {
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v17);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  return (unsigned int)v10;
}
