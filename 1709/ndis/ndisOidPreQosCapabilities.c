/*
 * XREFs of ndisOidPreQosCapabilities @ 0x1C00DCA30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPreQosCapabilities(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x81u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v3, v1);
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x14u )
  {
    *(_DWORD *)(v1 + 56) = 20;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_7;
    if ( !v3 )
      goto LABEL_14;
    v5 = *(_DWORD *)(v1 + 32) == -66781183 ? *(_QWORD *)(v3 + 4936) : *(_QWORD *)(v3 + 4944);
    if ( !v5 )
    {
LABEL_7:
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
    else
    {
      v6 = *(_QWORD *)(v1 + 40);
      *(_OWORD *)v6 = *(_OWORD *)v5;
      *(_DWORD *)(v6 + 16) = *(_DWORD *)(v5 + 16);
      *(_DWORD *)(v1 + 52) = 20;
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  v4 = 1;
LABEL_14:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v8 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x82u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v3, v4, v8);
  }
  return v4;
}
