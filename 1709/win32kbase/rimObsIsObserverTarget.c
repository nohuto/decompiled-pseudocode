/*
 * XREFs of rimObsIsObserverTarget @ 0x1C0113D50
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C00A490C (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimObsIsObserverTarget(_DWORD *a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  __int64 v4; // rdx

  v2 = *(unsigned __int8 *)(a2 + 48);
  v3 = 0;
  if ( v2 == a1[25] )
  {
    if ( (_BYTE)v2 != 2 )
      return 1;
    v4 = *(_QWORD *)(a2 + 464);
    if ( *(unsigned __int16 *)(v4 + 16) == a1[26] && *(unsigned __int16 *)(v4 + 18) == a1[27] )
      return 1;
  }
  return v3;
}
