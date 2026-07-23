/*
 * XREFs of LdrRegisterDllNotification @ 0x180082F90
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180108B30 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
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
  Heap = RtlAllocateHeap(HeapHandle, ::Flags + 0x40000, 0x20uLL);
  v8 = Heap;
  if ( !Heap )
    return -1073741801;
  Heap[2] = NotificationFunction;
  Heap[3] = Context;
  RtlEnterCriticalSection(&stru_1801564C0);
  v9 = off_180156620[0];
  if ( *(_UNKNOWN ***)off_180156620[0] != &off_180156618 )
    __fastfail(3u);
  *v8 = &off_180156618;
  v8[1] = v9;
  *v9 = v8;
  off_180156620[0] = (_UNKNOWN **)v8;
  RtlLeaveCriticalSection(&stru_1801564C0);
  result = 0;
  *Cookie = v8;
  return result;
}
