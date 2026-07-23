/*
 * XREFs of sub_18001EE04 @ 0x18001EE04
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrDeleteEnclave @ 0x1800C9790 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800C9810 (LdrInitializeEnclave.c)
 *     sub_1800C98F0 @ 0x1800C98F0 (sub_1800C98F0.c)
 *     LdrLoadEnclaveModule @ 0x1800C9990 (LdrLoadEnclaveModule.c)
 *     LdrCallEnclave_0 @ 0x1800CA210 (LdrCallEnclave_0.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_1800C9DEC @ 0x1800C9DEC (sub_1800C9DEC.c)
 */

__int64 *__fastcall sub_18001EE04(unsigned __int64 a1, char a2)
{
  __int64 *i; // rbx
  __int64 *v5; // r8

  for ( i = 0LL; ; sub_1800C9DEC(i) )
  {
    RtlEnterCriticalSection(&CriticalSection);
    v5 = (__int64 *)qword_18015CA70;
    while ( v5 != &qword_18015CA70 )
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
    RtlLeaveCriticalSection(&CriticalSection);
    if ( !i )
      return 0LL;
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(i + 2));
    if ( i[8] )
      break;
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(i + 2));
  }
  return i;
}
