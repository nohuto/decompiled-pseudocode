/*
 * XREFs of ViCheckAdapterBuffers @ 0x14076B6FC
 * Callers:
 *     VfMapTransfer @ 0x14076A6D0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14076A890 (VfMapTransferEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViCheckTag @ 0x14076B9D0 (ViCheckTag.c)
 */

unsigned __int64 __fastcall ViCheckAdapterBuffers(__int64 a1)
{
  unsigned __int64 result; // rax
  __int16 v2; // bx
  _QWORD *v3; // rdi
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // al
  _QWORD *v6; // r10
  KIRQL v7; // bp
  size_t v8; // rdx
  __int16 v9; // r9
  unsigned __int64 v10; // r8
  _QWORD *v11; // r10
  _QWORD *v12; // r14
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = 0;
  v3 = (_QWORD *)(a1 + 80);
  if ( (_QWORD *)*v3 != v3 )
  {
    v4 = (KSPIN_LOCK *)(a1 + 96);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v6 = (_QWORD *)*v3;
    v7 = v5;
    while ( 1 )
    {
      v11 = v6 - 6;
      v12 = v11 + 6;
      if ( v3 == v11 + 6 )
        break;
      v8 = *((unsigned int *)v11 + 2);
      v9 = v2 | 1;
      v10 = v11[3] - v11[2];
      if ( v10 < 8 )
        v9 = v2;
      v2 = v9 | 2;
      if ( v8 + v10 + 8 > *((unsigned int *)v11 + 1) )
        v2 = v9;
      ViCheckTag(v11[3], v8);
      v6 = (_QWORD *)*v12;
    }
    KxReleaseSpinLock(v4);
    result = v7;
    __writecr8(v7);
  }
  return result;
}
