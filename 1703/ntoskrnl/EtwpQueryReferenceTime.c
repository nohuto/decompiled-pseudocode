/*
 * XREFs of EtwpQueryReferenceTime @ 0x14070A4D0
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpQueryReferenceTime(__int64 a1, unsigned int a2, _OWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v5; // rax
  unsigned int v6; // ebx

  if ( a2 == 0xFFFF )
    a2 = (unsigned __int8)EtwpSystemLogger[0];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0);
  v6 = 0;
  if ( v5 )
  {
    *a3 = *((_OWORD *)v5 + 19);
    EtwpReleaseLoggerContext(v5, 0);
  }
  else
  {
    v6 = -1073741162;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
