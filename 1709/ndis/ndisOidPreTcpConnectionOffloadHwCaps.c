/*
 * XREFs of ndisOidPreTcpConnectionOffloadHwCaps @ 0x1C00DD060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffloadHwCaps(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xF5u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  v4 = 0;
  if ( !*(_QWORD *)a1 )
    goto LABEL_12;
  if ( !*(_QWORD *)(v1 + 4120) )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x14u )
    {
      *(_DWORD *)(v3 + 56) = 20;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      v5 = *(_QWORD *)(v1 + 4120);
      v6 = *(_QWORD *)(v3 + 40);
      *(_OWORD *)v6 = *(_OWORD *)(v5 + 912);
      *(_DWORD *)(v6 + 16) = *(_DWORD *)(v5 + 928);
      *(_DWORD *)(v3 + 56) = 20;
      *(_DWORD *)(v3 + 52) = 20;
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  v4 = 1;
LABEL_12:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v8 = v4;
    WPP_SF_qdD(0xF6u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, *(_DWORD *)(a1 + 40), v8);
  }
  return v4;
}
