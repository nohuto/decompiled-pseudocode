/*
 * XREFs of CcRescheduleLazyWriteScan @ 0x14002F8F0
 * Callers:
 *     CcLazyWriteScan @ 0x1400AEDEC (CcLazyWriteScan.c)
 *     CcCoalescingCallBack @ 0x1401DD4D0 (CcCoalescingCallBack.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 */

BOOLEAN __fastcall CcRescheduleLazyWriteScan(__int64 a1, __int64 *a2)
{
  __int64 Dpc; // r8
  __int64 v3; // rcx
  LARGE_INTEGER v4; // rdx
  BOOLEAN result; // al
  __int64 v6; // rcx

  Dpc = a1 + 536;
  if ( !CcCoalescingState )
  {
    if ( *(_BYTE *)(a1 + 664) )
    {
      if ( a2 && (v3 = *a2, *a2 != 0x7FFFFFFFFFFFFFFFLL) && v3 )
      {
        v6 = KeMaximumIncrement * v3;
        v4.QuadPart = 160000000LL;
        if ( v6 <= 160000000 )
          v4.QuadPart = v6;
        if ( v4.QuadPart < 10000000 )
          v4 = CcIdleDelay;
        if ( v4.QuadPart > 0 )
          v4.QuadPart = -v4.QuadPart;
      }
      else
      {
        v4 = CcIdleDelay;
      }
      return KeSetCoalescableTimer((PKTIMER)(Dpc + 64), v4, 0, 0x3E8u, (PKDPC)Dpc);
    }
    else
    {
      return CcScheduleLazyWriteScan(a1, 0LL, 0LL);
    }
  }
  return result;
}
