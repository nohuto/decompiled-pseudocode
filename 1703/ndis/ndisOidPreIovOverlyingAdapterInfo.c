/*
 * XREFs of ndisOidPreIovOverlyingAdapterInfo @ 0x1C00E7420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 */

bool __fastcall ndisOidPreIovOverlyingAdapterInfo(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 v3; // rbp
  char v4; // cl
  bool v5; // di
  int v7; // [rsp+20h] [rbp-18h]

  v1 = *(_DWORD **)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = byte_1C0092621;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
  {
    WPP_SF_qq(0x51u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v3, v1);
    v4 = byte_1C0092621;
  }
  v5 = 1;
  if ( v1[1] == 1 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( v1[12] < 0x14u )
    {
      v1[14] = 20;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    v5 = *(_DWORD *)(a1 + 40) != 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  if ( (unsigned __int8)v4 >= 4u )
  {
    v7 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x52u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v3, v5, v7);
  }
  return v5;
}
