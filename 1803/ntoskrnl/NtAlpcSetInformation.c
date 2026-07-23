/*
 * XREFs of NtAlpcSetInformation @ 0x14052E020
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     AlpcpInitializeCompletionList @ 0x14052DD94 (AlpcpInitializeCompletionList.c)
 *     AlpcpAssociateIoCompletionPort @ 0x14052E268 (AlpcpAssociateIoCompletionPort.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x1407482FC (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpFreeCompletionList @ 0x140748648 (AlpcpFreeCompletionList.c)
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
  unsigned int *v10; // r12
  signed int v11; // edi
  __int32 v12; // esi
  __int32 v13; // esi
  signed int v14; // eax
  __int32 v16; // esi
  __int32 v17; // esi
  __int64 v18; // rdx
  int v19; // esi
  int v20; // esi
  int v21; // esi
  _QWORD *v22; // rdi
  volatile signed __int64 *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  ULONG_PTR v27; // rcx
  _DWORD *v28; // rdi
  volatile signed __int64 *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  ULONG_PTR v33; // rcx
  _QWORD *v34; // rdi
  signed __int64 *v35; // rbx
  _QWORD *v36; // rsi
  volatile signed __int64 *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128i v41; // xmm0
  int v42; // edx
  KPROCESSOR_MODE v43; // [rsp+30h] [rbp-C8h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  unsigned int *v45; // [rsp+40h] [rbp-B8h]
  HANDLE Handle; // [rsp+48h] [rbp-B0h]
  unsigned int *v47; // [rsp+50h] [rbp-A8h]
  __int64 v48; // [rsp+60h] [rbp-98h] BYREF
  __int32 v49; // [rsp+68h] [rbp-90h]
  unsigned __int64 v50; // [rsp+6Ch] [rbp-8Ch]

  Handle = PortHandle;
  v45 = (unsigned int *)PortInformation;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = 0;
  if ( !PortHandle
    || !v45
    && PortInformationClass != AlpcUnregisterCompletionListInformation
    && PortInformationClass != AlpcCompletionListRundownInformation )
  {
    v11 = -1073741811;
    goto LABEL_16;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v43 = PreviousMode;
  v9 = (__int64)v45;
  v10 = v45;
  v47 = v45;
  if ( Length && PreviousMode )
  {
    if ( Length > 0x48 )
    {
      v11 = -1073741820;
      goto LABEL_16;
    }
    if ( (unsigned __int64)v45 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v45 = (unsigned int *)v9;
    memmove(&v48, (const void *)v9, Length);
    v10 = (unsigned int *)&v48;
    v47 = (unsigned int *)&v48;
    PortHandle = Handle;
  }
  v11 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = PortInformationClass - 1;
    if ( !v12 )
    {
      if ( Length != 72 )
        goto LABEL_67;
      v42 = *v10;
      if ( (*v10 & 0xFC00FFFF) == 0 && ((v42 ^ *((_DWORD *)Object + 64)) & 0x40000) == 0 )
      {
        *((_DWORD *)Object + 64) = v42 | *((_DWORD *)Object + 64) & 0xFC00FFFF;
        goto LABEL_15;
      }
      goto LABEL_61;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( Length == 16 )
      {
        v14 = AlpcpAssociateIoCompletionPort(Object, *((_QWORD *)v10 + 1), *(_QWORD *)v10);
LABEL_14:
        v11 = v14;
LABEL_15:
        ObfDereferenceObject(Object);
        goto LABEL_16;
      }
LABEL_67:
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
    if ( !v17 )
    {
      if ( (*((_DWORD *)Object + 104) & 6) == 2 )
      {
        if ( Length == 24 )
        {
          v18 = *(_QWORD *)v10;
LABEL_22:
          v14 = AlpcpInitializeCompletionList((__int64)Object, v18, v10[2], v10[3], v10[4], v7);
          goto LABEL_14;
        }
        if ( Length == 16 )
        {
          v41 = *(__m128i *)v10;
          v10 = (unsigned int *)&v48;
          v18 = v41.m128i_u32[0];
          v48 = v41.m128i_u32[0];
          v49 = v41.m128i_i32[1];
          v50 = _mm_srli_si128(v41, 8).m128i_u64[0];
          v7 = 1;
          goto LABEL_22;
        }
      }
LABEL_61:
      v11 = -1073741811;
      goto LABEL_15;
    }
    v19 = v17 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( !v21 )
        {
          if ( v43 )
            goto LABEL_61;
          ObfReferenceObject(*(PVOID *)v9);
          v22 = Object;
          v23 = (volatile signed __int64 *)((char *)Object + 352);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
          v22[46] = *(_QWORD *)v9;
          v22[47] = *(_QWORD *)(v9 + 8);
          if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v23, v24, v25, v26);
          v27 = (ULONG_PTR)v23;
LABEL_30:
          KeAbPostRelease(v27);
          v11 = 0;
          goto LABEL_15;
        }
        if ( v21 != 1 || Length )
          goto LABEL_61;
        v28 = Object;
        v29 = (volatile signed __int64 *)((char *)Object + 352);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
        if ( *((_QWORD *)v28 + 45) )
        {
          v28[104] &= ~0x10000u;
          v11 = 0;
        }
        else
        {
          v11 = -1073741811;
        }
        if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v29, v30, v31, v32);
        v33 = (ULONG_PTR)v29;
      }
      else
      {
        if ( Length != 4 || !*v10 )
          goto LABEL_61;
        v34 = Object;
        v35 = (signed __int64 *)((char *)Object + 352);
        ExAcquirePushLockSharedEx((ULONG_PTR)Object + 352, 0LL);
        if ( v34[45] )
        {
          AlpcpAdjustCompletionListConcurrencyCount(v34, *v10);
          v11 = 0;
        }
        else
        {
          v11 = -1073741811;
        }
        if ( _InterlockedCompareExchange64(v35, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v35);
        v33 = (ULONG_PTR)v35;
      }
      KeAbPostRelease(v33);
      goto LABEL_15;
    }
    if ( Length )
      goto LABEL_61;
    v36 = Object;
    v37 = (volatile signed __int64 *)((char *)Object + 352);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
    if ( v36[45] )
      AlpcpFreeCompletionList(v36);
    if ( (_InterlockedExchangeAdd64(v37, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v37, v38, v39, v40);
    v27 = (ULONG_PTR)v37;
    goto LABEL_30;
  }
LABEL_16:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v11;
}
