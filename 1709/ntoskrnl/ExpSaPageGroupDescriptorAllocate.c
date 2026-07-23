/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x14014ABCC
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14014A620 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400FC800 (KeQueryMaximumProcessorCountEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     ExpSaBinaryArrayInsert @ 0x14014AFA4 (ExpSaBinaryArrayInsert.c)
 *     ExpSaBinaryArrayRemove @ 0x140156AAC (ExpSaBinaryArrayRemove.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

char *__fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  __int64 v4; // rdi
  ULONG v5; // r12d
  POOL_TYPE v6; // r14d
  char *result; // rax
  char *v8; // rsi
  PRTL_BALANCED_NODE v9; // rax
  signed __int8 v10; // cf
  PRTL_BALANCED_NODE v11; // rbx
  int v12; // eax
  unsigned int SessionId; // r15d
  unsigned int v14; // ecx
  __int64 v15; // r12
  int *v16; // r13
  unsigned int v17; // ecx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  PVOID PoolWithTag; // rax
  void *v20; // rbx
  char v21; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v23; // r14
  unsigned int v24; // edx
  bool v25; // zf
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _KLOCK_ENTRY *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  int v35; // r8d
  __int64 v36; // rcx
  char v37; // [rsp+30h] [rbp-50h]
  int v38; // [rsp+34h] [rbp-4Ch] BYREF
  ULONG MaximumProcessorCount; // [rsp+38h] [rbp-48h]
  unsigned int v40; // [rsp+3Ch] [rbp-44h]
  int v41; // [rsp+40h] [rbp-40h]
  struct _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-38h] BYREF
  int v43; // [rsp+58h] [rbp-28h]
  __int64 v44; // [rsp+60h] [rbp-20h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-18h] BYREF

  v37 = 0;
  LODWORD(v4) = 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v5 = MaximumProcessorCount;
  v6 = a2 != 0 ? PagedPool : NonPagedPoolNx;
  result = (char *)ExAllocatePoolWithTag(v6, 0x80uLL, 0x61537845u);
  v8 = result;
  if ( result )
  {
    memset(result, 0, 0x80uLL);
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 7) = v8 + 64;
    *((_QWORD *)v8 + 6) = 512LL;
    *((_QWORD *)v8 + 2) = a1;
    *((_DWORD *)v8 + 9) = 512;
    v9 = KeAbPreAcquire((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, 0LL, 0);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(
        &ExSaPageGroupDescriptorArrayLock,
        (__int64)v9,
        (__int16 *)&ExSaPageGroupDescriptorArrayLock);
    if ( v11 )
      BYTE2(v11[1].Left) |= 1u;
    v12 = ExpSaBinaryArrayInsert(ExSaPageGroupDescriptorArray, v8);
    SessionId = -1;
    *((_DWORD *)v8 + 8) = v12;
    if ( v12 == -1 )
      goto LABEL_47;
    v14 = KeNumberProcessors_0;
    v40 = KeNumberProcessors_0;
    if ( v5 )
    {
      v15 = 0LL;
      v16 = KiProcessorIndexToNumberMappingTable;
      while ( 1 )
      {
        v44 = *(_QWORD *)(v15 + ExSaPageArrays);
        if ( (unsigned int)v4 < v14 )
        {
          v17 = *v16;
          Affinity.Reserved[1] = 0;
          Affinity.Reserved[2] = 0;
          *(_DWORD *)&Affinity.Group = (unsigned __int16)(v17 >> 6);
          Affinity.Mask = 1LL << (v17 & 0x3F);
          if ( v37 )
          {
            p_PreviousAffinity = 0LL;
          }
          else
          {
            v37 = 1;
            p_PreviousAffinity = &PreviousAffinity;
          }
          KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
        }
        PoolWithTag = ExAllocatePoolWithTag(v6, 0x1000uLL, 0x61537845u);
        v20 = PoolWithTag;
        if ( !PoolWithTag || (unsigned int)ExpSaBinaryArrayInsert(v44, PoolWithTag) == -1 )
          break;
        v14 = v40;
        LODWORD(v4) = v4 + 1;
        v15 += 8LL;
        ++v16;
        if ( (unsigned int)v4 >= MaximumProcessorCount )
          goto LABEL_16;
      }
      v21 = 0;
    }
    else
    {
LABEL_16:
      v20 = 0LL;
      v21 = 1;
    }
    if ( v37 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    if ( !v21 )
    {
LABEL_47:
      if ( *((_DWORD *)v8 + 8) != -1 )
      {
        while ( (_DWORD)v4 )
        {
          v4 = (unsigned int)(v4 - 1);
          v32 = *(_QWORD *)(ExSaPageArrays + 8 * v4);
          v33 = *((_DWORD *)v8 + 8);
          _BitScanReverse(&v34, v33);
          v35 = 1 << v34;
          v36 = v34 - 2;
          v43 = v36;
          ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v32 + 8 * v36) + 8LL * (v33 ^ v35) + 8), 0);
          ExpSaBinaryArrayRemove(v32, *((unsigned int *)v8 + 8));
        }
        ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, *((unsigned int *)v8 + 8));
      }
      ExFreePoolWithTag(v8, 0);
      v8 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
    v38 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    --CurrentThread->SpecialApcDisable;
    v23 = ++CurrentThread->AbAllocationRegionCount;
    v24 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v25 = !_BitScanReverse((unsigned int *)&v26, v24);
      v41 = v26;
      if ( v25 )
        break;
      v27 = 1 << v26;
      v28 = v26;
      v29 = &CurrentThread->LockEntries[v28];
      v24 &= ~v27;
      if ( (v29->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v29->LockState.0 & 1) == 0
        && (*(_QWORD *)&v29->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
        && v29->LockState.SessionId == SessionId )
      {
        v29->AcquiredByte &= ~1u;
        if ( v29->LockState.0 )
        {
          if ( v29 )
          {
            v29->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v29->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v28].TreeNode);
            v38 = 0;
            v38 = v29->BoostBitmap.AllFields & 0x1FFFF;
            v29->BoostBitmap.AllFields &= 0xFFFE0000;
            v29->ThreadLocalFlags &= ~1u;
            v29->LockState.0 = 0LL;
            v30 = ((char *)v29 - (char *)CurrentThread - 800) / 96;
            if ( v23 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v30;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v30);
            goto LABEL_38;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, SessionId, 0LL);
LABEL_38:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock, (unsigned int *)&v38);
    v25 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v25 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v31);
    return v8;
  }
  return result;
}
