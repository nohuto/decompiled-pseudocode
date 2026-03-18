/*
 * XREFs of ViCheckAdapterBuffers @ 0x14081A530
 * Callers:
 *     VfMapTransfer @ 0x140819510 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1408196D0 (VfMapTransferEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViCheckTag @ 0x14081A80C (ViCheckTag.c)
 */

_UNKNOWN **__fastcall ViCheckAdapterBuffers(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int16 v2; // bx
  _QWORD *v3; // rdi
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // bp
  __int64 v6; // r14
  size_t v7; // rdx
  __int16 v8; // r9
  unsigned __int64 v9; // r8
  _QWORD *v10; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = 0;
  v3 = (_QWORD *)(a1 + 80);
  if ( (_QWORD *)*v3 != v3 )
  {
    v4 = (KSPIN_LOCK *)(a1 + 96);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v6 = *v3 - 48LL;
    if ( v3 != (_QWORD *)*v3 )
    {
      do
      {
        v7 = *(unsigned int *)(v6 + 8);
        v8 = v2 | 1;
        v9 = *(_QWORD *)(v6 + 24) - *(_QWORD *)(v6 + 16);
        if ( v9 < 8 )
          v8 = v2;
        v2 = v8 | 2;
        if ( v7 + v9 + 8 > *(unsigned int *)(v6 + 4) )
          v2 = v8;
        ViCheckTag(*(_QWORD *)(v6 + 24), v7);
        v10 = *(_QWORD **)(v6 + 48);
        v6 = (__int64)(v10 - 6);
      }
      while ( v3 != v10 );
    }
    KxReleaseSpinLock(v4);
    result = (_UNKNOWN **)v5;
    __writecr8(v5);
  }
  return result;
}
