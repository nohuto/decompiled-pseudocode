/*
 * XREFs of ndisOidPreIovOverlyingAdapterInfo @ 0x1C00F0A20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

bool __fastcall ndisOidPreIovOverlyingAdapterInfo(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 v3; // rbp
  bool v4; // di
  int v6; // [rsp+20h] [rbp-18h]

  v1 = *(_DWORD **)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qq(0x51u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v1);
  v4 = 1;
  if ( v1[1] == 1 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( v1[12] < 0x14u )
    {
      v1[14] = 20;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    v4 = *(_DWORD *)(a1 + 40) != 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
  {
    v6 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x52u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v4, v6);
  }
  return v4;
}
