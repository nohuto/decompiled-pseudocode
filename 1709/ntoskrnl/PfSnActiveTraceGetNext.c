/*
 * XREFs of PfSnActiveTraceGetNext @ 0x140013088
 * Callers:
 *     PfSnNameRemoveAll @ 0x140456814 (PfSnNameRemoveAll.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 *__fastcall PfSnActiveTraceGetNext(struct _EX_RUNDOWN_REF *a1)
{
  __int64 **v2; // rbx
  KIRQL v3; // bp
  __int64 *i; // rbx
  __int64 *v5; // rsi

  v2 = (__int64 **)&a1[2];
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140389D10);
  if ( !a1 )
    v2 = (__int64 **)&qword_140389D08;
  for ( i = *v2; i != &PfSnGlobals; i = (__int64 *)i[1] )
  {
    v5 = i - 1;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)i + 44) )
      goto LABEL_6;
  }
  v5 = 0LL;
LABEL_6:
  KxReleaseSpinLock(&qword_140389D10);
  __writecr8(v3);
  if ( a1 )
    ExReleaseRundownProtection_0(a1 + 45);
  return v5;
}
