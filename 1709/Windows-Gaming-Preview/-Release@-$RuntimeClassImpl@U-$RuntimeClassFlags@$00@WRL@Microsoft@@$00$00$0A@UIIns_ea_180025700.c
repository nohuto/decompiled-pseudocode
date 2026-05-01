/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025700
 * Callers:
 *     _lambda_45756babbe3c579ac0682f1f5b8db4a7_::operator() @ 0x18001A008 (_lambda_45756babbe3c579ac0682f1f5b8db4a7_--operator().c)
 *     ??1?$ComPtr@VFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001B0D8 (--1-$ComPtr@VFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800227D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFt.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800227F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIIns_ea_1800227F0.c)
 *     ?Release@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180025770 (-Release@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 8);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 8, v1 - 1, v1);
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
