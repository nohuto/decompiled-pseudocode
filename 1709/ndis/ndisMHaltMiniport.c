/*
 * XREFs of ndisMHaltMiniport @ 0x1C00AB944
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00FE208 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisCloseULongRef @ 0x1C0001948 (ndisCloseULongRef.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00AB9AC (ndisMDeregisterBugCheckHandler.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FE9B4 (ndisMCommonHaltMiniport.c)
 */

void __fastcall ndisMHaltMiniport(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Eu, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, BugCheckParameter2);
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
    WPP_SF_q(0x1Fu, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, BugCheckParameter2);
}
