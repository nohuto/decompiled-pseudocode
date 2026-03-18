/*
 * XREFs of IopDequeueIrpFromFileObject @ 0x14013FE58
 * Callers:
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopDropIrp @ 0x14013FD64 (IopDropIrp.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall IopDequeueIrpFromFileObject(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // al
  _QWORD *v5; // rdx
  KIRQL v6; // si
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 result; // rax

  v2 = (KSPIN_LOCK *)(a2 + 184);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 184));
  v5 = (_QWORD *)(a1 + 32);
  v6 = v4;
  v7 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v7 + 8) != a1 + 32 || (v8 = *(_QWORD **)(a1 + 40), (_QWORD *)*v8 != v5) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *v5 = v5;
  ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 16) & 0xFFFF5FFF | 0x8000;
  KxReleaseSpinLock(v2);
  result = v6;
  __writecr8(v6);
  return result;
}
