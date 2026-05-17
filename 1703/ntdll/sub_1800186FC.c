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

void __fastcall sub_1800186FC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  volatile signed __int32 *v9; // rcx
  void *v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rdx
  __int64 v16[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( *(_QWORD *)(a1 + 16) )
  {
    sub_180019594(a1);
    if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 16), 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)dword_18015C000);
  }
  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 != -1 )
    RtlReleaseActivationContext(v2);
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(v3 + 72);
    v4 = (_QWORD *)(a1 + 152);
    v5 = *(_QWORD *)(a1 + 152);
    v6 = *(_QWORD **)(a1 + 160);
    if ( *(_QWORD *)(v5 + 8) != a1 + 152 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *(_QWORD *)(a1 + 160) = a1 + 152;
    *v4 = v4;
    RtlReleaseSRWLockExclusive(*(_QWORD *)(a1 + 144) + 72LL);
    v9 = *(volatile signed __int32 **)(a1 + 144);
    if ( v9 == (volatile signed __int32 *)qword_18015C378 )
    {
      v10 = &unk_18015C380;
      v11 = &qword_18015C378;
LABEL_11:
      sub_180018928(v11, v10, v8);
      goto LABEL_12;
    }
    if ( v9 == (volatile signed __int32 *)qword_18015C368 )
    {
      v10 = &unk_18015C370;
      v11 = &qword_18015C368;
      goto LABEL_11;
    }
    if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
      sub_180082A08(v9, v7, v8);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&unk_18015C7D0);
    v13 = (_QWORD *)(a1 + 152);
    v14 = *(_QWORD *)(a1 + 152);
    v15 = *(_QWORD **)(a1 + 160);
    if ( *(_QWORD *)(v14 + 8) != a1 + 152 || (_QWORD *)*v15 != v13 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    *(_QWORD *)(a1 + 160) = a1 + 152;
    *v13 = v13;
    RtlReleaseSRWLockExclusive(&unk_18015C7D0);
  }
LABEL_12:
  v12 = *(_QWORD *)(a1 + 32);
  if ( v12 )
  {
    memset(v16, 0, 0xF8uLL);
    v16[11] = v12;
    v16[12] = *(_QWORD *)(a1 + 88);
    sub_1800196A4(v16);
    _guard_dispatch_icall_fptr();
    sub_1800156B0(v16);
  }
}
