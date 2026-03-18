/*
 * XREFs of MiCreateImageOrDataSection @ 0x14050E960
 * Callers:
 *     MiCreateSection @ 0x14050C860 (MiCreateSection.c)
 * Callees:
 *     MiReferenceControlAreaForCacheManager @ 0x1400231B4 (MiReferenceControlAreaForCacheManager.c)
 *     ObDereferenceObjectEx @ 0x140024B3C (ObDereferenceObjectEx.c)
 *     CcWaitForUninitializeCacheMap @ 0x140028FB8 (CcWaitForUninitializeCacheMap.c)
 *     MiZeroSectionObjectPointer @ 0x14003BD84 (MiZeroSectionObjectPointer.c)
 *     ObReferenceObjectExWithTag @ 0x1400445F0 (ObReferenceObjectExWithTag.c)
 *     IoAllowExecution @ 0x14007203C (IoAllowExecution.c)
 *     MiReferenceControlArea @ 0x1400949E0 (MiReferenceControlArea.c)
 *     IoSetTopLevelIrp @ 0x140096520 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140096540 (IoGetTopLevelIrp.c)
 *     MiReleaseControlAreaWaiters @ 0x140097F50 (MiReleaseControlAreaWaiters.c)
 *     MiDereferenceControlAreaBySection @ 0x140099790 (MiDereferenceControlAreaBySection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     MiGetControlAreaPartition @ 0x140118AE8 (MiGetControlAreaPartition.c)
 *     ObFastReplaceObject @ 0x14011AE74 (ObFastReplaceObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 *     MiCallCreateSectionFilters @ 0x14050FFB8 (MiCallCreateSectionFilters.c)
 *     MiShareExistingControlArea @ 0x1405104F8 (MiShareExistingControlArea.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall MiCreateImageOrDataSection(__int64 a1)
{
  int v2; // ecx
  _QWORD *v3; // rdi
  NTSTATUS result; // eax
  _QWORD *v5; // rax
  bool v6; // zf
  struct _KTHREAD *CurrentThread; // rsi
  int v8; // ebp
  int v9; // eax
  _QWORD *v10; // rbp
  int NewSection; // r14d
  char v12; // dl
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  int v18; // r8d
  int v19; // edx
  _QWORD *v20; // r9
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  void *v24; // rax
  __int64 v25; // rcx
  signed __int64 v26; // rax
  _QWORD v27[16]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD *v28; // [rsp+E0h] [rbp+8h] BYREF
  __int64 *v29; // [rsp+E8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+F0h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 16);
  if ( (v2 & 0x80000) != 0 )
    return -1073741580;
  v3 = *(_QWORD **)(a1 + 48);
  if ( v3 )
  {
    v14 = v2 & 0x1000000;
    if ( v14 )
    {
      if ( (*(_DWORD *)a1 & 1) != 0 )
        return -1073741580;
      if ( **(_QWORD **)(a1 + 152) )
        return -1073741582;
    }
    if ( !v3[5] )
      return -1073741792;
    v15 = *(_QWORD *)(a1 + 8);
    if ( v15 && (*(_DWORD *)(v15 + 24) & 0x200) != 0 )
      *(_BYTE *)(a1 + 72) = 0;
    v16 = (_QWORD *)v3[5];
    if ( v14 )
      v17 = (_QWORD *)v16[2];
    else
      v17 = (_QWORD *)*v16;
    v28 = v17;
    if ( !v17 || (v18 = MiReferenceControlAreaForCacheManager(a1), v18 < 0) )
    {
      *(_QWORD *)(a1 + 56) = v3;
      ObReferenceObjectExWithTag((__int64)v3, 2);
      goto LABEL_7;
    }
    *(_DWORD *)a1 |= 4u;
    v19 = *(_DWORD *)a1;
    if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
    {
      v28 = *(_QWORD **)(v3[5] + 16LL);
      v25 = *v28;
    }
    else
    {
      v20 = *(_QWORD **)(a1 + 152);
      v21 = *(_QWORD **)v3[5];
      *(_QWORD *)(a1 + 128) = *v20;
      v28 = v21;
      if ( (v19 & 1) != 0 || *v20 )
        goto LABEL_34;
      v25 = *v21;
    }
    v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 24), -1LL, -1LL);
    v21 = v28;
    *(_QWORD *)(a1 + 128) = v26;
LABEL_34:
    *(_QWORD *)(a1 + 64) = v21;
    return v18;
  }
  if ( v2 < 0 )
    return -1073741580;
  result = ObReferenceObjectByHandle(
             *(HANDLE *)(a1 + 40),
             MmMakeFileAccess[*(_DWORD *)(a1 + 32) & 7],
             (POBJECT_TYPE)IoFileObjectType,
             *(_BYTE *)(a1 + 72),
             &Object,
             0LL);
  v3 = Object;
  if ( result < 0 )
    return result;
  *(_QWORD *)(a1 + 56) = Object;
  if ( !v3[5] )
  {
    ObfDereferenceObject(v3);
    return -1073741792;
  }
  ObfReferenceObject(v3);
LABEL_7:
  memset(v27, 0, sizeof(v27));
  LODWORD(v27[7]) |= 2u;
  v5 = v3;
  v29 = 0LL;
  if ( !v3 )
    v5 = 0LL;
  v6 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
  v27[8] = v5;
  if ( !v6 )
  {
    if ( (*(_DWORD *)a1 & 0x400) != 0 && !IoAllowExecution((__int64)v3) )
    {
      ObDereferenceObjectEx((ULONG_PTR)v3, 2u);
      return -1073741790;
    }
    CcWaitForUninitializeCacheMap((__int64)v3);
    if ( (*(_DWORD *)a1 & 0x400) != 0 )
    {
      v12 = *(_BYTE *)(a1 + 24);
      if ( (v12 & 0x10) != 0 )
      {
        v13 = *(_DWORD *)a1 | 0x10;
        *(_DWORD *)a1 = v13;
        if ( (v12 & 0x30) == 0x30 )
          *(_DWORD *)a1 = v13 | 0x1000;
        *(_BYTE *)(a1 + 24) = v12 & 0xF;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  while ( 1 )
  {
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      v8 = MiCallCreateSectionFilters(a1);
      if ( v8 < 0 )
      {
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        ObDereferenceObjectEx((ULONG_PTR)v3, 2u);
        return v8;
      }
      *(_QWORD *)(a1 + 176) = IoGetTopLevelIrp();
      IoSetTopLevelIrp((PIRP)1);
      *(_DWORD *)a1 |= 2u;
    }
    v9 = MiReferenceControlArea(a1, (__int64)v27, &v28);
    if ( !v9 )
      break;
    if ( v9 == 2 )
    {
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      ObDereferenceObjectEx((ULONG_PTR)v3, 2u);
      return -1073740277;
    }
  }
  v10 = v28;
  *(_QWORD *)(a1 + 64) = v28;
  if ( (v10[7] & 2) != 0 )
  {
    NewSection = MiCreateNewSection(a1, (__int64 *)&v29);
    if ( NewSection < 0 )
    {
      if ( v29 )
      {
        v10 = (_QWORD *)*v29;
        v28 = v10;
        *(_QWORD *)(a1 + 64) = v10;
      }
      v23 = (_QWORD *)MiZeroSectionObjectPointer((__int64)v3, (__int64)v10, *(_DWORD *)(a1 + 16));
      ObfDereferenceObject(v3);
      if ( v10 == v27 )
      {
        v24 = (void *)ObFastReplaceObject(v10 + 8, 0LL);
        ObfDereferenceObject(v24);
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition((__int64)v10) + 1352));
        MiDereferenceControlAreaBySection((__int64)v28, 1u);
      }
      MiReleaseControlAreaWaiters(v23);
    }
    else
    {
      v22 = *v29;
      *(_QWORD *)(a1 + 64) = *v29;
      _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v22) + 1352));
    }
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    return MiShareExistingControlArea(a1);
  }
  return NewSection;
}
