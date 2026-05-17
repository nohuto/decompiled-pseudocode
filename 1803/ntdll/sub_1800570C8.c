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

signed __int64 __fastcall sub_1800570C8(_QWORD *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx

  v5 = a1[2];
  RtlAcquireSRWLockExclusive(v5 + 8, a2, a3, a4);
  v6 = a1 + 5;
  v7 = *(_QWORD **)(v5 + 24);
  if ( *v7 != v5 + 16 )
    __fastfail(3u);
  *v6 = v5 + 16;
  a1[6] = v7;
  *v7 = v6;
  *(_QWORD *)(v5 + 24) = v6;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 8));
}
