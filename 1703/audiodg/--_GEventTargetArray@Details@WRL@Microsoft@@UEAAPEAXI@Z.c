/*
 * XREFs of ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140017A50
 * Callers:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x140017430 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows.c)
 * Callees:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@UEAA@XZ @ 0x140017BA4 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@VNil@Details@23@V5623@V5623.c)
 *     ??3@YAXPEAX@Z @ 0x14001CB20 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x14001CE70 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x14001D148 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

Microsoft::WRL::Details::EventTargetArray *__fastcall Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(
        Microsoft::WRL::Details::EventTargetArray *this,
        char a2)
{
  char *v4; // rcx
  char *v5; // rbx
  void *v6; // rcx

  *(_QWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v4 = (char *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    v5 = v4 - 8;
    `eh vector destructor iterator'(v4, 8uLL, *((_QWORD *)v4 - 1), Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>);
    operator delete[](v5, 8LL * *(_QWORD *)v5 + 8);
  }
  operator delete(*((void **)this + 4));
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(this);
  if ( (a2 & 1) != 0 )
    operator delete(v6);
  return this;
}
