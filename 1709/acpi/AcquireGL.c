/*
 * XREFs of AcquireGL @ 0x1C0020828
 * Callers:
 *     ParseAcquire @ 0x1C0019550 (ParseAcquire.c)
 *     AccFieldUnit @ 0x1C001FA10 (AccFieldUnit.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcquireGL(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // eax

  v1 = 0;
  if ( ghGlobalLock )
  {
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 (__fastcall *)(__int64), __int64))ghGlobalLock)(
           5LL,
           0LL,
           qword_1C007A028,
           RestartCtxtCallback,
           a1 + 328);
    v1 = v3;
    if ( v3 == 259 )
    {
      return 32772;
    }
    else if ( v3 )
    {
      v1 = -1072431086;
      LogError(3222536210LL);
      AcpiDiagTraceAmlError(a1, 3222536210LL);
      PrintDebugMessage(6, 0, 0, 0, 0LL);
    }
  }
  return v1;
}
