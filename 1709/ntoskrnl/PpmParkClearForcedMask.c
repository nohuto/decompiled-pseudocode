/*
 * XREFs of PpmParkClearForcedMask @ 0x14070C9C8
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     PpmCheckApplyParkConstraints @ 0x140137E00 (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x140138AB4 (PpmParkApplyPolicy.c)
 *     PpmParkParkingAvailable @ 0x1405B6230 (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkClearForcedMask(_WORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  char v8; // al

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( *a1 < 0x14u )
  {
    v6 = (unsigned int)PpmParkNumNodes;
    v4 = 0;
    LOBYTE(v3) = 0;
    v7 = 0LL;
    if ( PpmParkNumNodes )
    {
      do
      {
        v2 = PpmParkNodes + 248LL * (unsigned __int16)v7;
        if ( *(_WORD *)(v2 + 4) == *a1 )
        {
          v8 = *(_BYTE *)(v2 + 122);
          if ( (v8 & 1) != 0 )
          {
            LOBYTE(v3) = 1;
            *(_BYTE *)(v2 + 122) = v8 & 0xFE;
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
