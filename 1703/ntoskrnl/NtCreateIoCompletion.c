/*
 * XREFs of NtCreateIoCompletion @ 0x140440074
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeQueue @ 0x140024C20 (KeInitializeQueue.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG NumberOfConcurrentThreads)
{
  ULONG v4; // ebx
  int v5; // r10d
  PHANDLE v6; // rdi
  char PreviousMode; // si
  __int64 v8; // r8
  NTSTATUS Object; // ecx
  ULONG v10; // edx
  PRKQUEUE v11; // rbx
  __int64 v13; // [rsp+58h] [rbp-30h] BYREF
  PRKQUEUE Queue; // [rsp+68h] [rbp-20h]

  v4 = NumberOfConcurrentThreads;
  v5 = (int)ObjectAttributes;
  v6 = IoCompletionHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoCompletionHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)IoCompletionHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  LOBYTE(NumberOfConcurrentThreads) = PreviousMode;
  LOBYTE(IoCompletionHandle) = PreviousMode;
  Object = ObCreateObjectEx((_DWORD)IoCompletionHandle, (_DWORD)IoCompletionObjectType, v5, NumberOfConcurrentThreads);
  if ( Object >= 0 )
  {
    v10 = v4;
    v11 = Queue;
    KeInitializeQueue(Queue, v10);
    *(_QWORD *)&v11[1].Header.Lock = 0LL;
    LOBYTE(v11[1].Header.WaitListHead.Flink) = 0;
    Object = ObInsertObjectEx(v11, 0LL, 0, 0LL, (__int64)&v13);
    if ( Object >= 0 )
      *v6 = (HANDLE)v13;
  }
  return Object;
}
