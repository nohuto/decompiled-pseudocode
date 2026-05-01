/*
 * XREFs of ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180003E18
 * Callers:
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180001A80 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180003EF0 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx
  __int64 (*v3)(void); // rax

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      return (_QWORD *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
    else
      return (_QWORD *)v3();
  }
  return result;
}
