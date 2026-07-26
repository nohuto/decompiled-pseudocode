/*
 * XREFs of ndisOidPreNdisIfOidQuery @ 0x1C00DE700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

char __fastcall ndisOidPreNdisIfOidQuery(__int64 a1)
{
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0xC0u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, *(_QWORD *)a1, *(_QWORD *)(a1 + 32));
  *(_DWORD *)(a1 + 40) = -1073741637;
  return 1;
}
