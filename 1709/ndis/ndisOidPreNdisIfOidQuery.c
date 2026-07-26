/*
 * XREFs of ndisOidPreNdisIfOidQuery @ 0x1C00DC9F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

char __fastcall ndisOidPreNdisIfOidQuery(__int64 a1)
{
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xC3u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, *(_QWORD *)a1, *(_QWORD *)(a1 + 32));
  *(_DWORD *)(a1 + 40) = -1073741637;
  return 1;
}
