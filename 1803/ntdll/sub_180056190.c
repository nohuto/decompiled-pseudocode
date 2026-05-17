/*
 * XREFs of sub_180056190 @ 0x180056190
 * Callers:
 *     TpWaitForJobNotification @ 0x1800560F0 (TpWaitForJobNotification.c)
 *     TpReleaseJobNotification @ 0x180056130 (TpReleaseJobNotification.c)
 *     sub_1801080A0 @ 0x1801080A0 (sub_1801080A0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     ZwQueryInformationJobObject @ 0x18009D2F0 (ZwQueryInformationJobObject.c)
 *     ZwSetInformationJobObject @ 0x18009DC90 (ZwSetInformationJobObject.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_18010861C @ 0x18010861C (sub_18010861C.c)
 */

void __fastcall sub_180056190(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  volatile signed __int64 *v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // rax
  signed __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 272) )
  {
    v5 = (volatile signed __int64 *)(a1 + 288);
    RtlAcquireSRWLockExclusive(a1 + 288, a2, a3, a4);
    v6 = *(_QWORD *)(a1 + 272);
    if ( v6 )
    {
      v11[0] = 0LL;
      v11[1] = 0LL;
      v7 = ZwSetInformationJobObject(v6, 7LL, v11, 16LL);
      if ( v7 < 0 || (v7 = ZwQueryInformationJobObject(*(_QWORD *)(a1 + 272), 17LL, &v12), v7 < 0) )
      {
        sub_18010861C((unsigned int)v7, *(_QWORD *)(a1 + 272), 0LL);
      }
      else
      {
        v8 = (-2LL * v12) | 1;
        v12 = v8;
        v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 280), v8);
        *(_QWORD *)(a1 + 272) = 0LL;
        v10 = v8 + v9;
        RtlReleaseSRWLockExclusive(v5);
        if ( v10 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF) == 1 )
          (**(void (***)(void))(a1 + 80))();
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(v5);
    }
  }
}
