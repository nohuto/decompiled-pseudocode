/*
 * XREFs of LdrpObtainLockedEnclave @ 0x180047BC0
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrDeleteEnclave @ 0x1800D0060 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800D00E0 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800D01C0 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800D0260 (LdrLoadEnclaveModule.c)
 *     LdrpIssueEnclaveCall @ 0x1800D0AE0 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     LdrpDereferenceEnclave @ 0x1800D06BC (LdrpDereferenceEnclave.c)
 */

__int64 *__fastcall LdrpObtainLockedEnclave(unsigned __int64 a1, char a2)
{
  __int64 *i; // rbx
  __int64 *v5; // r8

  for ( i = 0LL; ; LdrpDereferenceEnclave(i) )
  {
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v5 = (__int64 *)LdrpEnclaveList;
    while ( v5 != &LdrpEnclaveList )
    {
      i = v5;
      if ( a2 )
      {
        if ( a1 == v5[8] )
          break;
      }
      else if ( a1 >= v5[8] && a1 - v5[8] < v5[9] )
      {
        break;
      }
      v5 = (__int64 *)*v5;
      i = 0LL;
    }
    if ( i )
      _InterlockedIncrement((volatile signed __int32 *)i + 14);
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    if ( !i )
      return 0LL;
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(i + 2));
    if ( i[8] )
      break;
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(i + 2));
  }
  return i;
}
