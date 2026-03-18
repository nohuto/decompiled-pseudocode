/*
 * XREFs of IopDeleteIoCompletionInternal @ 0x1400DB35C
 * Callers:
 *     IopDeleteIoCompletion @ 0x1405154A0 (IopDeleteIoCompletion.c)
 *     IopCloseIoCompletion @ 0x1405154C0 (IopCloseIoCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeRundownQueueEx @ 0x1400DB4A4 (KeRundownQueueEx.c)
 *     IopFreeWaitCompletionPacket @ 0x1400DDB50 (IopFreeWaitCompletionPacket.c)
 *     IopFreeCompletionListPackets @ 0x1405166EC (IopFreeCompletionListPackets.c)
 */

__int64 __fastcall IopDeleteIoCompletionInternal(KSPIN_LOCK *a1, __int64 a2)
{
  char v2; // si
  __int64 result; // rax
  PVOID *v5; // rbx
  _QWORD *v6; // rax
  PVOID *v7; // rcx
  PVOID *v8; // rax
  PVOID **v9; // rdx
  PVOID *v10; // rax
  PVOID Object; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_Object; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v2 = a2;
  if ( (_BYTE)a2 )
  {
    KeAcquireInStackQueuedSpinLock(a1 + 8, &LockHandle);
    *((_BYTE *)a1 + 72) = 1;
  }
  LOBYTE(a2) = v2 == 0;
  result = KeRundownQueueEx(a1, a2);
  v5 = (PVOID *)result;
  if ( result )
  {
    v6 = *(_QWORD **)result;
    if ( (PVOID *)v6[1] != v5 )
      __fastfail(3u);
    Object = v6;
    p_Object = v5;
    v6[1] = &Object;
    *v5 = &Object;
    v5 = (PVOID *)Object;
    if ( Object != &Object )
    {
      do
      {
        v7 = v5;
        v5 = (PVOID *)*v5;
        if ( *((_BYTE *)v7 + 16) == 2 )
        {
          v8 = (PVOID *)*v7;
          if ( *((PVOID **)*v7 + 1) != v7 || (v9 = (PVOID **)v7[1], *v9 != v7) )
            __fastfail(3u);
          *v9 = v8;
          v8[1] = v9;
          IopFreeWaitCompletionPacket(v7, a1);
        }
      }
      while ( v5 != &Object );
      v5 = (PVOID *)Object;
    }
    result = (__int64)&Object;
    if ( v5 == &Object )
    {
      v5 = 0LL;
    }
    else
    {
      v10 = p_Object;
      if ( v5[1] != &Object || *p_Object != &Object )
        __fastfail(3u);
      *p_Object = v5;
      v5[1] = v10;
      p_Object = &Object;
      result = (__int64)&Object;
      Object = &Object;
    }
  }
  if ( v2 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  if ( v5 )
  {
    *(_QWORD *)v5[1] = 0LL;
    return IopFreeCompletionListPackets(v5);
  }
  return result;
}
