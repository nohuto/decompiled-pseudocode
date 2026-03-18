/*
 * XREFs of MiTransferPartitionPageRun @ 0x14026FE30
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiFreeZeroPageSizeIndex @ 0x140121FC0 (MiFreeZeroPageSizeIndex.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseNonPagedResources @ 0x14013A6A0 (MiReleaseNonPagedResources.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiAcquireNonPagedResourcesForce @ 0x140252618 (MiAcquireNonPagedResourcesForce.c)
 *     MiUnlinkPageFromBadList @ 0x140265518 (MiUnlinkPageFromBadList.c)
 *     MiMoveLargeFreePage @ 0x14026C11C (MiMoveLargeFreePage.c)
 */

__int64 __fastcall MiTransferPartitionPageRun(__int64 a1, unsigned __int16 *a2, ULONG_PTR a3, __int64 a4, KIRQL a5)
{
  ULONG_PTR v5; // rsi
  __int64 v8; // r15
  unsigned __int16 v9; // bp
  int v10; // r13d
  __int64 v11; // rdi
  unsigned __int8 v12; // r12
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rbp
  __int16 v18; // [rsp+70h] [rbp+8h]
  unsigned __int16 v19; // [rsp+78h] [rbp+10h]
  ULONG_PTR v20; // [rsp+80h] [rbp+18h]

  v5 = a3;
  if ( a2 == (unsigned __int16 *)&MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_1403CBD90, -a4);
  v8 = 0LL;
  v9 = *a2;
  v10 = 0;
  v18 = *(_WORD *)a1;
  v19 = *a2;
  v20 = a3 + a4;
  if ( a3 != a3 + a4 )
  {
    while ( (++v10 & 0xF) == 0 && (*(_DWORD *)(a1 + 192) & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
      __writecr8(a5);
      --v5;
      a5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 192));
LABEL_29:
      if ( ++v5 == v20 )
        return v8;
    }
    v11 = 48 * v5 - 0x58000000000LL;
    v12 = MiLockPageInline(v11);
    if ( (((unsigned int)HIDWORD(*(_QWORD *)(v11 + 40)) >> 8) & 0x3FF) == v18 )
    {
      v13 = *(_BYTE *)(v11 + 34) & 7;
      if ( v13 != 5 )
      {
        if ( v13 > 1 )
          goto LABEL_31;
        v14 = MiFreeZeroPageSizeIndex(48 * v5 - 0x58000000000LL);
        if ( v14 != -1 )
        {
          v16 = MiLargePageSizes[v14];
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v12);
          if ( a2 != (unsigned __int16 *)&MiSystemPartition )
          {
            *((_QWORD *)a2 + 858) += v16;
            *((_BYTE *)a2 + 12) = 1;
          }
          if ( (unsigned int)MiMoveLargeFreePage(v5, v14, a1, (__int16 *)a2) == 1 )
          {
            v5 += v16;
            *(_BYTE *)(a1 + 12) = 1;
            v8 += v16;
            *(_QWORD *)(a1 + 6864) -= v16;
          }
          else if ( a2 != (unsigned __int16 *)&MiSystemPartition )
          {
            *((_QWORD *)a2 + 858) -= v16;
            *((_BYTE *)a2 + 12) = 1;
          }
          v9 = v19;
          --v5;
          goto LABEL_29;
        }
        MiUnlinkFreeOrZeroedPage(v5, 0LL, 0, v15);
        if ( a2 != (unsigned __int16 *)&MiSystemPartition )
        {
          ++*((_QWORD *)a2 + 858);
          *((_BYTE *)a2 + 12) = 1;
        }
        --*(_QWORD *)(a1 + 6864);
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
      MiAcquireNonPagedResourcesForce((ULONG_PTR *)a2);
      MiReleaseNonPagedResources(a1, 1uLL);
      *(_QWORD *)(v11 + 40) ^= (*(_QWORD *)(v11 + 40) ^ ((unsigned __int64)v9 << 40)) & 0x3FF0000000000LL;
      if ( a2 != (unsigned __int16 *)&MiSystemPartition )
      {
        ++*((_QWORD *)a2 + 858);
        *((_BYTE *)a2 + 12) = 1;
      }
      --*(_QWORD *)(a1 + 6864);
      *(_BYTE *)(a1 + 12) = 1;
      MiInsertPageInList(48 * v5 - 0x58000000000LL, 0x20u);
      ++v8;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_28:
    __writecr8(v12);
    goto LABEL_29;
  }
  return v8;
}
