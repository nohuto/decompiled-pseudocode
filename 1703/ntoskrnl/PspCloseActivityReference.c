/*
 * XREFs of PspCloseActivityReference @ 0x14056E250
 * Callers:
 *     <none>
 * Callees:
 *     PsReleaseProcessWakeCounter @ 0x1404307E0 (PsReleaseProcessWakeCounter.c)
 */

__int64 __fastcall PspCloseActivityReference(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
  {
    if ( *a2 )
      return PsReleaseProcessWakeCounter(*a2, (int)a2);
  }
  return result;
}
