/*
 * XREFs of RtlpWakeSRWLock @ 0x180075F18
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextFree @ 0x18003E180 (RtlpHpVsContextFree.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180040530 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpLfhSlotAllocate @ 0x180042C90 (RtlpHpLfhSlotAllocate.c)
 *     TpPostTask @ 0x180046308 (TpPostTask.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlpOptimizeSRWLockList @ 0x180075EC0 (RtlpOptimizeSRWLockList.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x1800E66A0 (RtlConvertSRWLockExclusiveToShared.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x1800A0E90 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpWakeSRWLock(volatile signed __int64 *a1, signed __int64 a2, char a3)
{
  _QWORD *v4; // r10
  __int64 v5; // r8
  __int64 result; // rax
  bool v7; // zf
  __int64 v8; // rbx
  _QWORD *v9; // rax

  while ( a3 || (a2 & 1) == 0 )
  {
LABEL_3:
    v4 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v5 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
    if ( !v5 )
    {
      do
      {
        v9 = v4;
        v4 = (_QWORD *)*v4;
        v4[2] = v9;
        v5 = v4[1];
      }
      while ( !v5 );
      if ( v4 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v5;
    }
    result = *(unsigned int *)(v5 + 36);
    if ( (result & 1) != 0 )
    {
      if ( a3 )
      {
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        return result;
      }
      result = *(_QWORD *)(v5 + 16);
      if ( result )
      {
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = result;
        *(_QWORD *)(v5 + 16) = 0LL;
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_8:
          v8 = *(_QWORD *)(v5 + 16);
          _interlockedbittestandset((volatile signed __int32 *)(v5 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v5 + 36), 1u) )
            result = ZwAlertThreadByThreadId(*(_QWORD *)(v5 + 24));
          v5 = v8;
        }
        while ( v8 );
        return result;
      }
    }
    result = _InterlockedCompareExchange64(a1, a3 != 0 ? 0x11 : 0, a2);
    v7 = a2 == result;
    a2 = result;
    if ( v7 )
      goto LABEL_8;
  }
  while ( 1 )
  {
    result = _InterlockedCompareExchange64(a1, a2 - 4, a2);
    v7 = a2 == result;
    a2 = result;
    if ( v7 )
      return result;
    if ( (result & 1) == 0 )
      goto LABEL_3;
  }
}
