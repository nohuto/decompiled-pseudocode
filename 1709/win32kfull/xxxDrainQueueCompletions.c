/*
 * XREFs of xxxDrainQueueCompletions @ 0x1C00A0344
 * Callers:
 *     _GetQueueStatus @ 0x1C00A01B0 (_GetQueueStatus.c)
 * Callees:
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00A81A0 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxDrainQueueCompletions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // esi
  _QWORD *v6; // rbx
  _QWORD *ThreadWin32Thread; // rax
  int v8; // edi
  unsigned int v9; // eax
  __int64 result; // rax
  int v11; // [rsp+28h] [rbp-40h]
  _BYTE v12[32]; // [rsp+40h] [rbp-28h] BYREF
  char v13; // [rsp+78h] [rbp+10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a1;
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = (_QWORD *)*ThreadWin32Thread;
  }
  v14 = 0LL;
  v8 = 0;
  ZwSetIoCompletionEx(v6[173], v6[177], 0LL, 2LL, 0, 0LL);
  do
  {
    while ( 1 )
    {
      LOBYTE(v11) = 0;
      v9 = ZwRemoveIoCompletionEx(v6[173], v12, 1LL, &v13, &v14, v11);
      result = xxxHandleQueueCompletion(v6, v9, v12, v5);
      if ( (_DWORD)result != 3 )
        break;
      v8 = 1;
    }
  }
  while ( (_DWORD)result == 4 );
  if ( v8 )
    return ZwAssociateWaitCompletionPacket(v6[176], v6[173], v6[175], 0LL, 1LL, 0, 0LL, 0LL);
  return result;
}
