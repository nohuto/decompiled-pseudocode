/*
 * XREFs of MiTransferPartitionPageRun @ 0x14021EA0C
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14021CCD8 (MiActOnPartitionNodePages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400B6080 (MiFreeZeroPageSizeIndex.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7FC0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiUnlinkPageFromBadList @ 0x14021F3D4 (MiUnlinkPageFromBadList.c)
 *     MiMoveLargeFreePage @ 0x1402244C0 (MiMoveLargeFreePage.c)
 */

__int64 __fastcall MiTransferPartitionPageRun(
        volatile LONG *a1,
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
  unsigned int v14; // eax
  __int64 v15; // rbp
  __int16 v17; // [rsp+70h] [rbp+8h]
  unsigned __int16 v18; // [rsp+78h] [rbp+10h]
  __int64 v19; // [rsp+80h] [rbp+18h]

  v5 = a3;
  if ( a2 == (unsigned __int16 *)&MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_14036C900, -a4);
  v8 = 0LL;
  v9 = *a2;
  v10 = 0;
  v17 = *(_WORD *)a1;
  v18 = *a2;
  v19 = a3 + a4;
  if ( a3 != a3 + a4 )
  {
    while ( (++v10 & 0xF) == 0 && (a1[58] & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(a1 + 58);
      __writecr8(a5);
      --v5;
      a5 = ExAcquireSpinLockExclusive(a1 + 58);
LABEL_29:
      if ( ++v5 == v19 )
        return v8;
    }
    v11 = 48 * v5 - 0x58000000000LL;
    v12 = MiLockPageInline(v11);
    if ( (((unsigned int)HIDWORD(*(_QWORD *)(v11 + 40)) >> 8) & 0x3FF) == v17 )
    {
      v13 = *(_BYTE *)(v11 + 34) & 7;
      if ( v13 != 5 )
      {
        if ( v13 > 1 )
          goto LABEL_31;
        v14 = MiFreeZeroPageSizeIndex(48 * v5 - 0x58000000000LL);
        if ( v14 != -1 )
        {
          v15 = MiLargePageSizes[v14];
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v12);
          if ( a2 != (unsigned __int16 *)&MiSystemPartition )
          {
            *((_QWORD *)a2 + 698) += v15;
            *((_BYTE *)a2 + 12) = 1;
          }
          if ( (unsigned int)MiMoveLargeFreePage(v5, v14, a1, a2) == 1 )
          {
            v5 += v15;
            *((_BYTE *)a1 + 12) = 1;
            v8 += v15;
            *((_QWORD *)a1 + 698) -= v15;
          }
          else if ( a2 != (unsigned __int16 *)&MiSystemPartition )
          {
            *((_QWORD *)a2 + 698) -= v15;
            *((_BYTE *)a2 + 12) = 1;
          }
          v9 = v18;
          --v5;
          goto LABEL_29;
        }
        MiUnlinkFreeOrZeroedPage(v5, 0LL, 0);
        if ( a2 != (unsigned __int16 *)&MiSystemPartition )
        {
          ++*((_QWORD *)a2 + 698);
          *((_BYTE *)a2 + 12) = 1;
        }
        --*((_QWORD *)a1 + 698);
        *((_BYTE *)a1 + 12) = 1;
        *(_QWORD *)(v11 + 40) ^= (*(_QWORD *)(v11 + 40) ^ ((unsigned __int64)v9 << 40)) & 0x3FF0000000000LL;
        MiInsertPageInFreeOrZeroedList(v5, (*(_QWORD *)(v11 + 16) != 0LL) + 1);
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
      MiUnlinkPageFromBadList(48 * v5 - 0x58000000000LL);
      *(_QWORD *)(v11 + 40) ^= (*(_QWORD *)(v11 + 40) ^ ((unsigned __int64)v9 << 40)) & 0x3FF0000000000LL;
      if ( a2 != (unsigned __int16 *)&MiSystemPartition )
      {
        ++*((_QWORD *)a2 + 698);
        *((_BYTE *)a2 + 12) = 1;
      }
      --*((_QWORD *)a1 + 698);
      *((_BYTE *)a1 + 12) = 1;
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
