/*
 * XREFs of RtlpHpHeapUnlock @ 0x18003886C
 * Callers:
 *     RtlUnlockHeap @ 0x18004A120 (RtlUnlockHeap.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180076728 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800F0D9C (RtlpUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpHpHeapUnlock(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    if ( a2 )
    {
      v4 = (_QWORD *)(a1 + 136);
      *(_DWORD *)(a1 + 64) = NtCurrentTeb()->ClientId.UniqueThread;
      *(_WORD *)(a1 + 62) = 1;
      *(_QWORD *)(a1 + 552) = 1LL;
      *(_QWORD *)(a1 + 360) = 1LL;
      v5 = 2LL;
      do
      {
        *v4 = 1LL;
        v4 += 13;
        --v5;
      }
      while ( v5 );
      *(_QWORD *)(a1 + 72) = 1LL;
    }
    if ( (*(_WORD *)(a1 + 62))-- == 1 )
    {
      *(_DWORD *)(a1 + 64) = 0;
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
        {
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 136));
          if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
          {
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
            if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
              RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 360));
          }
        }
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 552));
    }
  }
}
