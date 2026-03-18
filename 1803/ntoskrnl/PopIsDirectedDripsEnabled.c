/*
 * XREFs of PopIsDirectedDripsEnabled @ 0x140762038
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PopIsDirectedDripsEnabled()
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett

  _m_prefetchw(&PopDirectedDripsState);
  v0 = PopDirectedDripsState;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange(&PopDirectedDripsState, v0, v0);
  }
  while ( v1 != v0 );
  return v0 & 1;
}
