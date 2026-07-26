/*
 * XREFs of ndisMHaltMiniport @ 0x1C00BF938
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00FA8D0 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisCloseULongRef @ 0x1C00259B8 (ndisCloseULongRef.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00BF9A0 (ndisMDeregisterBugCheckHandler.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FB074 (ndisMCommonHaltMiniport.c)
 */

void __fastcall ndisMHaltMiniport(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Eu, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, BugCheckParameter2);
  if ( ndisCloseULongRef((PKSPIN_LOCK)(BugCheckParameter2 + 4464)) )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 124) & 0x4000) == 0 )
    {
      ndisMCommonHaltMiniport(BugCheckParameter2);
      ndisMDeregisterBugCheckHandler(BugCheckParameter2);
    }
    ndisDereferenceMiniport(BugCheckParameter2, 0x18u);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Fu, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, BugCheckParameter2);
}
