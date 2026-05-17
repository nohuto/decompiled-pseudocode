/*
 * XREFs of LdrRegisterDllNotification @ 0x1800041A0
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180105CA0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall LdrRegisterDllNotification(int a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 Heap; // rax
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 result; // rax

  if ( a1 || !a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap(qword_18015B328, (unsigned int)(dword_18015B268 + 0x40000), 32LL);
  v8 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_QWORD *)(Heap + 16) = a2;
  *(_QWORD *)(Heap + 24) = a3;
  RtlEnterCriticalSection(&off_180155580);
  v9 = (__int64 *)off_180155618[0];
  if ( *(_UNKNOWN ***)off_180155618[0] != &off_180155610 )
    __fastfail(3u);
  *(_QWORD *)v8 = &off_180155610;
  *(_QWORD *)(v8 + 8) = v9;
  *v9 = v8;
  off_180155618[0] = (_UNKNOWN *)v8;
  RtlLeaveCriticalSection(&off_180155580);
  result = 0LL;
  *a4 = v8;
  return result;
}
