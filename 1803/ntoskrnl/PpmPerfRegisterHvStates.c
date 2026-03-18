/*
 * XREFs of PpmPerfRegisterHvStates @ 0x14076FD20
 * Callers:
 *     <none>
 * Callees:
 *     HvlGetLpIndexFromApicId @ 0x140226F70 (HvlGetLpIndexFromApicId.c)
 *     HvlConfigurePcc @ 0x14022BABC (HvlConfigurePcc.c)
 *     HvlConfigurePerfStates @ 0x14022BB48 (HvlConfigurePerfStates.c)
 *     HvlConfigureThrottleStates @ 0x14022BBE4 (HvlConfigureThrottleStates.c)
 */

__int64 __fastcall PpmPerfRegisterHvStates(__int64 a1)
{
  unsigned int v1; // ebx
  int LpIndexFromApicId; // esi
  __int64 v4; // rdx
  _OWORD *v5; // rax
  _OWORD *v6; // rdi
  unsigned int v7; // eax

  v1 = 0;
  if ( (HvlEnlightenments & 8) != 0 )
  {
    LpIndexFromApicId = HvlGetLpIndexFromApicId(*(unsigned int *)(a1 + 4));
    if ( LpIndexFromApicId == -1 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 24);
      v5 = *(_OWORD **)(a1 + 8);
      v6 = *(_OWORD **)(a1 + 16);
      if ( v4 )
      {
        return (unsigned int)HvlConfigurePcc(LpIndexFromApicId, v4);
      }
      else
      {
        if ( v5 )
          v1 = HvlConfigurePerfStates(LpIndexFromApicId, v5);
        v7 = 0;
        if ( v6 )
          v7 = HvlConfigureThrottleStates(LpIndexFromApicId, v6);
        if ( !v1 )
          return v7;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v1;
}
