/*
 * XREFs of sub_180013D14 @ 0x180013D14
 * Callers:
 *     TpAllocIoCompletion @ 0x180010340 (TpAllocIoCompletion.c)
 *     sub_18001425C @ 0x18001425C (sub_18001425C.c)
 *     TpAllocWork @ 0x1800147E0 (TpAllocWork.c)
 *     TpSimpleTryPost @ 0x18007DF90 (TpSimpleTryPost.c)
 *     sub_18007F460 @ 0x18007F460 (sub_18007F460.c)
 *     TpAllocJobNotification @ 0x180081010 (TpAllocJobNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_180013D14(__int64 a1)
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
