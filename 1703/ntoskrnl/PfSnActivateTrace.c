/*
 * XREFs of PfSnActivateTrace @ 0x14012CEA4
 * Callers:
 *     PfSnBeginTrace @ 0x140565618 (PfSnBeginTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     PfSnAddProcessTrace @ 0x14012CF58 (PfSnAddProcessTrace.c)
 */

__int64 __fastcall PfSnActivateTrace(__int64 a1)
{
  KIRQL v2; // si
  int v3; // ebx
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx

  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&stru_14036DF80) )
  {
    *(_WORD *)(a1 + 486) |= 2u;
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_14036DFD0);
    v3 = PfSnAddProcessTrace(*(_QWORD *)(a1 + 352), a1);
    if ( v3 >= 0 )
    {
      v4 = (_QWORD *)qword_14036DFC8;
      v5 = (_QWORD *)(a1 + 8);
      if ( *(__int64 **)qword_14036DFC8 != &PfSnGlobals )
        __fastfail(3u);
      ++PfSnNumActiveTraces;
      *v5 = &PfSnGlobals;
      v3 = 0;
      *(_QWORD *)(a1 + 16) = v4;
      *v4 = v5;
      qword_14036DFC8 = a1 + 8;
    }
    KxReleaseSpinLock(&qword_14036DFD0);
    __writecr8(v2);
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return (unsigned int)v3;
}
