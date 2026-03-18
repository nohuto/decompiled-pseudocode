/*
 * XREFs of ExpFlushGeneralLookaside @ 0x1400C2E94
 * Callers:
 *     ExDeletePagedLookasideList @ 0x1400C2E60 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x140163E90 (ExDeleteNPagedLookasideList.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1401B2C50 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

PSLIST_ENTRY __fastcall ExpFlushGeneralLookaside(__int64 a1, int a2)
{
  PSLIST_ENTRY result; // rax
  _QWORD *p_Next; // rdx
  _QWORD *v6; // rbx

  result = RtlpInterlockedFlushSList((PSLIST_HEADER)a1);
  p_Next = &result->Next;
  if ( a2 )
  {
    if ( result )
    {
      do
      {
        v6 = (_QWORD *)*p_Next;
        (*(void (__fastcall **)(_QWORD *))(a1 + 56))(p_Next);
        p_Next = v6;
      }
      while ( v6 );
    }
    return 0LL;
  }
  return result;
}
