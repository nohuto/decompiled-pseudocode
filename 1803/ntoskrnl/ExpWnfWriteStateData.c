/*
 * XREFs of ExpWnfWriteStateData @ 0x1404F7310
 * Callers:
 *     NtUpdateWnfStateData @ 0x1404F53D8 (NtUpdateWnfStateData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExpWnfComposeValueName @ 0x140517BE4 (ExpWnfComposeValueName.c)
 */

__int64 __fastcall ExpWnfWriteStateData(__int64 a1, const void *a2, unsigned int a3, int a4, int a5)
{
  size_t v6; // r13
  const void *v7; // r12
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  _DWORD *v14; // rcx
  _DWORD *v15; // r14
  __int32 i; // esi
  void *v17; // rcx
  _KPROCESS *v19; // rcx
  int v20; // r12d
  _QWORD *PoolWithTag; // r14
  __int64 v22; // rax
  __int64 v23; // r14
  _DWORD *v24; // [rsp+30h] [rbp-C8h]
  NTSTATUS v25; // [rsp+38h] [rbp-C0h]
  PVOID P; // [rsp+40h] [rbp-B8h]
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-90h]
  _BYTE v30[48]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-58h] BYREF

  v6 = a3;
  v7 = a2;
  v29 = a1;
  v25 = 0;
  *(_DWORD *)&ValueName.Length = 2228224;
  ValueName.Buffer = (wchar_t *)&v31;
  if ( *(_QWORD *)(a1 + 104) )
    ExpWnfComposeValueName(*(_QWORD *)(a1 + 40), &ValueName);
  v24 = 0LL;
  P = 0LL;
  v9 = (volatile signed __int64 *)(a1 + 80);
  v10 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  v13 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v10, a1 + 80);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  if ( a5 && *(_DWORD *)(a1 + 96) != a4 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80), 0LL, v11, v12);
    KeAbPostRelease(a1 + 80);
    return 3221225473LL;
  }
  v14 = 0LL;
  if ( *(_QWORD *)(a1 + 88) != 1LL )
    v14 = *(_DWORD **)(a1 + 88);
  if ( !v14 && (*(_QWORD *)(a1 + 104) || (_DWORD)v6) || (v15 = v14) != 0LL && v14[1] < (unsigned int)v6 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80), 0LL, v11, v12);
    KeAbPostRelease(a1 + 80);
    if ( ((*(_DWORD *)(a1 + 40) >> 4) & 3) != 3 || PsInitialSystemProcess == *(PEPROCESS *)(a1 + 152) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v6 + 16), 0x20666E57u);
      v24 = PoolWithTag;
    }
    else
    {
      v19 = *(_KPROCESS **)(a1 + 152);
      if ( !v19 )
        return 3221225524LL;
      if ( v19 == KeGetCurrentThread()->ApcState.Process )
      {
        v20 = 0;
      }
      else
      {
        v20 = 1;
        KiStackAttachProcess(v19, 0, (__int64)v30);
      }
      PoolWithTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)(v6 + 16), 0x20666E57u);
      v24 = PoolWithTag;
      if ( v20 )
        KiUnstackDetachProcess((__int64)v30, 0LL);
      v7 = a2;
    }
    if ( !PoolWithTag )
      return 3221225626LL;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *(_DWORD *)PoolWithTag = 1050884;
    *((_DWORD *)PoolWithTag + 1) = v6;
    v22 = KeAbPreAcquire(a1 + 80, 0LL, 0);
    v23 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v22, a1 + 80);
    if ( v23 )
      *(_BYTE *)(v23 + 26) |= 1u;
    v15 = 0LL;
    if ( *(_QWORD *)(a1 + 88) != 1LL )
      v15 = *(_DWORD **)(a1 + 88);
    if ( !v15 || v15[1] < (unsigned int)v6 )
      v15 = v24;
  }
  for ( i = *(_DWORD *)(a1 + 96) + 1; !i; i = 1 )
    ;
  if ( v15 )
  {
    memmove(v15 + 4, v7, v6);
    v15[2] = v6;
    v15[3] = i;
    v17 = *(void **)(a1 + 104);
    if ( v17 )
    {
      v25 = ZwSetValueKey(v17, &ValueName, 0, 3u, v15 + 3, v6 + 4);
      if ( v25 < 0 )
      {
        P = *(PVOID *)(a1 + 88);
        *(_QWORD *)(a1 + 88) = 0LL;
        goto LABEL_26;
      }
    }
    if ( v15 == v24 )
    {
      P = *(PVOID *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v15;
      v24 = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 88) = 1LL;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 96), i);
LABEL_26:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80), 0LL, v11, v12);
  KeAbPostRelease(a1 + 80);
  if ( (unsigned __int64)P >= 2 )
    ExFreePoolWithTag(P, 0x20666E57u);
  if ( v24 )
    ExFreePoolWithTag(v24, 0x20666E57u);
  return (unsigned int)v25;
}
