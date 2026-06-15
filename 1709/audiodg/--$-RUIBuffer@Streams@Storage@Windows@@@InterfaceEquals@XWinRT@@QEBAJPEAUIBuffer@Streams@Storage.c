/*
 * XREFs of ??$?RUIBuffer@Streams@Storage@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIBuffer@Streams@Storage@Windows@@0PEA_N@Z @ 0x140048EB4
 * Callers:
 *     ?IndexOfInternal@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIBuffer@Streams@Storage@5@IPEAU6785@PEAIPEAE@Z @ 0x14004E0C0 (-IndexOfInternal@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400300A8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall XWinRT::InterfaceEquals::operator()<Windows::Storage::Streams::IBuffer>(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        bool *a4)
{
  int v4; // edi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = a1;
  v4 = 0;
  *a4 = 0;
  if ( a2 == a3 )
  {
    *a4 = 1;
  }
  else if ( a2 && a3 )
  {
    v10 = 0LL;
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    v4 = (**a2)(a2, &GUID_00000000_0000_0000_c000_000000000046, &v10);
    if ( v4 >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
      v4 = (**a3)(a3, &GUID_00000000_0000_0000_c000_000000000046, &v9);
      if ( v4 >= 0 )
        *a4 = v10 == v9;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  else
  {
    *a4 = 0;
  }
  return (unsigned int)v4;
}
