/*
 * XREFs of TppCleanupGroupAddMember @ 0x18000A1B0
 * Callers:
 *     TpAllocWork @ 0x18000A070 (TpAllocWork.c)
 *     TpAllocIoCompletion @ 0x18000A960 (TpAllocIoCompletion.c)
 *     TppInitializeTimer @ 0x18000C73C (TppInitializeTimer.c)
 *     TppAllocAlpcCompletion @ 0x180013B30 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180014020 (TpAllocJobNotification.c)
 *     TpSimpleTryPost @ 0x18007C640 (TpSimpleTryPost.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall TppCleanupGroupAddMember(_QWORD *a1)
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
