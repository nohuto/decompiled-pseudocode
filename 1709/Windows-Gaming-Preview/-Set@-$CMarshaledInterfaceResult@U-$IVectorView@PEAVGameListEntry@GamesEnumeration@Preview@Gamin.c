/*
 * XREFs of ?Set@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18001B0F8
 * Callers:
 *     _lambda_45756babbe3c579ac0682f1f5b8db4a7_::operator() @ 0x18001A008 (_lambda_45756babbe3c579ac0682f1f5b8db4a7_--operator().c)
 *     _lambda_e55ccab858df802f1f19496ef6f8fbee_::operator() @ 0x18001ADAC (_lambda_e55ccab858df802f1f19496ef6f8fbee_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
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
