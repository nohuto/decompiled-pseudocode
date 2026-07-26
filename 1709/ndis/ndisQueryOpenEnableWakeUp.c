/*
 * XREFs of ndisQueryOpenEnableWakeUp @ 0x1C00E0B70
 * Callers:
 *     ndisQueryEnableWakeUp @ 0x1C00E0B00 (ndisQueryEnableWakeUp.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisQueryOpenEnableWakeUp(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  unsigned int v6; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xAu, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1, a2);
  v4 = 0;
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    **(_DWORD **)(a2 + 40) = *(_DWORD *)(a1 + 304);
    *(_QWORD *)(a2 + 52) = 4LL;
  }
  else
  {
    *(_DWORD *)(a2 + 56) = 4;
    v4 = -1073676268;
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v6 = v4;
    WPP_SF_qqd(0xBu, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1, a2, v6);
  }
  return v4;
}
