/*
 * XREFs of RtlDestroyAtomTable @ 0x1800E94C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_1800729B0 @ 0x1800729B0 (sub_1800729B0.c)
 *     RtlDestroyHandleTable @ 0x180089AF0 (RtlDestroyHandleTable.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall RtlDestroyAtomTable(char *a1)
{
  unsigned int v3; // ebp
  _QWORD **i; // rdi
  _QWORD *v5; // rsi
  _QWORD *v6; // r8

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 1, 0xFFFFFFFF) == 1 )
  {
    if ( !sub_1800729B0((__int64)a1) )
      return 3221225485LL;
    v3 = 0;
    for ( i = (_QWORD **)(a1 + 72); v3 < *((_DWORD *)a1 + 16); ++v3 )
    {
      v5 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v6 = v5;
        if ( !v5 )
          break;
        v5 = (_QWORD *)*v5;
        *v6 = 0LL;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v6);
      }
    }
    *(_DWORD *)a1 = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1 + 1);
    RtlDestroyHandleTable((__int64)(a1 + 16));
    memset(a1, 0, 0x50uLL);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
  }
  return 0LL;
}
