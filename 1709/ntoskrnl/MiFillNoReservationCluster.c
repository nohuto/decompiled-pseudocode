/*
 * XREFs of MiFillNoReservationCluster @ 0x140225384
 * Callers:
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReservePageFileSpace @ 0x14005CBF4 (MiReservePageFileSpace.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiReferencePageForModifiedWrite @ 0x1400EF550 (MiReferencePageForModifiedWrite.c)
 *     qsort @ 0x14015F450 (qsort.c)
 */

__int64 __fastcall MiFillNoReservationCluster(_DWORD *a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v5; // rbp
  unsigned int v6; // edi
  char v7; // r13
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int8 v10; // r12
  unsigned __int64 v11; // rdx
  int v12; // ecx
  __int64 v14; // [rsp+60h] [rbp+8h]

  if ( !a1[286] || (v5 = &a1[8 * a1[285] + 672 + 2 * a1[285]], !*v5) )
    v5 = a1 + 656;
  v6 = 0;
  v7 = 1;
  do
  {
    v8 = v5[2];
    if ( v8 == 0xFFFFFFFFFLL )
      break;
    v9 = 48 * v8 - 0x58000000000LL;
    v10 = MiLockPageInline(v9);
    if ( v8 != v5[2]
      || a1[255]
      && (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) != 0
      && (v14 = *(_QWORD *)(v9 + 8), v14 < 0)
      && (unsigned int)MiSufficientAvailablePages((__int64)a1, 0xA0uLL)
      && (v11 = v14 | 0x8000000000000000uLL,
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL),
          __writecr8(v10),
          MiReservePageFileSpace((__int64)a1, v11, 0LL),
          v10 = MiLockPageInline(48 * v8 - 0x58000000000LL),
          v8 != v5[2]) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v10);
    }
    else
    {
      v12 = MiReferencePageForModifiedWrite(48 * v8 - 0x58000000000LL, v7);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v10);
      if ( !v12 )
        break;
      *a2 = v8;
      ++v6;
      ++a2;
      v7 &= ~1u;
      if ( v12 == 3 && v6 >= 0x10 )
        break;
    }
  }
  while ( v6 < a3 );
  if ( v6 > 1 )
    qsort(&a2[-v6], v6, 8uLL, MiModifiedWriterNoReservationSort);
  return v6;
}
