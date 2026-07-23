/*
 * XREFs of sub_180024608 @ 0x180024608
 * Callers:
 *     sub_1800247C8 @ 0x1800247C8 (sub_1800247C8.c)
 *     sub_180056280 @ 0x180056280 (sub_180056280.c)
 *     TpSimpleTryPost @ 0x1800562E0 (TpSimpleTryPost.c)
 *     TpAllocJobNotification @ 0x1800565C0 (TpAllocJobNotification.c)
 *     sub_180056820 @ 0x180056820 (sub_180056820.c)
 *     sub_180056B80 @ 0x180056B80 (sub_180056B80.c)
 *     sub_180057320 @ 0x180057320 (sub_180057320.c)
 *     TpAllocIoCompletion @ 0x180057380 (TpAllocIoCompletion.c)
 *     sub_180058CA0 @ 0x180058CA0 (sub_180058CA0.c)
 *     sub_180059040 @ 0x180059040 (sub_180059040.c)
 *     sub_18007CAB0 @ 0x18007CAB0 (sub_18007CAB0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseActivationContext @ 0x180024580 (RtlReleaseActivationContext.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180047198 @ 0x180047198 (sub_180047198.c)
 *     sub_180075F7C @ 0x180075F7C (sub_180075F7C.c)
 *     sub_18007B8F8 @ 0x18007B8F8 (sub_18007B8F8.c)
 *     sub_18007E8A0 @ 0x18007E8A0 (sub_18007E8A0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __fastcall sub_180024608(_QWORD *a1)
{
  _ACTIVATION_CONTEXT *v2; // rcx
  _RTL_SRWLOCK *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  PVOID v7; // rcx
  __int64 v8; // rdi
  _RTL_SRWLOCK *v9; // rdx
  __int64 *v10; // rcx
  void *v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rdx
  _QWORD v15[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    sub_180075F7C(a1);
    v11 = (void *)a1[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050, v11);
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
    v7 = (PVOID)a1[18];
    if ( v7 == qword_18015D3B8 )
    {
      v9 = &stru_18015D3B0;
      v10 = (__int64 *)&qword_18015D3B8;
    }
    else
    {
      if ( v7 != (PVOID)qword_18015D3A8 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
          sub_18007E8A0(v7);
        goto LABEL_13;
      }
      v9 = (_RTL_SRWLOCK *)&unk_18015D3A0;
      v10 = &qword_18015D3A8;
    }
    sub_180047198(v10, v9);
    goto LABEL_13;
  }
  RtlAcquireSRWLockExclusive(&stru_180160900);
  v12 = a1 + 19;
  v13 = a1[19];
  v14 = (_QWORD *)a1[20];
  if ( *(_QWORD **)(v13 + 8) != a1 + 19 || (_QWORD *)*v14 != v12 )
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  a1[20] = a1 + 19;
  *v12 = v12;
  RtlReleaseSRWLockExclusive(&stru_180160900);
LABEL_13:
  v8 = a1[4];
  if ( v8 )
  {
    memset(v15, 0, 0xF8uLL);
    v15[11] = v8;
    v15[12] = a1[11];
    sub_18007B8F8(v15);
    _guard_dispatch_icall_fptr();
    sub_180027040(v15);
  }
}
