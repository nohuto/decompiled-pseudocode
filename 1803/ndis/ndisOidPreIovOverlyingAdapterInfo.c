/*
 * XREFs of ndisOidPreIovOverlyingAdapterInfo @ 0x1C00F35D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreIovOverlyingAdapterInfo(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  int v5; // eax
  int v7; // [rsp+20h] [rbp-18h]

  v1 = *(_DWORD **)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = 0;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qq(0x51u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v1);
  if ( v1[1] == 1 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( v1[12] >= 0x14u )
    {
      v5 = 0;
    }
    else
    {
      v5 = -1073676268;
      v1[14] = 20;
      *(_DWORD *)(a1 + 40) = -1073676268;
      v4 = 1;
    }
  }
  else
  {
    v5 = -1073741637;
    v4 = 1;
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    v7 = v5;
    WPP_SF_qdD(0x52u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v4, v7);
  }
  return v4;
}
