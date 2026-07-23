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

void __fastcall TppCleanupGroupAddMember(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rbx
  _RTL_SRWLOCK *v3; // rax
  _RTL_SRWLOCK **Value; // rdx

  v2 = *(_RTL_SRWLOCK **)(a1 + 16);
  RtlAcquireSRWLockExclusive(v2 + 1);
  v3 = (_RTL_SRWLOCK *)(a1 + 40);
  Value = (_RTL_SRWLOCK **)v2[3].Value;
  if ( *Value != &v2[2] )
    __fastfail(3u);
  v3->Value = (unsigned __int64)&v2[2];
  *(_QWORD *)(a1 + 48) = Value;
  *Value = v3;
  v2[3].Value = (unsigned __int64)v3;
  RtlReleaseSRWLockExclusive(v2 + 1);
}
