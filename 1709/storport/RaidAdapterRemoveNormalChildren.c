/*
 * XREFs of RaidAdapterRemoveNormalChildren @ 0x1C002DCF4
 * Callers:
 *     RaidAdapterDeleteChildren @ 0x1C002CED0 (RaidAdapterDeleteChildren.c)
 *     RaidAdapterMarkChildrenMissing @ 0x1C002D924 (RaidAdapterMarkChildrenMissing.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00069A0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006A30 (RaidAdapterAcquireInterruptLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     StorRemoveDictionary @ 0x1C004744C (StorRemoveDictionary.c)
 */

__int64 __fastcall RaidAdapterRemoveNormalChildren(__int64 a1, __int64 (__fastcall *a2)(_DWORD *))
{
  __int64 v3; // rdi
  _DWORD *v5; // rsi
  __int64 v6; // rax
  _DWORD *v7; // r14
  KIRQL v8; // bl
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1 + 120;
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
    if ( *(_QWORD *)v3 == v3 )
    {
      v7 = 0LL;
    }
    else
    {
      v5 = *(_DWORD **)v3;
      if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v6 = *(_QWORD *)v5, *(_DWORD **)(*(_QWORD *)v5 + 8LL) != v5) )
        __fastfail(3u);
      *(_QWORD *)v3 = v6;
      v7 = v5 - 12;
      *(_QWORD *)(v6 + 8) = v3;
      --*(_DWORD *)(a1 + 136);
      v8 = RaidAdapterAcquireInterruptLock(a1);
      StorRemoveDictionary(
        a1 + 144,
        (unsigned __int8)BYTE2(v5[10]) | (unsigned __int64)(((unsigned __int8)BYTE1(v5[10]) | ((unsigned __int8)v5[10] << 8)) << 8));
      RaidAdapterReleaseInterruptLock(a1, v8);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v7 )
      break;
    if ( a2 )
    {
      result = a2(v7);
      if ( (int)result < 0 )
        return result;
    }
  }
  return 0LL;
}
