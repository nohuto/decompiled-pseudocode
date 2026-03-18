/*
 * XREFs of PoSetThermalActiveCooling @ 0x1406F6B50
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopPropogateCoolingChange @ 0x14023CFD4 (PopPropogateCoolingChange.c)
 *     PoGetThermalRequestSupport @ 0x1406F6B20 (PoGetThermalRequestSupport.c)
 *     PopDiagTraceThermalRequestActiveUpdate @ 0x1407055D8 (PopDiagTraceThermalRequestActiveUpdate.c)
 */

__int64 __fastcall PoSetThermalActiveCooling(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  char v6; // bp

  v4 = 0;
  if ( PoGetThermalRequestSupport(a1, 1) )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = a2 != 0;
    PopAcquireRwLockExclusive(v5 + 32);
    if ( *(_BYTE *)(a1 + 18) )
    {
      if ( *(_BYTE *)(a1 + 17) != v6 )
      {
        *(_BYTE *)(a1 + 17) = v6;
        PopDiagTraceThermalRequestActiveUpdate(a1);
        PopPropogateCoolingChange(v5);
      }
    }
    else
    {
      v4 = -1073741431;
    }
    PopReleaseRwLock(v5 + 32);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
