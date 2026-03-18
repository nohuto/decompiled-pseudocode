/*
 * XREFs of PpmParkClearForcedMask @ 0x14076FE88
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x14017F420 (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x14017FB78 (PpmParkApplyPolicy.c)
 *     PpmParkParkingAvailable @ 0x14063F8D0 (PpmParkParkingAvailable.c)
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
