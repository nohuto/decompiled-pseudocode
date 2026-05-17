/*
 * XREFs of TpReleaseWait @ 0x180011BA0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180012A70 (RtlDeregisterWaitEx.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180013070 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x180081420 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     TppWaitpValidateWait @ 0x18000F748 (TppWaitpValidateWait.c)
 *     TppCancelWait @ 0x18000FF54 (TppCancelWait.c)
 *     TppCleanupGroupMemberRelease @ 0x1800107A8 (TppCleanupGroupMemberRelease.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TpReleaseWait(__int64 a1)
{
  signed __int32 v2; // eax
  __int64 v3; // rbx
  int v4; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = TppWaitpValidateWait(a1, 1LL, 0LL);
  if ( v2 )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 240);
      TppCancelWait(a1, v3 + 112, 2, &v7);
      ++*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive(a1 + 240);
      v4 = 1 - v7;
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, v7 - 1);
      if ( v2 == v4 )
        LOBYTE(v2) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return v2;
}
