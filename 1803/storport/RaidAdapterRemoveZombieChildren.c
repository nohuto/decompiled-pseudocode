/*
 * XREFs of RaidAdapterRemoveZombieChildren @ 0x1C0027468
 * Callers:
 *     RaidAdapterDeleteChildren @ 0x1C0025CD0 (RaidAdapterDeleteChildren.c)
 *     RaidAdapterMarkChildrenMissing @ 0x1C0026970 (RaidAdapterMarkChildrenMissing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidAdapterRemoveZombieChildren(__int64 a1, __int64 (__fastcall *a2)(_QWORD *))
{
  _QWORD **v3; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rsi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = (_QWORD **)(a1 + 200);
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
    v5 = *v3;
    if ( *v3 == v3 )
    {
      v7 = 0LL;
    }
    else
    {
      if ( (_QWORD **)v5[1] != v3 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
        __fastfail(3u);
      *v3 = v6;
      v7 = v5 - 6;
      v6[1] = v3;
      --*(_DWORD *)(a1 + 216);
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
