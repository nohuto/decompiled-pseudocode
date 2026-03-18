/*
 * XREFs of PfSnActiveTraceGetNext @ 0x14008B88C
 * Callers:
 *     PfSnNameRemoveAll @ 0x140537C08 (PfSnNameRemoveAll.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

__int64 *__fastcall PfSnActiveTraceGetNext(struct _EX_RUNDOWN_REF *a1)
{
  __int64 **v2; // rbx
  KIRQL v3; // bp
  __int64 *i; // rbx
  __int64 *v5; // rsi

  v2 = (__int64 **)&a1[2];
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_1403CD850);
  if ( !a1 )
    v2 = (__int64 **)&qword_1403CD848;
  for ( i = *v2; i != &PfSnGlobals; i = (__int64 *)i[1] )
  {
    v5 = i - 1;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)i + 44) )
      goto LABEL_6;
  }
  v5 = 0LL;
LABEL_6:
  KxReleaseSpinLock(&qword_1403CD850);
  __writecr8(v3);
  if ( a1 )
    ExReleaseRundownProtection(a1 + 45);
  return v5;
}
