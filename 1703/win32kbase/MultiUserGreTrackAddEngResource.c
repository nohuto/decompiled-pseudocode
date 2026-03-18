/*
 * XREFs of MultiUserGreTrackAddEngResource @ 0x1C0054AC0
 * Callers:
 *     GreCreateSemaphoreInternal @ 0x1C0054A38 (GreCreateSemaphoreInternal.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 *__fastcall MultiUserGreTrackAddEngResource(__int64 a1, int a2)
{
  __int64 *result; // rax
  __int64 v4; // rcx

  *(_DWORD *)(a1 + 16) = a2;
  if ( MultiUserEngAllocListLock )
    EngAcquireSemaphore(MultiUserEngAllocListLock);
  result = (__int64 *)qword_1C018E690;
  if ( *(struct _LIST_ENTRY **)qword_1C018E690 != &MultiUserGreEngAllocList )
    __fastfail(3u);
  *(_QWORD *)a1 = &MultiUserGreEngAllocList;
  *(_QWORD *)(a1 + 8) = result;
  *result = a1;
  qword_1C018E690 = a1;
  if ( MultiUserEngAllocListLock )
  {
    result = (__int64 *)EtwTraceGreLockReleaseSemaphore(L"MultiUserEngAllocListLock", MultiUserEngAllocListLock);
    if ( MultiUserEngAllocListLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)MultiUserEngAllocListLock);
      return (__int64 *)PsLeavePriorityRegion(v4);
    }
  }
  return result;
}
