/*
 * XREFs of MiInsertVadCharges @ 0x1404AEFA0
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiInsertProcessVads @ 0x1404ED1D0 (MiInsertProcessVads.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x1405BA250 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1405BA858 (MiAllocateNewSubAllocatedRegion.c)
 *     MiInsertChildVads @ 0x1405BFB04 (MiInsertChildVads.c)
 *     MiMapViewOfPhysicalSection @ 0x140646C40 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1407511B4 (MiAllocateEnclaveVad.c)
 * Callees:
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14000AD00 (PsChargeProcessNonPagedPoolQuota.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14000AE70 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14000AE94 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiVadPureReserve @ 0x14000BFF0 (MiVadPureReserve.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400EF7F0 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     PspChargeQuota @ 0x1401049D0 (PspChargeQuota.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiReturnPartitionResidentAvailable @ 0x140265758 (MiReturnPartitionResidentAvailable.c)
 *     MiCommitPageTablesForVad @ 0x1404AF6B0 (MiCommitPageTablesForVad.c)
 *     MiResidentPagesForSpan @ 0x140568E3C (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiInsertVadCharges(__int64 a1, struct _KPROCESS *a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r14
  __int64 result; // rax
  int v12; // ebx
  int v13; // ecx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  int v17; // esi
  unsigned int v18; // esi
  unsigned int v19; // edi
  __int64 v20; // rbx
  unsigned int i; // ebp
  unsigned int v22; // eax
  unsigned int v23; // r9d
  int v24; // r14d
  unsigned int v25; // edx
  unsigned int v26; // r8d
  ULONG_PTR *ProcessPartition; // rax
  __int64 v28; // r9
  __int64 v29; // rcx
  ULONG_PTR *v30; // rax

  v3 = 0LL;
  v4 = 0LL;
  v6 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v7 = *(unsigned int *)(a1 + 52);
  LODWORD(v7) = v7 & 0x7FFFFFFF;
  v8 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
  v9 = v7 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  v10 = v6 << 12;
  if ( v9 >= 0x7FFFFFFFDLL )
  {
    if ( v9 == 0x7FFFFFFFDLL )
    {
      result = PsChargeProcessNonPagedPoolQuota((__int64)a2, 0x40uLL);
      if ( (int)result < 0 )
        return result;
    }
  }
  else
  {
    result = PsChargeProcessNonPagedPoolQuota((__int64)a2, 0x88uLL);
    if ( (int)result < 0 )
      return result;
    if ( (*(_DWORD *)(a1 + 48) & 0x4000) == 0 && !(unsigned int)MiVadPureReserve(a1) )
    {
      v3 = 8
         * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
          - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)))
         + 8;
      if ( a2 != PsInitialSystemProcess )
      {
        v12 = PspChargeQuota(a2[1].ActiveProcessors.Bitmap[4], (__int64)a2, 1, v3);
        if ( v12 < 0 )
        {
          PsReturnProcessNonPagedPoolQuota(a2, 136LL);
          return (unsigned int)v12;
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 48) & 7) != 7 )
    {
      v13 = 74;
      if ( _bittest(&v13, *(_DWORD *)(a1 + 48) & 7) )
      {
        v4 = MiResidentPagesForSpan(v10, v8);
        if ( v4 )
        {
          ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)a2);
          if ( !(unsigned int)MiChargeResident(ProcessPartition, v4, 128LL, v28) )
          {
            v4 = 0LL;
            v17 = -1073741670;
LABEL_33:
            v29 = *(unsigned int *)(a1 + 52);
            LODWORD(v29) = v29 & 0x7FFFFFFF;
            if ( (v29 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) < 0x7FFFFFFFDLL )
              PsReturnProcessNonPagedPoolQuota(a2, 136LL);
            if ( v3 )
              PsReturnProcessPagedPoolQuota(a2, v3);
            if ( v4 )
            {
              v30 = (ULONG_PTR *)MiGetProcessPartition((__int64)a2);
              if ( v30 == &MiSystemPartition )
                MiReturnResidentAvailable(v4);
              else
                MiReturnPartitionResidentAvailable((__int64)v30, v4);
            }
            return (unsigned int)v17;
          }
        }
      }
    }
  }
  v14 = *(unsigned int *)(a1 + 52);
  LODWORD(v14) = v14 & 0x7FFFFFFF;
  v15 = v14 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  if ( v15 < 0x7FFFFFFFDLL || v15 == 0x7FFFFFFFELL )
  {
    CurrentThread = KeGetCurrentThread();
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2);
    v17 = MiCommitPageTablesForVad(a1, v10, v8);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2);
    if ( v17 < 0 )
      goto LABEL_33;
  }
  v18 = (*(_DWORD *)(a1 + 24) >> 4) | (*(unsigned __int8 *)(a1 + 32) << 28);
  v19 = (*(_DWORD *)(a1 + 28) >> 4) | (*(unsigned __int8 *)(a1 + 33) << 28);
  v20 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 48LL;
  for ( i = 0; i < 3; ++i )
  {
    v22 = 8 * (*(_DWORD *)(v20 + 8) - qword_1403CBB68);
    if ( v19 >= v22 )
    {
      v23 = v22 + *(_DWORD *)v20;
      if ( v18 < v23 )
      {
        v24 = 0;
        v25 = v18;
        if ( v18 < v22 )
        {
          v25 = 8 * (*(_DWORD *)(v20 + 8) - qword_1403CBB68);
          v24 = 1;
        }
        if ( v19 >= v23 )
          v24 = 1;
        v26 = v23 - 1;
        if ( v19 < v23 )
          v26 = v19;
        RtlSetBits((PRTL_BITMAP)v20, v25 - v22, v26 - v25 + 1);
        if ( !v24 )
          break;
      }
    }
    v20 += 56LL;
  }
  return 0LL;
}
