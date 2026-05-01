/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800229A8
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@@Z @ 0x180020B30 (-Get@-$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Inter.c)
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x180020D08 (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180022A54 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMarshaledInterface::_Unmarshal(CMarshaledInterface *this, const struct _GUID *a2, void **a3)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  HRESULT InterfaceAndReleaseStream; // eax
  IStream *v8; // rcx

  *a3 = 0LL;
  v5 = -2147467259;
  v6 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( *(_DWORD *)(v6 + 24) == 2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    else
      *(_QWORD *)this = 0LL;
    *a3 = 0LL;
    if ( *(_DWORD *)(v6 + 24) == 2 )
    {
      InterfaceAndReleaseStream = AgileGitPtr::CopyLocal((AgileGitPtr *)(v6 + 32), a2, a3);
    }
    else
    {
      v8 = *(IStream **)(v6 + 16);
      *(_QWORD *)(v6 + 16) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v8, a2, a3);
    }
    v5 = InterfaceAndReleaseStream;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}
