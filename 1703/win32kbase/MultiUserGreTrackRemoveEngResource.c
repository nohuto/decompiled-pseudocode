/*
 * XREFs of MultiUserGreTrackRemoveEngResource @ 0x1C00549C0
 * Callers:
 *     GreDeleteSemaphore @ 0x1C0054980 (GreDeleteSemaphore.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

_QWORD *__fastcall MultiUserGreTrackRemoveEngResource(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *result; // rax
  __int64 v4; // rcx

  if ( MultiUserEngAllocListLock )
    EngAcquireSemaphore(MultiUserEngAllocListLock);
  v2 = *a1;
  result = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*result != a1 )
    __fastfail(3u);
  *result = v2;
  *(_QWORD *)(v2 + 8) = result;
  if ( MultiUserEngAllocListLock )
  {
    result = (_QWORD *)EtwTraceGreLockReleaseSemaphore(L"MultiUserEngAllocListLock", MultiUserEngAllocListLock);
    if ( MultiUserEngAllocListLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)MultiUserEngAllocListLock);
      return (_QWORD *)PsLeavePriorityRegion(v4);
    }
  }
  return result;
}
