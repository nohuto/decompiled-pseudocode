/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012870
 * Callers:
 *     _lambda_008cd9ca32b74012431ac337bbccf2a6_::operator() @ 0x18000B024 (_lambda_008cd9ca32b74012431ac337bbccf2a6_--operator().c)
 *     ??1?$ComPtr@VSetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000BC78 (--1-$ComPtr@VSetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18000FD10 (-Release@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@VFtmBase@WRL@Microsoft@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18000FD30 (-Release@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@VFtmBase@W_ea_18000FD30.c)
 *     ?Release@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x1800128E0 (-Release@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ.c)
 *     _lambda_156a2acd22091851321d998ccb9c82aa_::operator() @ 0x180013CF8 (_lambda_156a2acd22091851321d998ccb9c82aa_--operator().c)
 *     _lambda_1854fdeaa8c10903b3acdb056db6e24a_::operator() @ 0x1800149DC (_lambda_1854fdeaa8c10903b3acdb056db6e24a_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 6);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 6, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_5;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_5:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 48))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return v2;
}
