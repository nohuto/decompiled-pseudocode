/*
 * XREFs of MiTransferPartitionPageRun @ 0x140238208
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402360CC (MiActOnPartitionNodePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140050BA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400C70F0 (MiFreeZeroPageSizeIndex.c)
 *     MiReleaseNonPagedResources @ 0x1400CF13C (MiReleaseNonPagedResources.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiAcquireNonPagedResourcesForce @ 0x140214450 (MiAcquireNonPagedResourcesForce.c)
 *     MiUnlinkPageFromBadList @ 0x14022AA0C (MiUnlinkPageFromBadList.c)
 *     MiMoveLargeFreePage @ 0x14023312C (MiMoveLargeFreePage.c)
 */

__int64 __fastcall MiTransferPartitionPageRun(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int64 a3,
        __int64 a4,
        KIRQL a5)
{
  unsigned __int64 v5; // rsi
  __int64 v8; // r15
  unsigned __int16 v9; // bp
  int v10; // r13d
  __int64 v11; // rbx
  unsigned __int8 v12; // r12
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  __int64 v18; // rbp
  __int16 v20; // [rsp+70h] [rbp+8h]
  unsigned __int16 v21; // [rsp+78h] [rbp+10h]
  __int64 v22; // [rsp+80h] [rbp+18h]

  v5 = a3;
  if ( a2 == (unsigned __int16 *)&MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140388AF8, -a4);
  v8 = 0LL;
  v9 = *a2;
  v10 = 0;
  v20 = *(_WORD *)a1;
  v21 = *a2;
  v22 = a3 + a4;
  if ( a3 != a3 + a4 )
  {
    while ( (++v10 & 0xF) == 0 && (*(_DWORD *)(a1 + 192) & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
      __writecr8(a5);
      --v5;
      a5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 192));
LABEL_29:
      if ( ++v5 == v22 )
        return v8;
    }
    v11 = 48 * v5 - 0x58000000000LL;
    v12 = MiLockPageInline(v11);
    if ( (((unsigned int)HIDWORD(*(_QWORD *)(v11 + 40)) >> 8) & 0x3FF) == v20 )
    {
      v13 = *(_BYTE *)(v11 + 34) & 7;
      if ( v13 != 5 )
      {
        if ( v13 > 1 )
          goto LABEL_31;
        v17 = MiFreeZeroPageSizeIndex(48 * v5 - 0x58000000000LL);
        if ( v17 != -1 )
        {
          v18 = MiLargePageSizes[v17];
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v12);
          if ( a2 != (unsigned __int16 *)&MiSystemPartition )
          {
            *((_QWORD *)a2 + 722) += v18;
            *((_BYTE *)a2 + 12) = 1;
          }
          if ( (unsigned int)MiMoveLargeFreePage(v5, v17, a1, (__int16 *)a2) == 1 )
          {
            v5 += v18;
            *(_BYTE *)(a1 + 12) = 1;
            v8 += v18;
            *(_QWORD *)(a1 + 5776) -= v18;
          }
          else if ( a2 != (unsigned __int16 *)&MiSystemPartition )
          {
            *((_QWORD *)a2 + 722) -= v18;
            *((_BYTE *)a2 + 12) = 1;
          }
          v9 = v21;
          --v5;
          goto LABEL_29;
        }
        MiUnlinkFreeOrZeroedPage(v5, 0LL, 0);
        if ( a2 != (unsigned __int16 *)&MiSystemPartition )
        {
          ++*((_QWORD *)a2 + 722);
          *((_BYTE *)a2 + 12) = 1;
        }
        --*(_QWORD *)(a1 + 5776);
        *(_BYTE *)(a1 + 12) = 1;
        *(_QWORD *)(v11 + 40) ^= (*(_QWORD *)(v11 + 40) ^ ((unsigned __int64)v9 << 40)) & 0x3FF0000000000LL;
        MiInsertPageInFreeOrZeroedList(v5, ((*(_DWORD *)(v11 + 16) & 0x3E0) != 0LL) + 1);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        ++v8;
        goto LABEL_28;
      }
      if ( (*(_BYTE *)(v11 + 35) & 0x40) == 0 || (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) != 0xFFFFFFFFFFFFFFFCuLL )
      {
LABEL_31:
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v12);
        KeBugCheckEx(0x1Au, 0x41000uLL, v5, v13, 0LL);
      }
      MiUnlinkPageFromBadList((_QWORD *)(48 * v5 - 0x58000000000LL), 0);
      MiAcquireNonPagedResourcesForce((ULONG_PTR *)a2, v14, v15, v16);
      MiReleaseNonPagedResources(a1, 1uLL);
      *(_QWORD *)(v11 + 40) ^= (*(_QWORD *)(v11 + 40) ^ ((unsigned __int64)v9 << 40)) & 0x3FF0000000000LL;
      if ( a2 != (unsigned __int16 *)&MiSystemPartition )
      {
        ++*((_QWORD *)a2 + 722);
        *((_BYTE *)a2 + 12) = 1;
      }
      --*(_QWORD *)(a1 + 5776);
      *(_BYTE *)(a1 + 12) = 1;
      MiInsertPageInList(48 * v5 - 0x58000000000LL, 32);
      ++v8;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_28:
    __writecr8(v12);
    goto LABEL_29;
  }
  return v8;
}
