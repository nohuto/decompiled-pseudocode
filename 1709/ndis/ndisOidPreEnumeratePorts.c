/*
 * XREFs of ndisOidPreEnumeratePorts @ 0x1C00DC130
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisEnumeratePorts @ 0x1C003C388 (ndisEnumeratePorts.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

char __fastcall ndisOidPreEnumeratePorts(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  char v4; // si
  __int64 v6; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xCEu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v3);
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
      *(_DWORD *)(a1 + 40) = -1073676265;
    else
      *(_DWORD *)(a1 + 40) = ndisEnumeratePorts(
                               v1,
                               *(_DWORD **)(v3 + 40),
                               *(_DWORD *)(v3 + 48),
                               (unsigned int *)(v3 + 52),
                               (unsigned int *)(v3 + 56));
    v4 = 1;
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v6) = *(_DWORD *)(a1 + 40);
    WPP_SF_qqd(0xCFu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v3, v6);
  }
  return v4;
}
