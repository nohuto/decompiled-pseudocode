/*
 * XREFs of MiInsertVadCharges @ 0x1405136C0
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 *     MiInsertProcessVads @ 0x14049E0E0 (MiInsertProcessVads.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1404C85E0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x14056C3D8 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1406BA9FC (MiAllocateEnclaveVad.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140018950 (PsReturnProcessPagedPoolQuota.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14009A7F0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14009A810 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14009AA70 (PsChargeProcessNonPagedPoolQuota.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     PspChargeQuota @ 0x1400D0F50 (PspChargeQuota.c)
 *     MiVadPureReserve @ 0x1400D2C90 (MiVadPureReserve.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400DB850 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     MiReturnPartitionResidentAvailable @ 0x14021F5AC (MiReturnPartitionResidentAvailable.c)
 *     MiResidentPagesForSpan @ 0x14045696C (MiResidentPagesForSpan.c)
 *     MiCommitPageTablesForVad @ 0x14051D620 (MiCommitPageTablesForVad.c)
 */

__int64 __fastcall MiInsertVadCharges(__int64 a1, struct _KPROCESS *a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  __int64 result; // rax
  int v13; // ebx
  int v14; // ecx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  int v17; // ebp
  unsigned int v18; // r14d
  unsigned int v19; // ebx
  unsigned int v20; // esi
  __int64 v21; // rdi
  __int64 v22; // rbp
  _RTL_BITMAP *v23; // r9
  unsigned int v24; // eax
  unsigned int v25; // r8d
  int v26; // r15d
  unsigned int v27; // edx
  unsigned int v28; // ecx
  ULONG_PTR *ProcessPartition; // rax
  __int64 v30; // r8
  ULONG_PTR *v31; // rax

  v3 = 0LL;
  v4 = 0LL;
  v5 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v6 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
  v7 = *(unsigned int *)(a1 + 28);
  v9 = *(unsigned int *)(a1 + 52);
  LODWORD(v9) = v9 & 0x7FFFFFFF;
  v10 = v5 << 12;
  v11 = (v7 | v6) << 12;
  if ( (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v9) < 0x7FFFFFFFELL )
  {
    result = PsChargeProcessNonPagedPoolQuota((__int64)a2, 0x88uLL);
    if ( (int)result < 0 )
      return result;
    if ( (*(_DWORD *)(a1 + 48) & 0x8000) == 0 && !(unsigned int)MiVadPureReserve(a1) )
    {
      v3 = 8
         * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
          - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)))
         + 8;
      if ( a2 != PsInitialSystemProcess )
      {
        v13 = PspChargeQuota(a2[1].ActiveProcessors.Bitmap[4], (__int64)a2, 1, v3);
        if ( v13 < 0 )
        {
          PsReturnProcessNonPagedPoolQuota(a2, 136LL);
          return (unsigned int)v13;
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 48) & 7) != 7 )
    {
      v14 = 74;
      if ( _bittest(&v14, *(_DWORD *)(a1 + 48) & 7) )
      {
        v4 = MiResidentPagesForSpan(v10);
        if ( v4 )
        {
          ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)a2);
          if ( !(unsigned int)MiChargeResident(ProcessPartition, v4, 128LL) )
          {
            v4 = 0LL;
            v17 = -1073741670;
LABEL_27:
            v30 = *(unsigned int *)(a1 + 52);
            LODWORD(v30) = v30 & 0x7FFFFFFF;
            if ( (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v30) < 0x7FFFFFFFELL )
              PsReturnProcessNonPagedPoolQuota(a2, 136LL);
            if ( v3 )
              PsReturnProcessPagedPoolQuota(a2, v3);
            if ( v4 )
            {
              v31 = (ULONG_PTR *)MiGetProcessPartition((__int64)a2);
              if ( v31 == &MiSystemPartition )
                MiReturnResidentAvailable(v4);
              else
                MiReturnPartitionResidentAvailable((__int64)v31, v4);
            }
            return (unsigned int)v17;
          }
        }
      }
    }
  }
  v15 = *(unsigned int *)(a1 + 52);
  LODWORD(v15) = v15 & 0x7FFFFFFF;
  if ( (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v15) <= 0x7FFFFFFFELL )
  {
    CurrentThread = KeGetCurrentThread();
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2);
    v17 = MiCommitPageTablesForVad(a1, v10, v11);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2);
    if ( v17 < 0 )
      goto LABEL_27;
  }
  v18 = 0;
  v19 = (*(_DWORD *)(a1 + 24) >> 4) | (*(unsigned __int8 *)(a1 + 32) << 28);
  v20 = (*(_DWORD *)(a1 + 28) >> 4) | (*(unsigned __int8 *)(a1 + 33) << 28);
  v21 = 0LL;
  v22 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  do
  {
    v23 = (_RTL_BITMAP *)(v21 + v22);
    v24 = 8 * (*(_DWORD *)(v21 + v22 + 56) - qword_14036C5C8);
    if ( v20 >= v24 )
    {
      v25 = v24 + v23[3].SizeOfBitMap;
      if ( v19 < v25 )
      {
        v26 = 0;
        v27 = v19;
        if ( v19 < v24 )
        {
          v27 = 8 * (*(_DWORD *)(v21 + v22 + 56) - qword_14036C5C8);
          v26 = 1;
        }
        v28 = v20;
        if ( v20 >= v25 )
        {
          v28 = v25 - 1;
          v26 = 1;
        }
        RtlSetBits(v23 + 3, v27 - v24, v28 - v27 + 1);
        if ( !v26 )
          break;
      }
    }
    ++v18;
    v21 += 40LL;
  }
  while ( v18 < 2 );
  return 0LL;
}
