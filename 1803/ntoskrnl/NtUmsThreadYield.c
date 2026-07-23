/*
 * XREFs of NtUmsThreadYield @ 0x14074337C
 * Callers:
 *     <none>
 * Callees:
 *     KiIsPrimaryPresent @ 0x14024C570 (KiIsPrimaryPresent.c)
 *     KiUmsExceptionFilter @ 0x140743354 (KiUmsExceptionFilter.c)
 */

NTSTATUS __cdecl NtUmsThreadYield(PVOID SchedulerParam)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v2; // rax
  NTSTATUS v3; // ebx
  _DWORD *Object; // rsi
  __int64 v6; // rdi
  __int64 v7; // r14

  CurrentThread = KeGetCurrentThread();
  v2 = CurrentThread;
  v3 = 0;
  if ( !CurrentThread )
    v2 = KeGetCurrentThread();
  if ( (v2->Header.Reserved1 & 0x40) == 0 )
    return -1073741637;
  Object = CurrentThread->WaitBlock[3].Object;
  v6 = *(_QWORD *)Object;
  v7 = *(_QWORD *)(*(_QWORD *)Object + 1272LL);
  *(_QWORD *)(*(_QWORD *)Object + 1272LL) = 1LL;
  if ( KiIsPrimaryPresent(v6, (__int64)SchedulerParam) )
  {
    Object[20] |= 1u;
  }
  else
  {
    v3 = -1073740004;
    *(_QWORD *)(v6 + 1272) = v7;
  }
  return v3;
}
