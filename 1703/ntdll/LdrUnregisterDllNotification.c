/*
 * XREFs of LdrUnregisterDllNotification @ 0x1800D5A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 */

NTSTATUS __cdecl LdrUnregisterDllNotification(PVOID Cookie)
{
  void *v2; // rdi
  NTSTATUS v3; // ebx
  _QWORD *i; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx

  v2 = 0LL;
  v3 = -1073741515;
  RtlEnterCriticalSection(&CriticalSection);
  for ( i = off_180155610; i != &off_180155610; i = (_QWORD *)*i )
  {
    v2 = i;
    if ( i == Cookie )
    {
      v6 = (_QWORD *)*i;
      v7 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v7 != i )
        __fastfail(3u);
      *v7 = v6;
      v3 = 0;
      v6[1] = v7;
      break;
    }
  }
  RtlLeaveCriticalSection(&CriticalSection);
  if ( v3 >= 0 )
    RtlFreeHeap(HeapHandle, 0, v2);
  return v3;
}
