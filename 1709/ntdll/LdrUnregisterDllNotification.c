/*
 * XREFs of LdrUnregisterDllNotification @ 0x1800D1600
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 */

NTSTATUS __cdecl LdrUnregisterDllNotification(PVOID Cookie)
{
  void *v2; // rdi
  NTSTATUS v3; // ebx
  _QWORD *i; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx

  v2 = 0LL;
  v3 = -1073741515;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  for ( i = LdrpDllNotificationList; i != &LdrpDllNotificationList; i = (_QWORD *)*i )
  {
    v2 = i;
    if ( i == Cookie )
    {
      v6 = (_QWORD *)*i;
      if ( *(_QWORD **)(*i + 8LL) != i || (v7 = (_QWORD *)i[1], (_QWORD *)*v7 != i) )
        __fastfail(3u);
      *v7 = v6;
      v3 = 0;
      v6[1] = v7;
      break;
    }
  }
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  if ( v3 >= 0 )
    RtlFreeHeap(LdrpHeap, 0, v2);
  return v3;
}
