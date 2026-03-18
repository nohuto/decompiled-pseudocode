/*
 * XREFs of PfSnActiveTraceGetNext @ 0x14004F7B8
 * Callers:
 *     PfSnNameRemoveAll @ 0x14048BD50 (PfSnNameRemoveAll.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 */

__int64 *__fastcall PfSnActiveTraceGetNext(struct _EX_RUNDOWN_REF *a1)
{
  KIRQL v2; // bp
  __int64 *v3; // rbx
  __int64 *v4; // rsi

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_14036DFD0);
  v3 = (__int64 *)&a1[1];
  if ( !a1 )
    v3 = &PfSnGlobals;
  while ( 1 )
  {
    v3 = (__int64 *)v3[1];
    if ( v3 == &PfSnGlobals )
      break;
    v4 = v3 - 1;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v3 + 44) )
      goto LABEL_5;
  }
  v4 = 0LL;
LABEL_5:
  KxReleaseSpinLock(&qword_14036DFD0);
  __writecr8(v2);
  if ( a1 )
    ExReleaseRundownProtection(a1 + 45);
  return v4;
}
