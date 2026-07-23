/*
 * XREFs of TpAllocTimer @ 0x18000C830
 * Callers:
 *     RtlCreateTimer @ 0x180011160 (RtlCreateTimer.c)
 *     RtlpInitializeWnf @ 0x180081350 (RtlpInitializeWnf.c)
 *     RtlInitializeHeapGC @ 0x1800814AC (RtlInitializeHeapGC.c)
 * Callees:
 *     TppInitializeTimer @ 0x18000C73C (TppInitializeTimer.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocTimer(
        PTP_TIMER *Timer,
        PTP_TIMER_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // ebp
  PTP_TIMER *v7; // r14
  _TP_TIMER *Heap; // rax
  _TP_TIMER *v9; // rbx
  NTSTATUS result; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (int)Context;
  v7 = Timer;
  if ( !Timer
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || (Timer = (PTP_TIMER *)NtCurrentPeb()->Ldr, *((_BYTE *)Timer + 72)) )
  {
    TppRaiseInvalidParameter(Timer, Callback);
    return -1073741811;
  }
  else
  {
    Heap = (_TP_TIMER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x100000) | 8, 0x168uLL);
    v9 = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 22) = retaddr;
      result = TppInitializeTimer(
                 (__int64)Heap,
                 0,
                 v5,
                 (__int64)CallbackEnviron,
                 (__int64)TppTimerpCleanupGroupMemberVFuncs,
                 (__int64)&TppTimerpTaskVFuncs);
      if ( result >= 0 )
      {
        *((_QWORD *)v9 + 10) = Callback;
        *v7 = v9;
      }
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
