/*
 * XREFs of ndisOidPreMacAddress @ 0x1C00DC500
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

char __fastcall ndisOidPreMacAddress(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  char v4; // bl
  unsigned int v5; // ecx

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xBBu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_10:
    v4 = 1;
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 40) = 0;
    v5 = *(unsigned __int16 *)(*(_QWORD *)(v1 + 4064) + 1124LL);
    if ( *(_DWORD *)(v3 + 48) < v5 )
    {
      *(_DWORD *)(v3 + 56) = v5;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      memmove(
        *(void **)(v3 + 40),
        (const void *)(*(_QWORD *)(v1 + 4064) + 1126LL),
        *(unsigned __int16 *)(*(_QWORD *)(v1 + 4064) + 1124LL));
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(v3 + 52) = *(unsigned __int16 *)(*(_QWORD *)(v1 + 4064) + 1124LL);
      goto LABEL_10;
    }
  }
LABEL_11:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0xBCu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, *(_DWORD *)(a1 + 40));
  return v4;
}
