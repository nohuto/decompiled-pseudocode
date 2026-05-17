/*
 * XREFs of sub_180024CB8 @ 0x180024CB8
 * Callers:
 *     sub_1800247C8 @ 0x1800247C8 (sub_1800247C8.c)
 *     TpAllocJobNotification @ 0x1800565C0 (TpAllocJobNotification.c)
 *     sub_180056B80 @ 0x180056B80 (sub_180056B80.c)
 *     TpAllocIoCompletion @ 0x180057380 (TpAllocIoCompletion.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x180024580 (RtlReleaseActivationContext.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlQueryInformationActivationContext @ 0x180028A50 (RtlQueryInformationActivationContext.c)
 *     RtlAddRefActivationContext @ 0x180029120 (RtlAddRefActivationContext.c)
 *     sub_180047198 @ 0x180047198 (sub_180047198.c)
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 *     sub_18007E8A0 @ 0x18007E8A0 (sub_18007E8A0.c)
 */

__int64 __fastcall sub_180024CB8(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  volatile signed __int32 **v6; // rsi
  unsigned int v7; // eax
  int v8; // r14d
  __int64 v9; // rcx
  int InformationActivationContext; // ebx
  void *v11; // rdx
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // rax
  __int64 **v15; // rcx
  void *v16; // rsi
  volatile signed __int32 *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  volatile signed __int32 *v21; // rcx
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h]

  v22 = 0LL;
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
    goto LABEL_29;
  }
  *v6 = *(volatile signed __int32 **)(a3 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 32);
  if ( *(_DWORD *)a3 <= 1u )
  {
LABEL_29:
    v7 = 1;
    goto LABEL_4;
  }
  v7 = *(_DWORD *)(a3 + 60);
  if ( v7 >= 3 )
    return (unsigned int)-1073741811;
LABEL_4:
  *(_DWORD *)(a1 + 192) = v7;
  v8 = a4 & 2;
  if ( (a4 & 2) != 0 && *v6 )
    return (unsigned int)-1073741811;
  *(_QWORD *)(a1 + 104) = NtCurrentTeb()->SubProcessTag;
  *(struct _GUID *)(a1 + 112) = NtCurrentTeb()->ActivityId;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v9 = *(_QWORD *)(a1 + 96);
  if ( v9 )
  {
    if ( v9 != -1 )
      RtlAddRefActivationContext();
  }
  else
  {
    InformationActivationContext = RtlQueryInformationActivationContext(1, 0, 0, 1, (__int64)&v22, 16LL, 0LL);
    if ( InformationActivationContext < 0 )
      return (unsigned int)InformationActivationContext;
    if ( (v23 & 1) != 0 )
    {
      RtlReleaseActivationContext((volatile signed __int32 *)v22);
      v22 = -1LL;
    }
    *(_QWORD *)(a1 + 96) = v22;
  }
  if ( *v6 )
  {
    _InterlockedAdd(*v6, 1u);
LABEL_14:
    InformationActivationContext = 0;
    if ( *v6 )
    {
      RtlAcquireSRWLockExclusive(*v6 + 18);
      v13 = (__int64 *)(a1 + 152);
      v14 = (__int64)(*v6 + 20);
      v15 = (__int64 **)*((_QWORD *)*v6 + 11);
      if ( *v15 != (__int64 *)v14 )
        __fastfail(3u);
      *v13 = v14;
      *(_QWORD *)(a1 + 160) = v15;
      *v15 = v13;
      *(_QWORD *)(v14 + 8) = v13;
      v16 = (void *)(*v6 + 18);
    }
    else
    {
      v16 = &unk_180160900;
      RtlAcquireSRWLockExclusive(&unk_180160900);
      v18 = (_QWORD *)(a1 + 152);
      v19 = off_180156A68;
      if ( *off_180156A68 != (_UNKNOWN *)&off_180156A60 )
        __fastfail(3u);
      *v18 = &off_180156A60;
      *(_QWORD *)(a1 + 160) = v19;
      *v19 = v18;
      off_180156A68 = (_UNKNOWN **)(a1 + 152);
    }
    RtlReleaseSRWLockExclusive(v16);
    v17 = *(volatile signed __int32 **)(a1 + 16);
    if ( v17 )
    {
      _InterlockedAdd(v17, 1u);
      InformationActivationContext = 0;
    }
    goto LABEL_26;
  }
  if ( v8 )
  {
    v11 = &unk_18015D3A0;
    v12 = &qword_18015D3A8;
  }
  else
  {
    v11 = &unk_18015D3B0;
    v12 = &qword_18015D3B8;
  }
  InformationActivationContext = sub_180059230(v12, v11, v6);
  if ( InformationActivationContext >= 0 )
    goto LABEL_14;
LABEL_26:
  if ( InformationActivationContext < 0 )
  {
    v21 = *(volatile signed __int32 **)(a1 + 96);
    if ( (unsigned __int64)v21 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      RtlReleaseActivationContext(v21);
  }
  return (unsigned int)InformationActivationContext;
}
