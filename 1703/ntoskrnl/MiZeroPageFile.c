/*
 * XREFs of MiZeroPageFile @ 0x14020D160
 * Callers:
 *     MiZeroAllPageFiles @ 0x1404195D8 (MiZeroAllPageFiles.c)
 * Callees:
 *     MmZeroPageWrite @ 0x14002FF48 (MmZeroPageWrite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiZeroPageFile(_QWORD *a1)
{
  _QWORD *v1; // r14
  struct _KEVENT *v2; // r15
  unsigned int v3; // edi
  int v4; // ebx
  unsigned int v5; // ebp
  __int64 v6; // r8
  unsigned int v7; // esi
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+10h] BYREF

  v1 = (_QWORD *)a1[4];
  v2 = (struct _KEVENT *)a1[5];
  ExFreePoolWithTag(a1, 0);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  KeAcquireInStackQueuedSpinLock(v1 + 29, &LockHandle);
  v6 = *v1;
  v7 = 1;
  if ( *v1 > 1uLL )
  {
    v8 = 1LL;
    do
    {
      if ( _bittest64(*(const signed __int64 **)(v1[14] + 16LL), v8) )
      {
        if ( v3 )
          v4 = 1;
      }
      else
      {
        if ( !v3 )
          v5 = v7;
        if ( ++v3 == 16 || v8 == v6 - 1 )
          v4 = 1;
      }
      if ( v4 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v9 = v1[7];
        v13 = (unsigned __int64)v5 << 12;
        v12 = (unsigned __int64)v3 << 12;
        MmZeroPageWrite(v9, (__int64)&v13, (__int64 *)&v12, 0);
        v4 = 0;
        KeAcquireInStackQueuedSpinLock(v1 + 29, &LockHandle);
        v3 = 0;
      }
      v6 = *v1;
      v8 = ++v7;
    }
    while ( (unsigned __int64)v7 < *v1 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return KeSetEvent(v2, 0, 0);
}
