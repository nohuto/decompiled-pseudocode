/*
 * XREFs of ?DrainAndResetQueue@CCrossProcessBaseEndpoint@@IEAAXXZ @ 0x140053B08
 * Callers:
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x1400548C0 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessBaseEndpoint::DrainAndResetQueue(CCrossProcessBaseEndpoint *this)
{
  unsigned int i; // edx
  __int64 v3; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 9) + 132LL); *(_DWORD *)((v3 << 6) + *((_QWORD *)this + 14) + 4) = 0 )
    v3 = i++;
  _InterlockedExchange(*((volatile __int32 **)this + 8), 0);
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 8) + 4LL), 0);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
