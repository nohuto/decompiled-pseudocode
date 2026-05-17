/*
 * XREFs of LdrRegisterDllNotification @ 0x180082F90
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180108B30 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall LdrRegisterDllNotification(int a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 Heap; // rax
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 result; // rax

  if ( a1 || !a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap(qword_18015C288, dword_18015C294 + 0x40000, 32LL);
  v8 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_QWORD *)(Heap + 16) = a2;
  *(_QWORD *)(Heap + 24) = a3;
  RtlEnterCriticalSection((__int64)&off_1801564C0);
  v9 = (__int64 *)off_180156620[0];
  if ( *(_UNKNOWN ***)off_180156620[0] != &off_180156618 )
    __fastfail(3u);
  *(_QWORD *)v8 = &off_180156618;
  *(_QWORD *)(v8 + 8) = v9;
  *v9 = v8;
  off_180156620[0] = (_UNKNOWN **)v8;
  RtlLeaveCriticalSection((__int64)&off_1801564C0);
  result = 0LL;
  *a4 = v8;
  return result;
}
