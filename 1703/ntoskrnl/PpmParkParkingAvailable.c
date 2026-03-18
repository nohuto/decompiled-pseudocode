/*
 * XREFs of PpmParkParkingAvailable @ 0x1405C0510
 * Callers:
 *     PpmParkRegisterParking @ 0x14015FC70 (PpmParkRegisterParking.c)
 *     PpmCheckReInit @ 0x1405C02B8 (PpmCheckReInit.c)
 *     PpmParkApplyForcedMask @ 0x1406D6688 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406D675C (PpmParkClearForcedMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140047190 (KeIsEmptyAffinityEx.c)
 */

unsigned __int8 PpmParkParkingAvailable()
{
  unsigned int v0; // esi
  __int64 v1; // rdi
  unsigned __int8 v2; // bl
  unsigned int v3; // ebp
  __int64 v4; // rdi
  unsigned int v5; // ecx
  __int64 v6; // rax
  unsigned __int8 v7; // dl
  unsigned __int8 v8; // r8
  unsigned __int8 result; // al

  v0 = PpmParkNumNodes;
  if ( PpmParkNumNodes == 1 )
  {
    v1 = PpmParkNodes;
    if ( KeGetCurrentPrcb()->LogicalProcessorsPerCore == *(_BYTE *)(PpmParkNodes + 6) )
      return 0;
    v0 = PpmParkNumNodes;
  }
  else
  {
    v1 = PpmParkNodes;
  }
  v2 = 0;
  v3 = 0;
  if ( v0 )
  {
    v4 = v1 + 108;
    while ( !*(_BYTE *)(v4 + 2)
         && !*(_BYTE *)(v4 + 4)
         && !*(_QWORD *)(v4 - 76)
         && (unsigned int)KeIsEmptyAffinityEx(PpmPerfCoreParkingMask) )
    {
      v5 = 0;
      v6 = 0LL;
      while ( 1 )
      {
        v7 = *(_BYTE *)(v4 + v6 - 4);
        if ( v7 )
        {
          v8 = *(_BYTE *)(v4 + v6);
          if ( *(_BYTE *)(v4 + v6 - 2) < v8 || v8 < v7 )
            break;
        }
        ++v5;
        ++v6;
        if ( v5 >= 2 )
          goto LABEL_14;
      }
      v2 = 1;
LABEL_14:
      ++v3;
      v4 += 248LL;
      if ( v3 >= v0 )
        goto LABEL_15;
    }
    v2 = 1;
  }
LABEL_15:
  result = v2;
  PpmIsParkingEnabled = v2;
  return result;
}
