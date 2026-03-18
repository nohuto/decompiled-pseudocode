/*
 * XREFs of MiFillNoReservationCluster @ 0x14002DC7C
 * Callers:
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiReservePageFileSpace @ 0x140104518 (MiReservePageFileSpace.c)
 *     MiReferencePageForModifiedWrite @ 0x14010EC0C (MiReferencePageForModifiedWrite.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 */

__int64 __fastcall MiFillNoReservationCluster(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v5; // rbp
  unsigned int v6; // edi
  int v7; // r13d
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int8 v10; // r12
  int v11; // ecx
  unsigned __int64 v13; // rdx

  if ( !*(_DWORD *)(a1 + 1192) || (v5 = (_QWORD *)(a1 + 40 * (*(unsigned int *)(a1 + 1188) + 64LL)), !*v5) )
    v5 = (_QWORD *)(a1 + 2496);
  v6 = 0;
  v7 = 1;
  do
  {
    v8 = v5[2];
    if ( v8 == 0xFFFFFFFFFLL )
      break;
    v9 = 48 * v8 - 0x58000000000LL;
    v10 = MiLockPageInline(v9);
    if ( v8 == v5[2]
      && (!*(_DWORD *)(a1 + 1068)
       || (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) == 0
       || *(__int64 *)(v9 + 8) >= 0
       || *(_QWORD *)(a1 + 5760) <= 0xA0uLL
       || (v13 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL,
           _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL),
           __writecr8(v10),
           MiReservePageFileSpace(a1, v13, 0LL),
           v10 = MiLockPageInline(48 * v8 - 0x58000000000LL),
           v8 == v5[2])) )
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
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v10);
    }
  }
  while ( v6 < a3 );
  if ( v6 > 1 )
    qsort(&a2[-v6], v6, 8uLL, (int (__cdecl *)(const void *, const void *))MiModifiedWriterNoReservationSort);
  return v6;
}
