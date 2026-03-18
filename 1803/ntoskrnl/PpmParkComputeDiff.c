/*
 * XREFs of PpmParkComputeDiff @ 0x140282868
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x140036BE0 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     KeXorAffinityEx @ 0x1402403E0 (KeXorAffinityEx.c)
 */

__int64 PpmParkComputeDiff()
{
  __int64 v0; // r8
  __int64 v1; // rcx
  unsigned __int16 v2; // dx
  __int64 v3; // r9

  PpmPerfNewCoreParkingMask = 1310721;
  memset(&unk_14039BBE4, 0, 0xA4uLL);
  if ( PpmParkNumNodes )
  {
    v0 = (unsigned int)PpmParkNumNodes;
    v1 = PpmParkNodes + 4;
    do
    {
      v2 = *(_WORD *)v1;
      v3 = *(_QWORD *)(v1 + 28);
      if ( (unsigned __int16)PpmPerfNewCoreParkingMask <= *(_WORD *)v1 )
        LOWORD(PpmPerfNewCoreParkingMask) = v2 + 1;
      v1 += 248LL;
      qword_14039BBE8[v2] |= v3;
      --v0;
    }
    while ( v0 );
  }
  return KeXorAffinityEx();
}
