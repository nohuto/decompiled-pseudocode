/*
 * XREFs of ndisOidPreOffloadHwCaps @ 0x1C00C5830
 * Callers:
 *     <none>
 * Callees:
 *     ndisCopyNdisOffload @ 0x1C001DD30 (ndisCopyNdisOffload.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPreOffloadHwCaps(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v6; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xF1u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_14;
  if ( !*(_QWORD *)a1 )
  {
    v4 = 0;
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(v1 + 4120) )
  {
LABEL_14:
    *(_DWORD *)(a1 + 40) = -1073741637;
    v4 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x70u )
    {
      *(_DWORD *)(v3 + 56) = 112;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    v4 = 1;
    if ( !*(_DWORD *)(a1 + 40) )
    {
      ndisCopyNdisOffload(
        *(_QWORD *)(v3 + 40),
        *(_QWORD *)(v1 + 4120) + 572LL,
        *(_DWORD *)(v3 + 48),
        (_DWORD *)(v3 + 52),
        1);
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
LABEL_6:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v6) = v4;
    WPP_SF_qdD(0xF2u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, *(_DWORD *)(a1 + 40), v6);
  }
  return v4;
}
