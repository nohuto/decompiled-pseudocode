/*
 * XREFs of MiFillNoReservationCluster @ 0x1400BC0FC
 * Callers:
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReservePageFileSpace @ 0x140053430 (MiReservePageFileSpace.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     MiReferencePageForModifiedWrite @ 0x140131E00 (MiReferencePageForModifiedWrite.c)
 *     qsort @ 0x140189210 (qsort.c)
 */

__int64 __fastcall MiFillNoReservationCluster(_DWORD *a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v5; // rbp
  unsigned int v6; // edi
  int v7; // r13d
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int8 v10; // r12
  int v11; // ecx
  __int64 v13; // [rsp+60h] [rbp+8h]

  if ( !a1[286] || (v5 = &a1[8 * a1[285] + 688 + 2 * a1[285]], !*v5) )
    v5 = a1 + 672;
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
      && (v13 = *(_QWORD *)(v9 + 8), v13 < 0)
      && (unsigned int)MiSufficientAvailablePages(a1, 160LL)
      && (_InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL),
          __writecr8(v10),
          MiReservePageFileSpace((__int64)a1, v13 | 0x8000000000000000uLL, 0LL),
          v10 = MiLockPageInline(48 * v8 - 0x58000000000LL),
          v8 != v5[2]) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v10);
    }
    else
    {
      v11 = MiReferencePageForModifiedWrite(48 * v8 - 0x58000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v10);
      if ( !v11 )
        break;
      *a2 = v8;
      ++v6;
      ++a2;
      v7 &= ~1u;
      if ( v11 == 3 && v6 >= 0x10 )
        break;
    }
  }
  while ( v6 < a3 );
  if ( v6 > 1 )
    qsort(&a2[-v6], v6, 8uLL, (int (__cdecl *)(const void *, const void *))MiModifiedWriterNoReservationSort);
  return v6;
}
