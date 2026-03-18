/*
 * XREFs of EtwpCovSampCaptureCancelApcs @ 0x1402B4A98
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x1402B4C98 (EtwpCovSampCaptureContextStop.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeRemoveQueueApc @ 0x1400C6B54 (KeRemoveQueueApc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1402B52D0 (EtwpCovSampCaptureReleaseToLookaside.c)
 */

LONG_PTR __fastcall EtwpCovSampCaptureCancelApcs(__int64 a1)
{
  LONG_PTR result; // rax
  __int64 *v2; // r14
  __int64 *v3; // rdi
  KSPIN_LOCK *v4; // r15
  void *v5; // rsi
  KIRQL v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx

  result = *(unsigned int *)(a1 + 344);
  if ( *(_DWORD *)(a1 + 348) != (_DWORD)result )
  {
    v2 = (__int64 *)(a1 + 304);
    v3 = *(__int64 **)(a1 + 304);
    if ( v3 != (__int64 *)(a1 + 304) )
    {
      v4 = (KSPIN_LOCK *)(a1 + 264);
      do
      {
        v5 = 0LL;
        v6 = KeAcquireSpinLockRaiseToDpc(v4);
        if ( *((_BYTE *)v3 + 114) )
        {
          v5 = (void *)v3[5];
          if ( v5 )
            ObfReferenceObjectWithTag((PVOID)v3[5], 0x746C6644u);
        }
        KxReleaseSpinLock(v4);
        result = v6;
        __writecr8(v6);
        if ( v5 )
        {
          if ( KeRemoveQueueApc((__int64)(v3 + 4), v7) )
          {
            v8 = qword_1403A1CE8;
            memset(v3 + 4, 0, 0x58uLL);
            v9 = v3[3];
            *((_DWORD *)v3 + 30) = 0;
            EtwpCovSampCaptureReleaseToLookaside(v8, v9, v3 - 3);
          }
          result = ObfDereferenceObjectWithTag(v5, 0x746C6644u);
        }
        v3 = (__int64 *)*v3;
      }
      while ( v3 != v2 );
    }
  }
  return result;
}
