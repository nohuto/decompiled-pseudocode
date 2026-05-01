/*
 * XREFs of ??1?$ComPtr@VFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001B0D8
 * Callers:
 *     __lambda_45756babbe3c579ac0682f1f5b8db4a7_::operator()_::_1_::dtor$0 @ 0x180043313 (__lambda_45756babbe3c579ac0682f1f5b8db4a7_--operator()_--_1_--dtor$0.c)
 *     __lambda_45756babbe3c579ac0682f1f5b8db4a7_::operator()_::_1_::dtor$4 @ 0x1800433BC (__lambda_45756babbe3c579ac0682f1f5b8db4a7_--operator()_--_1_--dtor$4.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025700 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIIns_ea_180025700.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::FindAllOperation>::~ComPtr<Windows::Gaming::Preview::GamesEnumeration::FindAllOperation>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
