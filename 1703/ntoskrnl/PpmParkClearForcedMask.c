/*
 * XREFs of PpmParkClearForcedMask @ 0x1406D675C
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x14015FC60 (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x1401604C8 (PpmParkApplyPolicy.c)
 *     PpmParkParkingAvailable @ 0x1405C0510 (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkClearForcedMask(_WORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r10
  char v9; // al

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( *a1 < 0x14u )
  {
    v6 = (unsigned int)PpmParkNumNodes;
    v4 = 0;
    LOBYTE(v3) = 0;
    v7 = 0LL;
    if ( PpmParkNumNodes )
    {
      v8 = PpmParkNodes;
      do
      {
        v2 = 248LL * (unsigned __int16)v7;
        if ( *(_WORD *)(v2 + v8 + 4) == *a1 )
        {
          v9 = *(_BYTE *)(v2 + v8 + 122);
          if ( (v9 & 1) != 0 )
          {
            LOBYTE(v3) = 1;
            *(_BYTE *)(v2 + v8 + 122) = v9 & 0xFE;
          }
        }
        LOWORD(v7) = v7 + 1;
      }
      while ( (unsigned __int16)v7 < (unsigned int)v6 );
    }
    if ( (_BYTE)v3 )
    {
      PpmParkApplyPolicy(v7, v2, v3, (_BYTE *)v6);
      PpmParkParkingAvailable();
      PpmCheckApplyParkConstraints();
      return v4;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v4;
}
