/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VPrivilegedOperationsService@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18019E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VPrivilegedOperationsService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019D728 (--$MakeAndInitialize@VPrivilegedOperationsService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<PrivilegedOperationsService,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // ebx
  CWinRTApplicationView *v8; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    RoOriginateError(2147746064LL, 0LL);
  }
  else
  {
    v8 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<PrivilegedOperationsService,IUnknown,>(&v8);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(CWinRTApplicationView *, __int64, _QWORD *))v8)(v8, a3, a4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  }
  return (unsigned int)v6;
}
