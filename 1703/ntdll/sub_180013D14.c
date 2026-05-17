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

__int64 __fastcall sub_180013D14(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rdx

  v2 = a1[2];
  RtlAcquireSRWLockExclusive(v2 + 8);
  v3 = a1 + 5;
  v4 = *(_QWORD **)(v2 + 24);
  if ( *v4 != v2 + 16 )
    __fastfail(3u);
  *v3 = v2 + 16;
  a1[6] = v4;
  *v4 = v3;
  *(_QWORD *)(v2 + 24) = v3;
  return RtlReleaseSRWLockExclusive(v2 + 8);
}
