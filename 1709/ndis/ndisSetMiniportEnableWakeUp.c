/*
 * XREFs of ndisSetMiniportEnableWakeUp @ 0x1C00E1968
 * Callers:
 *     ndisPreSetPMParameters @ 0x1C00ADE04 (ndisPreSetPMParameters.c)
 *     ndisSetEnableWakeUp @ 0x1C00E174C (ndisSetEnableWakeUp.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisSetMiniportEnableWakeUp(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v6; // edi
  _DWORD *v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x12u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1, a2);
  v6 = 0;
  *a3 = 1;
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    v7 = *(_DWORD **)(a2 + 40);
    if ( (*(_DWORD *)(a1 + 3888) & 0x100) != 0 )
      *v7 &= ~2u;
    *v7 &= ~4u;
    *a3 = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 52) = 0;
    v6 = -1073676268;
    *(_DWORD *)(a2 + 56) = 4;
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v9 = v6;
    WPP_SF_qqd(0x13u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1, a2, v9);
  }
  return v6;
}
