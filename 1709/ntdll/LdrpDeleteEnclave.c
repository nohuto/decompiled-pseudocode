/*
 * XREFs of LdrpDeleteEnclave @ 0x1800D0640
 * Callers:
 *     LdrDeleteEnclave @ 0x1800D0060 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     NtTerminateEnclave @ 0x1800A3730 (NtTerminateEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D03CC (LdrpCleanupEnclaveLoadState.c)
 *     LdrpDereferenceEnclave @ 0x1800D06BC (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrpDeleteEnclave(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  result = NtTerminateEnclave();
  if ( (int)result >= 0 )
  {
    a1[13] = 0LL;
    LdrpCleanupEnclaveLoadState((__int64)a1, -1073741823);
    a1[8] = 0LL;
    RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
    v3 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
    LdrpDereferenceEnclave(a1);
    return 0LL;
  }
  return result;
}
