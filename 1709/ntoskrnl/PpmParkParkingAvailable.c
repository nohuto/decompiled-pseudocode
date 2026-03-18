/*
 * XREFs of PpmParkParkingAvailable @ 0x1405B6230
 * Callers:
 *     PpmParkRegisterParking @ 0x140137E1C (PpmParkRegisterParking.c)
 *     PpmCheckReInit @ 0x1405B5FE0 (PpmCheckReInit.c)
 *     PpmParkApplyForcedMask @ 0x14070C8F8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14070C9C8 (PpmParkClearForcedMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 */

unsigned __int8 PpmParkParkingAvailable()
{
  unsigned __int8 v0; // bl
  unsigned int v1; // esi
  __int64 v2; // rdi
  unsigned int v3; // ecx
  __int64 v4; // rax
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // r8
  unsigned __int8 result; // al

  if ( PpmParkNumNodes == 1 && KeGetCurrentPrcb()->LogicalProcessorsPerCore == *(_BYTE *)(PpmParkNodes + 6) )
    return 0;
  v0 = 0;
  v1 = 0;
  if ( PpmParkNumNodes )
  {
    v2 = PpmParkNodes + 108;
    while ( !*(_BYTE *)(v2 + 2)
         && !*(_BYTE *)(v2 + 4)
         && !*(_QWORD *)(v2 - 76)
         && (unsigned int)KeIsEmptyAffinityEx(PpmPerfCoreParkingMask) )
    {
      v3 = 0;
      v4 = 0LL;
      while ( 1 )
      {
        v5 = *(_BYTE *)(v2 + v4 - 4);
        if ( v5 )
        {
          v6 = *(_BYTE *)(v2 + v4);
          if ( *(_BYTE *)(v2 + v4 - 2) < v6 || v6 < v5 )
            break;
        }
        ++v3;
        ++v4;
        if ( v3 >= 2 )
          goto LABEL_13;
      }
      v0 = 1;
LABEL_13:
      ++v1;
      v2 += 248LL;
      if ( v1 >= PpmParkNumNodes )
        goto LABEL_14;
    }
    v0 = 1;
  }
LABEL_14:
  result = v0;
  PpmIsParkingEnabled = v0;
  return result;
}
