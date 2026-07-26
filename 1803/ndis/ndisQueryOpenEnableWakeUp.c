/*
 * XREFs of ndisQueryOpenEnableWakeUp @ 0x1C00E2350
 * Callers:
 *     ndisQueryEnableWakeUp @ 0x1C00E22E4 (ndisQueryEnableWakeUp.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisQueryOpenEnableWakeUp(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0xAu, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, a2);
  v4 = 0;
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    **(_DWORD **)(a2 + 40) = *(_DWORD *)(a1 + 304);
    v5 = 0;
    *(_DWORD *)(a2 + 52) = 4;
  }
  else
  {
    v4 = -1073676268;
    v5 = 4;
  }
  *(_DWORD *)(a2 + 56) = v5;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v7 = v4;
    WPP_SF_qqd(0xBu, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, a2, v7);
  }
  return v4;
}
