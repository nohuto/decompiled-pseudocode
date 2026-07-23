/*
 * XREFs of NtAlpcSetInformation @ 0x14055D284
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     AlpcpAssociateIoCompletionPort @ 0x14055D608 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpInitializeCompletionList @ 0x14056B364 (AlpcpInitializeCompletionList.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x14056C8CC (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpFreeCompletionList @ 0x14056C968 (AlpcpFreeCompletionList.c)
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r14d
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v9; // r13
  __int64 *v10; // r12
  signed int v11; // edi
  __int32 v12; // esi
  __int32 v13; // esi
  signed int v14; // eax
  __int32 v16; // esi
  __int32 v17; // esi
  int v18; // esi
  int v19; // esi
  _QWORD *v20; // rdi
  signed __int64 *v21; // rbx
  ULONG_PTR v22; // rcx
  int v23; // esi
  _QWORD *v24; // rdi
  volatile signed __int64 *v25; // rsi
  ULONG_PTR v26; // rcx
  _DWORD *v27; // rdi
  volatile signed __int64 *v28; // rsi
  _QWORD *v29; // rsi
  volatile signed __int64 *v30; // rdi
  __m128i v31; // xmm0
  int v32; // edx
  KPROCESSOR_MODE v33; // [rsp+30h] [rbp-C8h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  __int64 *v35; // [rsp+40h] [rbp-B8h]
  HANDLE Handle; // [rsp+48h] [rbp-B0h]
  __int64 *v37; // [rsp+50h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-98h] BYREF
  __int32 v39; // [rsp+68h] [rbp-90h]
  unsigned __int64 v40; // [rsp+6Ch] [rbp-8Ch]

  Handle = PortHandle;
  v35 = (__int64 *)PortInformation;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = 0;
  if ( !PortHandle
    || !v35
    && PortInformationClass != AlpcUnregisterCompletionListInformation
    && PortInformationClass != AlpcCompletionListRundownInformation )
  {
    v11 = -1073741811;
    goto LABEL_16;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = PreviousMode;
  v9 = (__int64)v35;
  v10 = v35;
  v37 = v35;
  if ( Length && PreviousMode )
  {
    if ( Length > 0x48 )
    {
      v11 = -1073741820;
      goto LABEL_16;
    }
    if ( (unsigned __int64)v35 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v35 = (__int64 *)v9;
    memmove(&v38, (const void *)v9, Length);
    v10 = &v38;
    v37 = &v38;
    PortHandle = Handle;
  }
  v11 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = PortInformationClass - 1;
    if ( !v12 )
    {
      if ( Length != 72 )
        goto LABEL_66;
      v32 = *(_DWORD *)v10;
      if ( (*(_DWORD *)v10 & 0xFC00FFFF) == 0 && ((v32 ^ *((_DWORD *)Object + 64)) & 0x40000) == 0 )
      {
        *((_DWORD *)Object + 64) = v32 | *((_DWORD *)Object + 64) & 0xFC00FFFF;
        goto LABEL_15;
      }
      goto LABEL_60;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( Length == 16 )
      {
        v14 = AlpcpAssociateIoCompletionPort(Object, v10[1], *v10);
LABEL_14:
        v11 = v14;
LABEL_15:
        ObfDereferenceObject(Object);
        goto LABEL_16;
      }
LABEL_66:
      v11 = -1073741820;
      goto LABEL_15;
    }
    v16 = v13 - 3;
    if ( !v16 )
    {
      v11 = Length != 16 ? 0xC000000D : 0;
      goto LABEL_15;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( Length )
          goto LABEL_60;
        v29 = Object;
        v30 = (volatile signed __int64 *)((char *)Object + 352);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
        if ( v29[45] )
          AlpcpFreeCompletionList(v29);
        if ( (_InterlockedExchangeAdd64(v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v30);
        v26 = (ULONG_PTR)v30;
        goto LABEL_34;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        if ( Length == 4 && *(_DWORD *)v10 )
        {
          v20 = Object;
          v21 = (signed __int64 *)((char *)Object + 352);
          ExAcquirePushLockSharedEx((ULONG_PTR)Object + 352, 0LL);
          if ( v20[45] )
          {
            AlpcpAdjustCompletionListConcurrencyCount(v20, *(unsigned int *)v10);
            v11 = 0;
          }
          else
          {
            v11 = -1073741811;
          }
          if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v21);
          v22 = (ULONG_PTR)v21;
LABEL_28:
          KeAbPostRelease(v22);
          goto LABEL_15;
        }
        goto LABEL_60;
      }
      v23 = v19 - 1;
      if ( !v23 )
      {
        if ( v33 )
          goto LABEL_60;
        ObfReferenceObject(*(PVOID *)v9);
        v24 = Object;
        v25 = (volatile signed __int64 *)((char *)Object + 352);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
        v24[46] = *(_QWORD *)v9;
        v24[47] = *(_QWORD *)(v9 + 8);
        if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v25);
        v26 = (ULONG_PTR)v25;
LABEL_34:
        KeAbPostRelease(v26);
        v11 = 0;
        goto LABEL_15;
      }
      if ( v23 == 1 && !Length )
      {
        v27 = Object;
        v28 = (volatile signed __int64 *)((char *)Object + 352);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
        if ( *((_QWORD *)v27 + 45) )
        {
          v27[104] &= ~0x10000u;
          v11 = 0;
        }
        else
        {
          v11 = -1073741811;
        }
        if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v28);
        v22 = (ULONG_PTR)v28;
        goto LABEL_28;
      }
    }
    else if ( (*((_DWORD *)Object + 104) & 6) == 2 )
    {
      if ( Length != 24 )
      {
        if ( Length != 16 )
          goto LABEL_60;
        v31 = *(__m128i *)v10;
        v10 = &v38;
        v38 = v31.m128i_u32[0];
        v39 = v31.m128i_i32[1];
        v40 = _mm_srli_si128(v31, 8).m128i_u64[0];
        v7 = 1;
      }
      v14 = AlpcpInitializeCompletionList(
              Object,
              *v10,
              *((unsigned int *)v10 + 2),
              *((unsigned int *)v10 + 3),
              *((_DWORD *)v10 + 4),
              v7);
      goto LABEL_14;
    }
LABEL_60:
    v11 = -1073741811;
    goto LABEL_15;
  }
LABEL_16:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v11;
}
