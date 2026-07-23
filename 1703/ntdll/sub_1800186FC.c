/*
 * XREFs of sub_1800186FC @ 0x1800186FC
 * Callers:
 *     TpAllocIoCompletion @ 0x180010340 (TpAllocIoCompletion.c)
 *     sub_1800179EC @ 0x1800179EC (sub_1800179EC.c)
 *     sub_1800186C0 @ 0x1800186C0 (sub_1800186C0.c)
 *     sub_180019398 @ 0x180019398 (sub_180019398.c)
 *     TpSimpleTryPost @ 0x18007DF90 (TpSimpleTryPost.c)
 *     sub_18007F380 @ 0x18007F380 (sub_18007F380.c)
 *     sub_18007F460 @ 0x18007F460 (sub_18007F460.c)
 *     TpAllocJobNotification @ 0x180081010 (TpAllocJobNotification.c)
 *     sub_180081250 @ 0x180081250 (sub_180081250.c)
 *     sub_180081720 @ 0x180081720 (sub_180081720.c)
 *     sub_1800841B0 @ 0x1800841B0 (sub_1800841B0.c)
 * Callees:
 *     sub_1800156B0 @ 0x1800156B0 (sub_1800156B0.c)
 *     RtlReleaseActivationContext @ 0x1800188A0 (RtlReleaseActivationContext.c)
 *     sub_180018928 @ 0x180018928 (sub_180018928.c)
 *     sub_180019594 @ 0x180019594 (sub_180019594.c)
 *     sub_1800196A4 @ 0x1800196A4 (sub_1800196A4.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180082A08 @ 0x180082A08 (sub_180082A08.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __fastcall sub_1800186FC(_QWORD *a1)
{
  _ACTIVATION_CONTEXT *v2; // rcx
  _RTL_SRWLOCK *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  PVOID v8; // rcx
  _RTL_SRWLOCK *v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rdi
  void *v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD v16[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    sub_180019594(a1);
    v12 = (void *)a1[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000, v12);
  }
  v2 = (_ACTIVATION_CONTEXT *)a1[12];
  if ( v2 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlReleaseActivationContext(v2);
  v3 = (_RTL_SRWLOCK *)a1[18];
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(v3 + 9);
    v4 = a1 + 19;
    v5 = a1[19];
    v6 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v5 + 8) != a1 + 19 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[20] = a1 + 19;
    *v4 = v4;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1[18] + 72LL));
    v8 = (PVOID)a1[18];
    if ( v8 == qword_18015C378 )
    {
      v9 = &stru_18015C380;
      v10 = (__int64 *)&qword_18015C378;
LABEL_11:
      sub_180018928(v10, v9, v7);
      goto LABEL_12;
    }
    if ( v8 == (PVOID)qword_18015C368 )
    {
      v9 = (_RTL_SRWLOCK *)&unk_18015C370;
      v10 = &qword_18015C368;
      goto LABEL_11;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
      sub_180082A08(v8);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&stru_18015C7D0);
    v13 = a1 + 19;
    v14 = a1[19];
    v15 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v14 + 8) != a1 + 19 || (_QWORD *)*v15 != v13 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    a1[20] = a1 + 19;
    *v13 = v13;
    RtlReleaseSRWLockExclusive(&stru_18015C7D0);
  }
LABEL_12:
  v11 = a1[4];
  if ( v11 )
  {
    memset(v16, 0, 0xF8uLL);
    v16[11] = v11;
    v16[12] = a1[11];
    sub_1800196A4(v16);
    _guard_dispatch_icall_fptr();
    sub_1800156B0((unsigned int *)v16);
  }
}
