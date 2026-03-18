/*
 * XREFs of PfSnActivateTrace @ 0x1400064B0
 * Callers:
 *     PfSnBeginTrace @ 0x140494618 (PfSnBeginTrace.c)
 * Callees:
 *     PfSnAddProcessTrace @ 0x140006564 (PfSnAddProcessTrace.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall PfSnActivateTrace(__int64 a1)
{
  KIRQL v2; // si
  int v3; // ebx
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx

  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&RunRef) )
  {
    *(_WORD *)(a1 + 486) |= 2u;
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_1403CD850);
    v3 = PfSnAddProcessTrace(*(_QWORD *)(a1 + 352), a1);
    if ( v3 >= 0 )
    {
      v4 = (_QWORD *)qword_1403CD848;
      v5 = (_QWORD *)(a1 + 8);
      if ( *(__int64 **)qword_1403CD848 != &PfSnGlobals )
        __fastfail(3u);
      ++PfSnNumActiveTraces;
      *v5 = &PfSnGlobals;
      v3 = 0;
      *(_QWORD *)(a1 + 16) = v4;
      *v4 = v5;
      qword_1403CD848 = a1 + 8;
    }
    KxReleaseSpinLock(&qword_1403CD850);
    __writecr8(v2);
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return (unsigned int)v3;
}
