/*
 * XREFs of CmShutdownCmRM @ 0x14054E650
 * Callers:
 *     CmpTryToRundownHive @ 0x1400A1F10 (CmpTryToRundownHive.c)
 * Callees:
 *     CmpRunDownCmRM @ 0x14054E698 (CmpRunDownCmRM.c)
 *     CmpStopRMLog @ 0x14054E8A0 (CmpStopRMLog.c)
 */

__int64 __fastcall CmShutdownCmRM(__int64 a1, __int64 a2)
{
  char v2; // di

  v2 = a2;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 64) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 64));
      if ( !*(_DWORD *)(a1 + 64) )
        CmpStopRMLog(a1);
    }
  }
  LOBYTE(a2) = v2;
  return CmpRunDownCmRM(a1, a2);
}
