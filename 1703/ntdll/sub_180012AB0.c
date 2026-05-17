/*
 * XREFs of sub_180012AB0 @ 0x180012AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013664 @ 0x180013664 (sub_180013664.c)
 *     TpSetWaitEx @ 0x180017300 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwGetCompleteWnfStateSubscription @ 0x1800A6FF0 (ZwGetCompleteWnfStateSubscription.c)
 *     sub_1800DF250 @ 0x1800DF250 (sub_1800DF250.c)
 */

__int64 __fastcall sub_180012AB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebp
  unsigned int v6; // edi
  __int64 Heap; // rbx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+38h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = 0LL;
  v11[0] = -50000000LL;
  v10 = 0LL;
  v5 = 0;
  v6 = 0;
  Heap = 0LL;
  if ( !qword_18015C008 )
    return result;
  TpSetWaitEx(a3, a2, 0LL, 0LL);
  while ( 1 )
  {
    if ( !Heap )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 4144LL);
      if ( !Heap )
        break;
    }
    result = ((__int64 (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD, __int64, int))ZwGetCompleteWnfStateSubscription)(
               v4,
               &v10,
               v5,
               v6,
               Heap,
               4144);
    if ( (int)result < 0 )
      goto LABEL_10;
    v6 = sub_180013664(Heap, 0LL);
    if ( v6 == 259 )
    {
      v4 = 0LL;
      v5 = 0;
      v10 = 0LL;
      v6 = 0;
LABEL_16:
      Heap = 0LL;
    }
    else
    {
      v4 = Heap + 8;
      v10 = *(_QWORD *)Heap;
      v5 = *(_DWORD *)(Heap + 24);
      if ( v6 == -1073741267 )
      {
        sub_1800DF250();
        goto LABEL_16;
      }
    }
  }
  result = 3221225495LL;
LABEL_10:
  if ( (_DWORD)result != -2147483622 )
    result = TpSetWaitEx(a3, a2, v11, 0LL);
  if ( Heap )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
  return result;
}
