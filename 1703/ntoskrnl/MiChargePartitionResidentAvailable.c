/*
 * XREFs of MiChargePartitionResidentAvailable @ 0x14000D798
 * Callers:
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiProbeLockFrame @ 0x1400B3EF0 (MiProbeLockFrame.c)
 *     MiLockPageTablePage @ 0x1400B50F0 (MiLockPageTablePage.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiChargeForLockedPage @ 0x1400CCDF0 (MiChargeForLockedPage.c)
 *     MiObtainFaultCharges @ 0x1400CDE40 (MiObtainFaultCharges.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MiChargePartitionResidentAvailable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  signed __int64 v5; // r11
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  signed __int64 v8; // r11
  unsigned int v9; // r10d
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int CachedResidentAvailable; // eax
  __int64 v12; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rdi
  unsigned __int32 v16; // eax
  unsigned __int64 v17; // r8

  if ( a2 + a3 < a2 && a3 != 0xFFFFFFFFLL )
  {
    ++dword_14036CA34;
    return 0LL;
  }
  v5 = *(_QWORD *)(a1 + 5824);
  v6 = 0LL;
  if ( v5 < 1024 && (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v14 = KiProcessorBlock;
      v15 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *(_DWORD *)(*v14 + 24764) != -1 )
        {
          v16 = _InterlockedExchange((volatile __int32 *)(*v14 + 24764), -1);
          if ( v16 != -1 )
            v6 += v16;
        }
        ++v14;
        --v15;
      }
      while ( v15 );
    }
    if ( v6 >= a2 )
    {
      v17 = v6 - a2;
      if ( v17 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), v17);
      return 3LL;
    }
    a2 -= v6;
  }
  if ( v5 > 0 )
  {
    while ( 1 )
    {
      if ( a2 + a3 > v5 && a3 != 0xFFFFFFFFLL )
        goto LABEL_36;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5824), v5 - a2, v5);
      if ( v5 == v7 )
        break;
      v5 = v7;
      if ( v7 <= 0 )
        goto LABEL_35;
    }
    v8 = v5 - a2;
    v9 = (v8 < 1024) + 2;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( CachedResidentAvailable == -1 )
      {
        if ( v8 >= 2048 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable, 0, -1);
          CachedResidentAvailable = 0;
LABEL_9:
          if ( v8 > 1024 )
          {
            v12 = 128 - CachedResidentAvailable;
            if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5824), v8 - v12, v8) )
              MiReturnResidentAvailable(v12, v8 - v12, v6);
          }
        }
      }
      else if ( CachedResidentAvailable < 0x40 )
      {
        goto LABEL_9;
      }
    }
    return v9;
  }
LABEL_35:
  if ( a3 != 0xFFFFFFFFLL )
  {
LABEL_36:
    ++dword_14036CA38;
    if ( v6 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), v6);
    return 0LL;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), -(__int64)a2);
  return 3LL;
}
