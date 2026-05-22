/*
 * XREFs of ?RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@ZAEAVCommandRegistrationToken@1@@Z @ 0x180009950
 * Callers:
 *     ?Initialize@DWMCursor@@QEAAJ_N@Z @ 0x18008AE5C (-Initialize@DWMCursor@@QEAAJ_N@Z.c)
 * Callees:
 *     ??A?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAAAEAU?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@1@AEBW4TestCommandMessageType@@@Z @ 0x18000A298 (--A-$unordered_map@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHead.c)
 */

__int64 __fastcall TestCommandHost::RegisterForTestCommandMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rax
  const char *v8; // r9
  __int64 result; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v11 = -2LL;
  v10 = 2;
  try
  {
    v7 = (_QWORD *)std::unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>::operator[](
                     (char *)TestCommandHost::m_instance + 72,
                     &v10);
    *v7 = a2;
    v7[1] = a3;
    result = v10;
    *(_DWORD *)a4 = v10;
    *(_QWORD *)(a4 + 8) = a2;
    *(_QWORD *)(a4 + 16) = a3;
    *(_BYTE *)(a4 + 24) = 1;
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x3E,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
             v8);
  }
  return result;
}
