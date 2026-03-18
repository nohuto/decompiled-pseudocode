/*
 * XREFs of ExDrainPoolLookasideList @ 0x14057A8E0
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14057A664 (MiDereferenceSessionFinal.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x14002D894 (ExpRemoveGeneralLookaside.c)
 *     ExpInsertPoolTracker @ 0x14013E26C (ExpInsertPoolTracker.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedFlushSList @ 0x1401894F0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

PSLIST_ENTRY __fastcall ExDrainPoolLookasideList(PSLIST_HEADER ListHead)
{
  PSLIST_ENTRY result; // rax
  _QWORD *p_Next; // rdi
  unsigned __int64 v4; // rcx
  _QWORD *v5; // rbx

  ExpRemoveGeneralLookaside(&ExPagedLookasideLock, (__int64)ListHead);
  result = RtlpInterlockedFlushSList(ListHead);
  p_Next = &result->Next;
  if ( result )
  {
    do
    {
      v4 = (unsigned __int64)(p_Next - 2);
      if ( *(p_Next - 1) != ((unsigned __int64)(p_Next - 2) ^ ExpPoolQuotaCookie) )
        KeBugCheckEx(0x19u, 0xFuLL, (ULONG_PTR)(p_Next - 2), *(_QWORD *)(v4 + 8), v4 ^ ExpPoolQuotaCookie);
      v5 = (_QWORD *)*p_Next;
      *(_BYTE *)(v4 + 3) = *((_BYTE *)&ListHead[2].HeaderX64 + 4) | 2;
      ExpInsertPoolTracker(
        *(_DWORD *)(v4 + 4),
        16LL * (unsigned __int8)*(_WORD *)(v4 + 2),
        *((_DWORD *)&ListHead[2].HeaderX64 + 1),
        (int)p_Next);
      result = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD *))ListHead[3].Region)(p_Next);
      p_Next = v5;
    }
    while ( v5 );
  }
  return result;
}
