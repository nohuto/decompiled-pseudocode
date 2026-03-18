/*
 * XREFs of ExDrainPoolLookasideList @ 0x140757D88
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1406E2C84 (MiDereferenceSessionFinal.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x140123DD4 (ExpRemoveGeneralLookaside.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedFlushSList @ 0x140188FF0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExpInsertPoolTracker @ 0x140284990 (ExpInsertPoolTracker.c)
 */

PSLIST_ENTRY __fastcall ExDrainPoolLookasideList(PSLIST_HEADER ListHead)
{
  PSLIST_ENTRY result; // rax
  _QWORD *p_Next; // rdi
  _QWORD *v4; // rcx
  ULONG_PTR v5; // r9
  _QWORD *v6; // rbx

  ExpRemoveGeneralLookaside(&ExPagedLookasideLock, (__int64)ListHead);
  result = RtlpInterlockedFlushSList(ListHead);
  p_Next = &result->Next;
  if ( result )
  {
    do
    {
      v4 = p_Next - 2;
      v5 = *(p_Next - 1);
      if ( v5 != ((unsigned __int64)(p_Next - 2) ^ ExpPoolQuotaCookie) )
        KeBugCheckEx(0x19u, 0xFuLL, (ULONG_PTR)(p_Next - 2), v5, (unsigned __int64)(p_Next - 2) ^ ExpPoolQuotaCookie);
      v6 = (_QWORD *)*p_Next;
      *((_BYTE *)v4 + 3) = *((_BYTE *)&ListHead[2].HeaderX64 + 4) | 2;
      ExpInsertPoolTracker(
        *((_DWORD *)v4 + 1),
        16LL * (unsigned __int8)*((_WORD *)v4 + 1),
        *((_DWORD *)&ListHead[2].HeaderX64 + 1),
        (unsigned __int64)p_Next);
      result = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD *))ListHead[3].Region)(p_Next);
      p_Next = v6;
    }
    while ( v6 );
  }
  return result;
}
