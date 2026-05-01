/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VCApplicationViewBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008E9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCApplicationViewBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18008EA20 (--$MakeAndInitialize@VCApplicationViewBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewBroker@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008EAB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18008EAB0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<CApplicationViewBroker,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // ebx
  __int64 (__fastcall *v7)(CWinRTApplicationView *, __int64, _QWORD *); // rax
  int Interface; // eax
  CWinRTApplicationView *v10; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    RoOriginateError(2147746064LL, 0LL);
  }
  else
  {
    v10 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<CApplicationViewBroker,IUnknown,>(&v10);
    if ( v6 >= 0 )
    {
      v7 = **(__int64 (__fastcall ***)(CWinRTApplicationView *, __int64, _QWORD *))v10;
      if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewBroker>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewBroker>::QueryInterface(
                      v10,
                      a3,
                      a4);
      else
        Interface = v7(v10, a3, a4);
      v6 = Interface;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  return (unsigned int)v6;
}
