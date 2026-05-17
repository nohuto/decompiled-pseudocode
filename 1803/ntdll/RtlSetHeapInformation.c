/*
 * XREFs of RtlSetHeapInformation @ 0x18007B300
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800EC6A0 @ 0x1800EC6A0 (sub_1800EC6A0.c)
 *     RtlHeapTrkInitialize @ 0x1800F3000 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlRunOnceExecuteOnce @ 0x1800297E0 (RtlRunOnceExecuteOnce.c)
 *     sub_180060204 @ 0x180060204 (sub_180060204.c)
 *     sub_180060E04 @ 0x180060E04 (sub_180060E04.c)
 *     sub_18007B3C0 @ 0x18007B3C0 (sub_18007B3C0.c)
 *     sub_1800EB750 @ 0x1800EB750 (sub_1800EB750.c)
 *     sub_1800FD134 @ 0x1800FD134 (sub_1800FD134.c)
 */

__int64 __fastcall RtlSetHeapInformation(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rax

  switch ( a2 )
  {
    case -2147483646:
      if ( a3 && a4 == 48 )
      {
        result = sub_1800EB750(a1, a3);
LABEL_9:
        if ( (int)result < 0 )
          return result;
        return 0LL;
      }
      return 3221225473LL;
    case 0:
      if ( a4 < 4 )
        return 3221225507LL;
      if ( *(_DWORD *)a3 == 2 )
      {
        if ( *(_DWORD *)(a1 + 16) != -571548178 )
        {
          if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
          {
            result = sub_18007B3C0();
            goto LABEL_9;
          }
          return 3221225485LL;
        }
        return 0LL;
      }
      return 3221225473LL;
    case 1:
      dword_18015D014 = 0;
      return 0LL;
  }
  if ( a2 != 4 )
  {
    if ( a2 == 3 )
    {
      if ( !a3 || a4 < 4 || *(_DWORD *)a3 != 1 || a4 != 8 || *(_DWORD *)(a3 + 4) )
        return 3221225485LL;
      if ( a1 )
      {
        RtlEnterCriticalSection((__int64)&unk_18015AAC0);
        v6 = 60LL;
        if ( *(_DWORD *)(a1 + 16) != -571548178 )
          v6 = 208LL;
        if ( *(_WORD *)(v6 + a1) != 0xFFFF )
          sub_180060E04(a1);
        RtlLeaveCriticalSection((__int64)&unk_18015AAC0);
      }
      else
      {
        sub_180060204((__int64 (__fastcall *)(_QWORD, _QWORD))sub_180060DF0, 0LL, 0);
      }
    }
    else if ( a2 == 5 )
    {
      if ( !a3 || a4 < 0x10 || *(_WORD *)a3 != 1 || (*(_WORD *)(a3 + 2) & 0xFFFE) != 0 )
        return 3221225485LL;
      sub_1800FD134(a3);
    }
    return 0LL;
  }
  if ( (byte_18015D028 & 1) == 0 )
    return 3221225485LL;
  result = RtlRunOnceExecuteOnce(
             &qword_18015D348,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))sub_18005F770,
             (__int64)&qword_18015AA20,
             0LL);
  if ( (int)result >= 0 )
  {
    byte_18015D028 |= 2u;
    return 0LL;
  }
  return result;
}
