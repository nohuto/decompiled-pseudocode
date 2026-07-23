/*
 * XREFs of MiInsertVadCharges @ 0x1404D0090
 * Callers:
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     MiMapLockedPagesInUserSpace @ 0x140448658 (MiMapLockedPagesInUserSpace.c)
 *     MiInsertProcessVads @ 0x14045E7E0 (MiInsertProcessVads.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14056A41C (MiAllocateNewSubAllocatedRegion.c)
 *     MiInsertChildVads @ 0x14057B0BC (MiInsertChildVads.c)
 *     MiMapViewOfPhysicalSection @ 0x1405D96D4 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1406E77E0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140036640 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400379D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     PspChargeQuota @ 0x14003AE80 (PspChargeQuota.c)
 *     MiVadPureReserve @ 0x14003DDE0 (MiVadPureReserve.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400A1640 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1400A1880 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400A18B0 (PsChargeProcessNonPagedPoolQuota.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiReturnPartitionResidentAvailable @ 0x14022AC50 (MiReturnPartitionResidentAvailable.c)
 *     MiCommitPageTablesForVad @ 0x140499490 (MiCommitPageTablesForVad.c)
 *     MiResidentPagesForSpan @ 0x14059539C (MiResidentPagesForSpan.c)
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
        v4 = MiResidentPagesForSpan(v10, v11);
        if ( v4 )
        {
          ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)a2);
          if ( !(unsigned int)MiChargeResident(ProcessPartition, v4) )
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
    v24 = 8 * (*(_DWORD *)(v21 + v22 + 56) - qword_140388950);
    if ( v20 >= v24 )
    {
      v25 = v24 + v23[3].SizeOfBitMap;
      if ( v19 < v25 )
      {
        v26 = 0;
        v27 = v19;
        if ( v19 < v24 )
        {
          v27 = 8 * (*(_DWORD *)(v21 + v22 + 56) - qword_140388950);
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
