/*
 * XREFs of RaidAdapterRemoveNormalChildren @ 0x1C002CD74
 * Callers:
 *     RaidAdapterDeleteChildren @ 0x1C002C060 (RaidAdapterDeleteChildren.c)
 *     RaidAdapterMarkChildrenMissing @ 0x1C002C9A4 (RaidAdapterMarkChildrenMissing.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C000629C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C000648C (RaidAdapterAcquireInterruptLock.c)
 *     StorRemoveDictionary @ 0x1C0014848 (StorRemoveDictionary.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidAdapterRemoveNormalChildren(__int64 a1, __int64 (__fastcall *a2)(__int64 *))
{
  __int64 **v3; // rdi
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rbp
  KIRQL v8; // bl
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = (__int64 **)(a1 + 120);
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
    if ( *v3 == (__int64 *)v3 )
    {
      v7 = 0LL;
    }
    else
    {
      v5 = *v3;
      v6 = **v3;
      if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v6 + 8) != v5 )
        __fastfail(3u);
      *v3 = (__int64 *)v6;
      v7 = v5 - 6;
      *(_QWORD *)(v6 + 8) = v3;
      --*(_DWORD *)(a1 + 136);
      v8 = RaidAdapterAcquireInterruptLock(a1);
      StorRemoveDictionary(
        (_DWORD *)(a1 + 144),
        (unsigned __int8)BYTE2(*((_DWORD *)v7 + 22)) | ((((unsigned __int64)(unsigned __int8)*((_DWORD *)v7 + 22) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v7 + 22))) << 8));
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
