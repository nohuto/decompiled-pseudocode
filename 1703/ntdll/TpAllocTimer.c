/*
 * XREFs of TpAllocTimer @ 0x180013F90
 * Callers:
 *     RtlCreateTimer @ 0x180011110 (RtlCreateTimer.c)
 *     sub_180082ED0 @ 0x180082ED0 (sub_180082ED0.c)
 * Callees:
 *     sub_18001425C @ 0x18001425C (sub_18001425C.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

NTSTATUS __cdecl TpAllocTimer(
        PTP_TIMER *Timer,
        PTP_TIMER_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v4; // edi
  int v5; // ebp
  PTP_TIMER *v7; // r14
  _TP_TIMER *Heap; // rax
  _TP_TIMER *v9; // rbx
  NTSTATUS result; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (int)CallbackEnviron;
  v5 = (int)Context;
  v7 = Timer;
  if ( !Timer
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || (Timer = (PTP_TIMER *)NtCurrentPeb()->Ldr, *((_BYTE *)Timer + 72)) )
  {
    sub_1801058B8(Timer, Callback);
    return -1073741811;
  }
  else
  {
    Heap = (_TP_TIMER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 0x100000) | 8, 0x168uLL);
    v9 = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 22) = retaddr;
      result = sub_18001425C((_DWORD)Heap, 0, v5, v4, (__int64)off_180110230, (__int64)&off_1801101C0);
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
