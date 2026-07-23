/*
 * XREFs of sub_180080F20 @ 0x180080F20
 * Callers:
 *     TpWaitForJobNotification @ 0x180080E80 (TpWaitForJobNotification.c)
 *     TpReleaseJobNotification @ 0x180080EC0 (TpReleaseJobNotification.c)
 *     sub_1801052C0 @ 0x1801052C0 (sub_1801052C0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwQueryInformationJobObject @ 0x1800A7A90 (ZwQueryInformationJobObject.c)
 *     ZwSetInformationJobObject @ 0x1800A8430 (ZwSetInformationJobObject.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_18010580C @ 0x18010580C (sub_18010580C.c)
 */

void __fastcall sub_180080F20(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rsi
  void *v3; // rcx
  NTSTATUS v4; // eax
  unsigned __int64 v5; // rax
  signed __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  _QWORD JobObjectInformation[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 272) )
  {
    v2 = (_RTL_SRWLOCK *)(a1 + 288);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 288));
    v3 = *(void **)(a1 + 272);
    if ( v3 )
    {
      JobObjectInformation[0] = 0LL;
      JobObjectInformation[1] = 0LL;
      v4 = ZwSetInformationJobObject(v3, JobObjectAssociateCompletionPortInformation, JobObjectInformation, 0x10u);
      if ( v4 < 0
        || (v4 = ZwQueryInformationJobObject(*(HANDLE *)(a1 + 272), JobObjectCompletionCounter, &v9, 8u, 0LL), v4 < 0) )
      {
        sub_18010580C((unsigned int)v4, *(_QWORD *)(a1 + 272), 0LL);
      }
      else
      {
        v5 = (-2LL * v9) | 1;
        v9 = v5;
        v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 280), v5);
        *(_QWORD *)(a1 + 272) = 0LL;
        v7 = v5 + v6;
        RtlReleaseSRWLockExclusive(v2);
        if ( v7 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF) == 1 )
          (**(void (***)(void))(a1 + 80))();
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(v2);
    }
  }
}
