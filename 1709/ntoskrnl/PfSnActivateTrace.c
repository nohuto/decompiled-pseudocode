/*
 * XREFs of PfSnActivateTrace @ 0x1400105AC
 * Callers:
 *     PfSnBeginTrace @ 0x140453AA8 (PfSnBeginTrace.c)
 * Callees:
 *     PfSnAddProcessTrace @ 0x140010660 (PfSnAddProcessTrace.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfSnActivateTrace(__int64 a1)
{
  KIRQL v2; // si
  int v3; // ebx
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx

  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_14038D3E0) )
  {
    *(_WORD *)(a1 + 486) |= 2u;
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140389D10);
    v3 = PfSnAddProcessTrace(*(_QWORD *)(a1 + 352), a1);
    if ( v3 >= 0 )
    {
      v4 = (_QWORD *)qword_140389D08;
      v5 = (_QWORD *)(a1 + 8);
      if ( *(__int64 **)qword_140389D08 != &PfSnGlobals )
        __fastfail(3u);
      ++PfSnNumActiveTraces;
      *v5 = &PfSnGlobals;
      v3 = 0;
      *(_QWORD *)(a1 + 16) = v4;
      *v4 = v5;
      qword_140389D08 = a1 + 8;
    }
    KxReleaseSpinLock(&qword_140389D10);
    __writecr8(v2);
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return (unsigned int)v3;
}
