/*
 * XREFs of _SetInputServiceState @ 0x1C01080F0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00026B0 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall SetInputServiceState(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // edx

  if ( !a1 )
  {
    *(_DWORD *)(gptiCurrent + 1096LL) &= ~0x2000000u;
    return 1LL;
  }
  v1 = a1 - 1;
  if ( !v1 )
  {
    *(_DWORD *)(gptiCurrent + 1096LL) |= 0x2000000u;
    return 1LL;
  }
  v2 = v1 - 1;
  if ( v2 )
  {
    if ( v2 == 1 && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x2000000) != 0 )
    {
      v3 = 0;
      goto LABEL_6;
    }
  }
  else if ( (*(_DWORD *)(gptiCurrent + 1096LL) & 0x2000000) != 0 )
  {
    v3 = 1;
LABEL_6:
    HandleDeferredInput(gptiCurrent, v3);
  }
  return 1LL;
}
