/*
 * XREFs of ?Set@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18001C214
 * Callers:
 *     _lambda_1fac56e8dc857868f8bd6529f7683e95_::operator() @ 0x18001A9D4 (_lambda_1fac56e8dc857868f8bd6529f7683e95_--operator().c)
 *     _lambda_d3f0c5910d0e6f609c52600b0f132e68_::operator() @ 0x18001BC20 (_lambda_d3f0c5910d0e6f609c52600b0f132e68_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Set(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  int AgileReference; // edi
  __int64 v6; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  AgileReference = 0;
  if ( a2 )
  {
    v8 = 0LL;
    AgileReference = RoGetAgileReference(0LL, &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a, a2, &v8);
    if ( AgileReference < 0 )
    {
      v6 = v8;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v8;
    }
    if ( v6 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)AgileReference;
}
