/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x1402BDA4C
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14015A954 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400D38F0 (KeQueryMaximumProcessorCountEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExpSaBinaryArrayInsert @ 0x1402BD934 (ExpSaBinaryArrayInsert.c)
 *     ExpSaBinaryArrayRemove @ 0x1402BDA04 (ExpSaBinaryArrayRemove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  __int64 v4; // rdi
  ULONG v5; // r12d
  POOL_TYPE v6; // r14d
  PVOID result; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int SessionId; // r15d
  unsigned int v17; // ecx
  __int64 v18; // r12
  int *v19; // r13
  unsigned int v20; // ecx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  PVOID PoolWithTag; // rax
  void *v23; // rbx
  char v24; // r14
  unsigned int v25; // edx
  __int64 v26; // rbx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  int v29; // edx
  __int64 v30; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v32; // r14
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  _KLOCK_ENTRY *v36; // rdi
  bool v37; // zf
  __int64 v38; // rcx
  __int64 v39; // rdx
  char v40; // [rsp+30h] [rbp-50h]
  int v41; // [rsp+34h] [rbp-4Ch] BYREF
  ULONG MaximumProcessorCount; // [rsp+38h] [rbp-48h]
  unsigned int v43; // [rsp+3Ch] [rbp-44h]
  int v44; // [rsp+40h] [rbp-40h]
  struct _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-38h] BYREF
  int v46; // [rsp+58h] [rbp-28h]
  _QWORD **v47; // [rsp+60h] [rbp-20h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-18h] BYREF

  v40 = 0;
  LODWORD(v4) = 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v5 = MaximumProcessorCount;
  v6 = a2 != 0 ? PagedPool : NonPagedPoolNx;
  result = ExAllocatePoolWithTag(v6, 0x80uLL, 0x61537845u);
  v8 = (__int64)result;
  if ( result )
  {
    memset(result, 0, 0x80uLL);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 56) = v8 + 64;
    *(_QWORD *)(v8 + 48) = 512LL;
    *(_QWORD *)(v8 + 16) = a1;
    *(_DWORD *)(v8 + 36) = 512;
    v9 = KeAbPreAcquire((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, 0LL, 0);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v9, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v12 = ExpSaBinaryArrayInsert((_QWORD **)ExSaPageGroupDescriptorArray, v8);
    SessionId = -1;
    *(_DWORD *)(v8 + 32) = v12;
    if ( v12 == -1 )
      goto LABEL_23;
    v17 = KeNumberProcessors_0;
    v43 = KeNumberProcessors_0;
    if ( v5 )
    {
      v18 = 0LL;
      v19 = KiProcessorIndexToNumberMappingTable;
      while ( 1 )
      {
        v47 = *(_QWORD ***)(v18 + ExSaPageArrays);
        if ( (unsigned int)v4 < v17 )
        {
          v20 = *v19;
          Affinity.Reserved[1] = 0;
          Affinity.Reserved[2] = 0;
          *(_DWORD *)&Affinity.Group = (unsigned __int16)(v20 >> 6);
          Affinity.Mask = 1LL << (v20 & 0x3F);
          if ( v40 )
          {
            p_PreviousAffinity = 0LL;
          }
          else
          {
            v40 = 1;
            p_PreviousAffinity = &PreviousAffinity;
          }
          KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
        }
        PoolWithTag = ExAllocatePoolWithTag(v6, 0x1000uLL, 0x61537845u);
        v23 = PoolWithTag;
        if ( !PoolWithTag || (unsigned int)ExpSaBinaryArrayInsert(v47, (__int64)PoolWithTag) == -1 )
          break;
        v17 = v43;
        LODWORD(v4) = v4 + 1;
        v18 += 8LL;
        ++v19;
        if ( (unsigned int)v4 >= MaximumProcessorCount )
          goto LABEL_17;
      }
      v24 = 0;
    }
    else
    {
LABEL_17:
      v23 = 0LL;
      v24 = 1;
    }
    if ( v40 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    if ( !v24 )
    {
LABEL_23:
      v25 = *(_DWORD *)(v8 + 32);
      if ( v25 != -1 )
      {
        if ( (_DWORD)v4 )
        {
          do
          {
            v4 = (unsigned int)(v4 - 1);
            v26 = *(_QWORD *)(ExSaPageArrays + 8 * v4);
            v27 = *(_DWORD *)(v8 + 32);
            _BitScanReverse(&v28, v27);
            v29 = 1 << v28;
            v30 = v28 - 2;
            v46 = v30;
            ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v26 + 8 * v30) + 8LL * (v29 ^ v27) + 8), 0);
            ExpSaBinaryArrayRemove(v26, *(_DWORD *)(v8 + 32));
          }
          while ( (_DWORD)v4 );
          v25 = *(_DWORD *)(v8 + 32);
        }
        ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, v25);
      }
      ExFreePoolWithTag((PVOID)v8, 0);
      v8 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, v13, v14, v15);
    v41 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    --CurrentThread->SpecialApcDisable;
    v32 = ++CurrentThread->AbAllocationRegionCount;
    LODWORD(v33) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v37 = !_BitScanReverse((unsigned int *)&v38, v33);
      v44 = v38;
      if ( v37 )
        goto LABEL_41;
      v34 = 1 << v38;
      v35 = v38;
      v36 = &CurrentThread->LockEntries[v35];
      v33 = ~v34 & (unsigned int)v33;
      if ( (v36->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v36->LockState.0 & 1) == 0
        && (*(_QWORD *)&v36->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
        && v36->LockState.SessionId == SessionId )
      {
        v36->AcquiredByte &= ~1u;
        if ( v36->LockState.0 )
          break;
      }
    }
    if ( !v36 )
    {
LABEL_41:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, SessionId, 0LL);
      goto LABEL_48;
    }
    v36->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v36->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v35].TreeNode, v33);
    v41 = 0;
    v41 = v36->BoostBitmap.AllFields & 0x1FFFF;
    v36->BoostBitmap.AllFields &= 0xFFFE0000;
    v36->ThreadLocalFlags &= ~1u;
    v36->LockState.0 = 0LL;
    v39 = ((char *)v36 - (char *)CurrentThread - 800) / 96;
    if ( v32 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v39;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v39);
LABEL_48:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock, (__int64)&v41);
    v37 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v37 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return (PVOID)v8;
  }
  return result;
}
