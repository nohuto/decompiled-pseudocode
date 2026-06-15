/*
 * XREFs of ?UpdateLatency@CCrossProcessBaseServerEndpoint@@UEAAJ_J@Z @ 0x140016F90
 * Callers:
 *     ?OnDisconnectedFromRightSubmix@CCrossProcessBaseServerEndpoint@@UEAAJ_J@Z @ 0x1400168F0 (-OnDisconnectedFromRightSubmix@CCrossProcessBaseServerEndpoint@@UEAAJ_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::UpdateLatency(CCrossProcessBaseServerEndpoint *this, __int64 a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this - 40);
  *((_QWORD *)this + 5) += a2;
  _InterlockedExchange64((volatile __int64 *)(v2 + 160), *((_QWORD *)this + 5));
  return 0LL;
}
