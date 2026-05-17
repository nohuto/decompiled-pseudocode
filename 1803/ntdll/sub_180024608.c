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

__int64 __fastcall sub_180024608(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdi
  void *v10; // rdx
  __int64 *v11; // rcx
  volatile signed __int32 *v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD v16[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    sub_180075F7C(a1);
    v12 = (volatile signed __int32 *)a1[2];
    if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050, (unsigned __int64)v12);
  }
  v2 = (volatile signed __int32 *)a1[12];
  if ( v2 != (volatile signed __int32 *)-1LL )
    RtlReleaseActivationContext(v2);
  v3 = a1[18];
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(v3 + 72);
    v4 = a1 + 19;
    v5 = a1[19];
    v6 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v5 + 8) != a1 + 19 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[20] = a1 + 19;
    *v4 = v4;
    RtlReleaseSRWLockExclusive(a1[18] + 72LL);
    v7 = (volatile signed __int32 *)a1[18];
    if ( v7 == (volatile signed __int32 *)qword_18015D3B8 )
    {
      v10 = &unk_18015D3B0;
      v11 = &qword_18015D3B8;
    }
    else
    {
      if ( v7 != (volatile signed __int32 *)qword_18015D3A8 )
      {
        result = (unsigned int)_InterlockedExchangeAdd(v7, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = sub_18007E8A0(v7);
        goto LABEL_13;
      }
      v10 = &unk_18015D3A0;
      v11 = &qword_18015D3A8;
    }
    result = sub_180047198(v11, v10);
    goto LABEL_13;
  }
  RtlAcquireSRWLockExclusive(&unk_180160900);
  v13 = a1 + 19;
  v14 = a1[19];
  v15 = (_QWORD *)a1[20];
  if ( *(_QWORD **)(v14 + 8) != a1 + 19 || (_QWORD *)*v15 != v13 )
    __fastfail(3u);
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  a1[20] = a1 + 19;
  *v13 = v13;
  result = RtlReleaseSRWLockExclusive(&unk_180160900);
LABEL_13:
  v9 = a1[4];
  if ( v9 )
  {
    memset(v16, 0, 0xF8uLL);
    v16[11] = v9;
    v16[12] = a1[11];
    sub_18007B8F8(v16);
    _guard_dispatch_icall_fptr();
    return sub_180027040(v16);
  }
  return result;
}
