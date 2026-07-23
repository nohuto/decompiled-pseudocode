/*
 * XREFs of sub_1800570C8 @ 0x1800570C8
 * Callers:
 *     TpSimpleTryPost @ 0x1800562E0 (TpSimpleTryPost.c)
 *     TpAllocJobNotification @ 0x1800565C0 (TpAllocJobNotification.c)
 *     sub_180056B80 @ 0x180056B80 (sub_180056B80.c)
 *     TpAllocWork @ 0x180056F90 (TpAllocWork.c)
 *     TpAllocIoCompletion @ 0x180057380 (TpAllocIoCompletion.c)
 *     sub_180058DCC @ 0x180058DCC (sub_180058DCC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_1800570C8(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rbx
  _RTL_SRWLOCK *v3; // rax
  _RTL_SRWLOCK **Ptr; // rdx

  v2 = *(_RTL_SRWLOCK **)(a1 + 16);
  RtlAcquireSRWLockExclusive(v2 + 1);
  v3 = (_RTL_SRWLOCK *)(a1 + 40);
  Ptr = (_RTL_SRWLOCK **)v2[3].Ptr;
  if ( *Ptr != &v2[2] )
    __fastfail(3u);
  v3->Ptr = &v2[2];
  *(_QWORD *)(a1 + 48) = Ptr;
  *Ptr = v3;
  v2[3].Ptr = v3;
  RtlReleaseSRWLockExclusive(v2 + 1);
}
