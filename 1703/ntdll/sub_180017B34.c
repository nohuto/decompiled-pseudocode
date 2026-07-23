/*
 * XREFs of sub_180017B34 @ 0x180017B34
 * Callers:
 *     TpAllocIoCompletion @ 0x180010340 (TpAllocIoCompletion.c)
 *     sub_1800179EC @ 0x1800179EC (sub_1800179EC.c)
 *     sub_18007F460 @ 0x18007F460 (sub_18007F460.c)
 *     TpAllocJobNotification @ 0x180081010 (TpAllocJobNotification.c)
 * Callees:
 *     RtlQueryInformationActivationContext @ 0x180017DF0 (RtlQueryInformationActivationContext.c)
 *     RtlAddRefActivationContext @ 0x1800184D0 (RtlAddRefActivationContext.c)
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 *     RtlReleaseActivationContext @ 0x1800188A0 (RtlReleaseActivationContext.c)
 *     sub_180018928 @ 0x180018928 (sub_180018928.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180082A08 @ 0x180082A08 (sub_180082A08.c)
 */

__int64 __fastcall sub_180017B34(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  volatile signed __int32 **v6; // rsi
  unsigned int v7; // ecx
  int v8; // r14d
  _ACTIVATION_CONTEXT *v9; // rcx
  NTSTATUS v10; // edi
  _RTL_SRWLOCK *v11; // rdx
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // rax
  __int64 **v15; // rcx
  _RTL_SRWLOCK *v16; // rcx
  volatile signed __int32 *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _ACTIVATION_CONTEXT *v21; // rcx
  PACTIVATION_CONTEXT ActivationContext; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h]

  ActivationContext = 0LL;
  v23 = 0LL;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = a5;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = a2;
  *(_DWORD *)(a1 + 168) = a4;
  v6 = (volatile signed __int32 **)(a1 + 144);
  if ( !a3 )
  {
    *v6 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    goto LABEL_30;
  }
  *v6 = *(volatile signed __int32 **)(a3 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 32);
  if ( *(_DWORD *)a3 <= 1u )
  {
LABEL_30:
    *(_DWORD *)(a1 + 192) = 1;
    goto LABEL_5;
  }
  v7 = *(_DWORD *)(a3 + 60);
  if ( v7 >= 3 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a1 + 192) = v7;
LABEL_5:
  v8 = a4 & 2;
  if ( (a4 & 2) != 0 && *v6 )
    return (unsigned int)-1073741811;
  *(_QWORD *)(a1 + 104) = NtCurrentTeb()->SubProcessTag;
  *(GUID *)(a1 + 112) = NtCurrentTeb()->ActivityId;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v9 = *(_ACTIVATION_CONTEXT **)(a1 + 96);
  if ( v9 )
  {
    if ( v9 != (_ACTIVATION_CONTEXT *)-1LL )
      RtlAddRefActivationContext(v9);
  }
  else
  {
    v10 = RtlQueryInformationActivationContext(
            1u,
            0LL,
            0LL,
            ActivationContextBasicInformation,
            &ActivationContext,
            0x10uLL,
            0LL);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( (v23 & 1) != 0 )
    {
      RtlReleaseActivationContext(ActivationContext);
      ActivationContext = (PACTIVATION_CONTEXT)-1LL;
    }
    *(_QWORD *)(a1 + 96) = ActivationContext;
  }
  if ( *v6 )
  {
    _InterlockedAdd(*v6, 1u);
LABEL_15:
    v10 = 0;
    if ( *v6 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)*v6 + 9);
      v13 = (__int64 *)(a1 + 152);
      v14 = (__int64)(*v6 + 20);
      v15 = (__int64 **)*((_QWORD *)*v6 + 11);
      if ( *v15 != (__int64 *)v14 )
        __fastfail(3u);
      *v13 = v14;
      *(_QWORD *)(a1 + 160) = v15;
      *v15 = v13;
      *(_QWORD *)(v14 + 8) = v13;
      v16 = (_RTL_SRWLOCK *)(*v6 + 18);
    }
    else
    {
      RtlAcquireSRWLockExclusive(&stru_18015C7D0);
      v18 = (_QWORD *)(a1 + 152);
      v19 = off_180155A08;
      if ( *off_180155A08 != (_UNKNOWN *)&off_180155A00 )
        __fastfail(3u);
      *v18 = &off_180155A00;
      *(_QWORD *)(a1 + 160) = v19;
      *v19 = v18;
      off_180155A08 = (_UNKNOWN **)(a1 + 152);
      v16 = &stru_18015C7D0;
    }
    RtlReleaseSRWLockExclusive(v16);
    v17 = *(volatile signed __int32 **)(a1 + 16);
    if ( v17 )
    {
      _InterlockedAdd(v17, 1u);
      v10 = 0;
    }
    goto LABEL_27;
  }
  if ( v8 )
  {
    v11 = (_RTL_SRWLOCK *)&unk_18015C370;
    v12 = &qword_18015C368;
  }
  else
  {
    v11 = &stru_18015C380;
    v12 = (__int64 *)&qword_18015C378;
  }
  v10 = sub_180018508(v12, v11, v6);
  if ( v10 >= 0 )
    goto LABEL_15;
LABEL_27:
  if ( v10 < 0 )
  {
    v21 = *(_ACTIVATION_CONTEXT **)(a1 + 96);
    if ( (unsigned __int64)&v21[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
      RtlReleaseActivationContext(v21);
  }
  return (unsigned int)v10;
}
