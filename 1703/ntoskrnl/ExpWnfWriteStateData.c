/*
 * XREFs of ExpWnfWriteStateData @ 0x1404EE2D4
 * Callers:
 *     NtUpdateWnfStateData @ 0x1404EE944 (NtUpdateWnfStateData.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpWnfComposeValueName @ 0x1404C0378 (ExpWnfComposeValueName.c)
 */

__int64 __fastcall ExpWnfWriteStateData(__int64 a1, const void *a2, unsigned int a3, int a4, int a5)
{
  size_t v6; // r15
  const void *v7; // r12
  volatile signed __int64 *v9; // r14
  PRTL_BALANCED_NODE v10; // rax
  PRTL_BALANCED_NODE v11; // rbx
  _DWORD *v12; // rdi
  __int32 i; // r14d
  void *v14; // rcx
  struct _KPROCESS *v16; // r12
  _KPROCESS *Process; // r13
  _QWORD *PoolWithTag; // rdi
  PRTL_BALANCED_NODE v19; // rax
  PRTL_BALANCED_NODE v20; // rdi
  _DWORD *v21; // [rsp+30h] [rbp-D8h]
  NTSTATUS v22; // [rsp+38h] [rbp-D0h]
  PVOID P; // [rsp+40h] [rbp-C8h]
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h]
  $5BC46E0569261879018906DEC3127961 v27; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h] BYREF

  v6 = a3;
  v7 = a2;
  v26 = a1;
  v22 = 0;
  *(_DWORD *)&ValueName.Length = 2228224;
  ValueName.Buffer = (wchar_t *)&v28;
  if ( *(_QWORD *)(a1 + 104) )
    ExpWnfComposeValueName(*(_QWORD *)(a1 + 40), &ValueName);
  v21 = 0LL;
  P = 0LL;
  v9 = (volatile signed __int64 *)(a1 + 80);
  v10 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v10, a1 + 80);
  if ( v11 )
    BYTE2(v11[1].Left) |= 1u;
  if ( a5 && *(_DWORD *)(a1 + 96) != a4 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
    KeAbPostRelease(a1 + 80);
    return 3221225473LL;
  }
  v12 = *(_DWORD **)(a1 + 88);
  if ( v12 == (_DWORD *)1 )
    v12 = 0LL;
  if ( v12 )
  {
    if ( v12[1] >= (unsigned int)v6 )
      goto LABEL_12;
  }
  else if ( !*(_QWORD *)(a1 + 104) && !(_DWORD)v6 )
  {
    goto LABEL_12;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  if ( ((*(_DWORD *)(a1 + 40) >> 4) & 3) != 3 || (v16 = *(struct _KPROCESS **)(a1 + 152), PsInitialSystemProcess == v16) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v6 + 16), 0x20666E57u);
    v21 = PoolWithTag;
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( v16 != Process )
      KiStackAttachProcess(*(_KPROCESS **)(a1 + 152), 0, (__int64)&v27);
    PoolWithTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)(v6 + 16), 0x20666E57u);
    v21 = PoolWithTag;
    if ( v16 != Process )
      KiUnstackDetachProcess(&v27, 0LL);
  }
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  *(_DWORD *)PoolWithTag = 1050884;
  *((_DWORD *)PoolWithTag + 1) = v6;
  v19 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  v20 = v19;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v19, a1 + 80);
  if ( v20 )
    BYTE2(v20[1].Left) |= 1u;
  v12 = *(_DWORD **)(a1 + 88);
  if ( v12 == (_DWORD *)1 )
    v12 = 0LL;
  if ( !v12 || v12[1] < (unsigned int)v6 )
    v12 = v21;
  v7 = a2;
LABEL_12:
  for ( i = *(_DWORD *)(a1 + 96) + 1; !i; i = 1 )
    ;
  if ( v12 )
  {
    memmove(v12 + 4, v7, v6);
    v12[2] = v6;
    v12[3] = i;
    v14 = *(void **)(a1 + 104);
    if ( v14 )
    {
      v22 = ZwSetValueKey(v14, &ValueName, 0, 3u, v12 + 3, v6 + 4);
      if ( v22 < 0 )
      {
        P = *(PVOID *)(a1 + 88);
        *(_QWORD *)(a1 + 88) = 0LL;
        goto LABEL_23;
      }
    }
    if ( v12 == v21 )
    {
      P = *(PVOID *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v12;
      v21 = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 88) = 1LL;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 96), i);
LABEL_23:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  if ( (unsigned __int64)P >= 2 )
    ExFreePoolWithTag(P, 0x20666E57u);
  if ( v21 )
    ExFreePoolWithTag(v21, 0x20666E57u);
  return (unsigned int)v22;
}
