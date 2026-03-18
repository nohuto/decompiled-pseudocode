/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x14014F6A4
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14014F0C4 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140088870 (KeQueryMaximumProcessorCountEx.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExpSaBinaryArrayInsert @ 0x14014FA90 (ExpSaBinaryArrayInsert.c)
 *     ExpSaBinaryArrayRemove @ 0x14015252C (ExpSaBinaryArrayRemove.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

char *__fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  __int64 v4; // rdi
  ULONG v5; // r13d
  POOL_TYPE v6; // r15d
  char *result; // rax
  char *v8; // r14
  _BYTE *v9; // rax
  signed __int8 v10; // cf
  _BYTE *v11; // rbx
  int v12; // eax
  unsigned int SessionId; // r12d
  unsigned int v14; // edx
  int *v15; // rcx
  __int64 v16; // r13
  unsigned int v17; // ecx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  PVOID PoolWithTag; // rax
  void *v20; // rbx
  char v21; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v23; // r15
  unsigned __int64 v24; // r8
  __int64 v25; // rdx
  bool v26; // zf
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  _KLOCK_ENTRY *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int16 v33; // ax
  __int64 v34; // rbx
  unsigned int v35; // eax
  unsigned int v36; // ecx
  int v37; // r8d
  __int64 v38; // rcx
  char v39; // [rsp+38h] [rbp-29h]
  int v40; // [rsp+3Ch] [rbp-25h] BYREF
  ULONG MaximumProcessorCount; // [rsp+40h] [rbp-21h]
  unsigned int v42; // [rsp+44h] [rbp-1Dh]
  int v43; // [rsp+48h] [rbp-19h]
  int *v44; // [rsp+50h] [rbp-11h]
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-9h] BYREF
  int v46; // [rsp+68h] [rbp+7h]
  __int64 v47; // [rsp+70h] [rbp+Fh]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+78h] [rbp+17h] BYREF

  v39 = 0;
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
    v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, 0LL, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v9, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
    if ( v11 )
      v11[26] |= 1u;
    v12 = ExpSaBinaryArrayInsert(ExSaPageGroupDescriptorArray, v8);
    SessionId = -1;
    *((_DWORD *)v8 + 8) = v12;
    if ( v12 == -1 )
      goto LABEL_47;
    v14 = KeNumberProcessors_0;
    v42 = KeNumberProcessors_0;
    if ( v5 )
    {
      v15 = KiProcessorIndexToNumberMappingTable;
      v16 = 0LL;
      v44 = KiProcessorIndexToNumberMappingTable;
      while ( 1 )
      {
        v47 = *(_QWORD *)(ExSaPageArrays + v16);
        if ( (unsigned int)v4 < v14 )
        {
          v17 = *v15;
          Affinity.Reserved[1] = 0;
          Affinity.Reserved[2] = 0;
          *(_DWORD *)&Affinity.Group = (unsigned __int16)(v17 >> 6);
          Affinity.Mask = 1LL << (v17 & 0x3F);
          if ( v39 )
          {
            p_PreviousAffinity = 0LL;
          }
          else
          {
            v39 = 1;
            p_PreviousAffinity = &PreviousAffinity;
          }
          KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
        }
        PoolWithTag = ExAllocatePoolWithTag(v6, 0x1000uLL, 0x61537845u);
        v20 = PoolWithTag;
        if ( !PoolWithTag || (unsigned int)ExpSaBinaryArrayInsert(v47, PoolWithTag) == -1 )
          break;
        LODWORD(v4) = v4 + 1;
        v14 = v42;
        v15 = v44 + 1;
        v16 += 8LL;
        ++v44;
        if ( (unsigned int)v4 >= MaximumProcessorCount )
          goto LABEL_16;
      }
      v21 = 0;
    }
    else
    {
LABEL_16:
      v21 = 1;
      v20 = 0LL;
    }
    if ( v39 )
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
          v34 = *(_QWORD *)(ExSaPageArrays + 8 * v4);
          v35 = *((_DWORD *)v8 + 8);
          _BitScanReverse(&v36, v35);
          v37 = 1 << v36;
          v38 = v36 - 2;
          v46 = v38;
          ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v34 + 8 * v38) + 8LL * (v35 ^ v37) + 8), 0);
          ExpSaBinaryArrayRemove(v34, *((unsigned int *)v8 + 8));
        }
        ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, *((unsigned int *)v8 + 8));
      }
      ExFreePoolWithTag(v8, 0);
      v8 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
    v40 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    --CurrentThread->SpecialApcDisable;
    v23 = ++CurrentThread->AbAllocationRegionCount;
    v24 = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
    LODWORD(v25) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v26 = !_BitScanReverse((unsigned int *)&v27, v25);
      v43 = v27;
      if ( v26 )
        break;
      v28 = 1 << v27;
      v29 = v27;
      v30 = &CurrentThread->LockEntries[v29];
      v25 = ~v28 & (unsigned int)v25;
      if ( (v30->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v30->LockState.0 & 1) == 0
        && (*(_QWORD *)&v30->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v24
        && v30->LockState.SessionId == SessionId )
      {
        v30->AcquiredByte &= ~1u;
        if ( v30->LockState.0 )
        {
          if ( v30 )
          {
            v30->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v30->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree((__int64)&CurrentThread->LockEntries[v29], v25, v24);
            v40 = 0;
            v40 = v30->BoostBitmap.AllFields & 0x1FFFF;
            v30->BoostBitmap.AllFields &= 0xFFFE0000;
            v30->ThreadLocalFlags &= ~1u;
            v30->LockState.0 = 0LL;
            v31 = ((char *)v30 - (char *)CurrentThread - 800) / 96;
            if ( v23 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v31;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v31);
            goto LABEL_38;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, SessionId, 0LL);
LABEL_38:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(
      &CurrentThread->Header.Lock,
      (__int64)&ExSaPageGroupDescriptorArrayLock,
      (unsigned int *)&v40);
    v33 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v33;
    if ( !v33
      && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v32);
    }
    return v8;
  }
  return result;
}
