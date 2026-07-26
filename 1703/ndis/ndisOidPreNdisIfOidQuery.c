/*
 * XREFs of ndisOidPreNdisIfOidQuery @ 0x1C00D21D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 */

char __fastcall ndisOidPreNdisIfOidQuery(__int64 a1)
{
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0xB1u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, *(_QWORD *)a1, *(_QWORD *)(a1 + 32));
  *(_DWORD *)(a1 + 40) = -1073741637;
  return 1;
}
