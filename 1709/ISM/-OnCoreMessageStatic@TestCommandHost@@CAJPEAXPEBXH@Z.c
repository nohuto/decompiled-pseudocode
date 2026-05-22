/*
 * XREFs of ?OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z @ 0x18000A0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?count@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBW4TestCommandMessageType@@@Z @ 0x18000A170 (-count@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 *     ??A?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAAAEAU?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@1@AEBW4TestCommandMessageType@@@Z @ 0x18000A448 (--A-$unordered_map@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHead.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TestCommandHost::OnCoreMessageStatic(_QWORD *a1, const void *a2, int a3, const char *a4)
{
  size_t v4; // r15
  void *v7; // rbx
  __int64 v8; // rax
  const char *v9; // r9
  __int64 v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a3;
  if ( (unsigned __int64)a3 < 4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      a4);
    __debugbreak();
  }
  v7 = malloc(a3);
  memcpy_0(v7, a2, v4);
  try
  {
    v8 = std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::count(
           a1 + 9,
           v7);
    if ( v8 )
    {
      v10 = std::unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>::operator[](
              a1 + 9,
              v7);
      LOBYTE(v8) = (*(__int64 (__fastcall **)(_QWORD, void *))(v10 + 8))(*(_QWORD *)v10, v7);
    }
    if ( (_BYTE)v8 )
      (*(void (__fastcall **)(_QWORD, _QWORD, void *, _QWORD))(*(_QWORD *)*a1 + 160LL))(
        *a1,
        a1[1],
        v7,
        (unsigned int)v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      v9);
  }
  return 0LL;
}
