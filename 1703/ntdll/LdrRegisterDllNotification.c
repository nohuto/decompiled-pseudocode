/*
 * XREFs of LdrRegisterDllNotification @ 0x1800041A0
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180105CA0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 */

NTSTATUS __cdecl LdrRegisterDllNotification(
        ULONG Flags,
        PLDR_DLL_NOTIFICATION_FUNCTION NotificationFunction,
        PVOID Context,
        PVOID *Cookie)
{
  _QWORD *Heap; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  NTSTATUS result; // eax

  if ( Flags || !Cookie || !NotificationFunction )
    return -1073741811;
  Heap = RtlAllocateHeap(HeapHandle, dword_18015B268 + 0x40000, 0x20uLL);
  v8 = Heap;
  if ( !Heap )
    return -1073741801;
  Heap[2] = NotificationFunction;
  Heap[3] = Context;
  RtlEnterCriticalSection(&CriticalSection);
  v9 = off_180155618[0];
  if ( *(_UNKNOWN ***)off_180155618[0] != &off_180155610 )
    __fastfail(3u);
  *v8 = &off_180155610;
  v8[1] = v9;
  *v9 = v8;
  off_180155618[0] = v8;
  RtlLeaveCriticalSection(&CriticalSection);
  result = 0;
  *Cookie = v8;
  return result;
}
