/*
 * XREFs of ndisOidPreMaxLinkSpeed @ 0x1C00DC5F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPreMaxLinkSpeed(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 v2; // bl
  __int64 v3; // rsi
  __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  v3 = 0LL;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xBFu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, 0LL, v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_13:
    v2 = 1;
    goto LABEL_14;
  }
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 )
  {
    v3 = *(_QWORD *)(v5 + 32);
  }
  else if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)a1;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    *(_OWORD *)*(_QWORD *)(v1 + 40) = *(_OWORD *)(v3 + 3032);
    *(_DWORD *)(a1 + 40) = 0;
    *(_QWORD *)(v1 + 52) = 16LL;
    goto LABEL_13;
  }
LABEL_14:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v7 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0xC0u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v3, v2, v7);
  }
  return v2;
}
