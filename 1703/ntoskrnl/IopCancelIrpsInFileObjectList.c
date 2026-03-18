/*
 * XREFs of IopCancelIrpsInFileObjectList @ 0x140018980
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x1401F520C (IopRevokeFileObjectForProcess.c)
 *     NtCancelIoFile @ 0x140433004 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x140433178 (NtCancelIoFileEx.c)
 *     IopCleanupProcessResources @ 0x140433288 (IopCleanupProcessResources.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     IopCheckListForCancelableIrp @ 0x140018B50 (IopCheckListForCancelableIrp.c)
 *     IoCancelIrp @ 0x140018D10 (IoCancelIrp.c)
 *     IopInterlockedAdd @ 0x140032364 (IopInterlockedAdd.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 */

__int64 __fastcall IopCancelIrpsInFileObjectList(__int64 a1, int a2, int a3, int a4, char a5, char a6)
{
  KSPIN_LOCK *v6; // rdi
  int v8; // r13d
  int v9; // ebx
  __int64 Flink; // rsi
  KIRQL v11; // r14
  _QWORD *v12; // r15
  __int64 v13; // r12
  char v15; // al
  PIRP v16; // rbx
  PIRP Irp; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+40h] [rbp-58h]
  unsigned int v20; // [rsp+A0h] [rbp+8h]

  Interval.QuadPart = -10000LL;
  v6 = (KSPIN_LOCK *)(a1 + 184);
  Irp = 0LL;
  v20 = 0;
  v19 = 0LL;
  v8 = 1;
  v9 = a4;
  Flink = 0LL;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  if ( a6 )
    *(_DWORD *)(a1 + 80) |= 0x400u;
  v12 = (_QWORD *)(a1 + 192);
  while ( 1 )
  {
    v13 = Flink;
    if ( (_QWORD *)*v12 == v12 )
      break;
    v15 = IopCheckListForCancelableIrp((int)a1 + 192, a2, a3, v9, Flink, (__int64)&Irp);
    v16 = Irp;
    Flink = 0LL;
    if ( !Irp )
    {
      if ( !a5 )
        break;
      if ( v15 )
      {
        if ( !v13 )
          break;
      }
      else
      {
        v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 88LL);
        KxReleaseSpinLock(v6);
        __writecr8(v11);
        KeDelayExecutionThread(0, 0, &Interval);
        if ( v8 < 100 )
        {
          v8 *= 2;
          Interval.QuadPart = -10000 * v8;
        }
        v11 = KeAcquireSpinLockRaiseToDpc(v6);
      }
      goto LABEL_20;
    }
    if ( !Irp->Cancel )
    {
      v20 = 1;
      Irp->Cancel = 1;
      KxReleaseSpinLock(v6);
      __writecr8(v11);
      IoCancelIrp(v16);
      v11 = KeAcquireSpinLockRaiseToDpc(v6);
    }
    if ( (v16->Flags & 0x2000) != 0 )
      Flink = (__int64)v16->ThreadListEntry.Flink;
    if ( !(unsigned int)IopInterlockedAdd(&v16->Overlay, 0xFFFFFFFFLL) )
      IoFreeIrp(v16);
    v9 = a4;
    if ( (_QWORD *)Flink == v12 )
    {
      if ( !a5 )
        break;
      Flink = 0LL;
LABEL_20:
      v9 = a4;
    }
  }
  KxReleaseSpinLock(v6);
  __writecr8(v11);
  return v20;
}
