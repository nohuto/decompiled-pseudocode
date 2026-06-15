/*
 * XREFs of ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x140048B18
 * Callers:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x140017430 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14004E3C0 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140001770 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x140017AD4 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ @ 0x14002F9C8 (--0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetArray@Details@23@@Z @ 0x140031B30 (-Attach@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetAr.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
        volatile signed __int32 **a1,
        unsigned __int64 *a2)
{
  volatile signed __int32 *v2; // rbx
  Microsoft::WRL::Details::EventTargetArray *v5; // rax
  int v6; // edi
  Microsoft::WRL::Details::EventTargetArray *v7; // rax
  Microsoft::WRL::Details::EventTargetArray *v9; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v10; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v2 = 0LL;
  v9 = 0LL;
  v5 = (Microsoft::WRL::Details::EventTargetArray *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v5;
  if ( v5 )
  {
    v7 = Microsoft::WRL::Details::EventTargetArray::EventTargetArray(v5);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::Attach(
      (volatile signed __int32 **)&v9,
      (volatile signed __int32 *)v7);
    v2 = (volatile signed __int32 *)v9;
    v6 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(v9, *a2);
    if ( v6 >= 0 )
    {
      if ( v2 )
      {
        _InterlockedIncrement(v2 + 3);
        v2 = (volatile signed __int32 *)v9;
      }
      *a1 = v2;
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  return (unsigned int)v6;
}
