/*
 * XREFs of _lambda_a928f0ddc407f1fa0c53cd408c359a95_::operator() @ 0x1802B8C10
 * Callers:
 *     wil::ResultFromException__lambda_a928f0ddc407f1fa0c53cd408c359a95___ @ 0x1802B819C (wil--ResultFromException__lambda_a928f0ddc407f1fa0c53cd408c359a95___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18010618C (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1802B84D0 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 */

void __fastcall lambda_a928f0ddc407f1fa0c53cd408c359a95_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  const struct _GUID *v3; // rdx
  __int64 v4; // rcx
  int Instance; // eax
  int v6; // eax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
    *(__int64 ***)a1,
    (__int64)v7,
    *(_DWORD **)(a1 + 8));
  if ( !*(_QWORD *)(v7[0] + 40LL) )
  {
    std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
      *(__int64 ***)a1,
      (__int64)v7,
      *(_DWORD **)(a1 + 8));
    v2 = v7[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v7[0] + 40LL));
    Instance = CEnumerableObjectCollection::CreateInstance(v4, v3, (void **)(v2 + 40));
    if ( Instance < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        735LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Instance);
  }
  std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
    *(__int64 ***)a1,
    (__int64)v7,
    *(_DWORD **)(a1 + 8));
  if ( *(_QWORD *)(v7[0] + 40LL) )
  {
    std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
      *(__int64 ***)a1,
      (__int64)v7,
      *(_DWORD **)(a1 + 8));
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7[0] + 40LL) + 40LL))(
           *(_QWORD *)(v7[0] + 40LL),
           **(_QWORD **)(a1 + 16));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        735LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v6);
  }
}
