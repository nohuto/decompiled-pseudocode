/*
 * XREFs of MiProcessLargeCoalesceList @ 0x14006FDBC
 * Callers:
 *     MiRebuildLargeZeroPage @ 0x14006FC10 (MiRebuildLargeZeroPage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiCoalesceFreeLargePages @ 0x1400E89A0 (MiCoalesceFreeLargePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiProcessLargeCoalesceList(__int64 a1, unsigned __int16 *a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // ebx
  _QWORD *v9; // rsi
  __int64 result; // rax
  volatile LONG *v12; // r14
  KIRQL v13; // al
  unsigned __int16 v14; // cx
  __int64 v15; // rdx
  KIRQL v16; // r12
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // rax

  v5 = 0;
  while ( 1 )
  {
    v9 = (_QWORD *)(a3 + 8 * (v5 + 1LL));
    if ( *v9 )
      break;
LABEL_3:
    ++v5;
    result = 64LL;
    if ( v5 >= 0x40 )
      return result;
  }
  MiCoalesceFreeLargePages(a1, *v9, a4);
  result = 0xFFFFLL;
  *v9 = 0LL;
  if ( (*(_WORD *)(a3 + 2))-- != 1 )
  {
    if ( a2[1] )
    {
      v12 = (volatile LONG *)(a1 + 6116);
      v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 6116));
      v14 = a2[1];
      v15 = *a2;
      v16 = v13;
      if ( v14 )
      {
        do
        {
          v17 = *(_QWORD *)&a2[4 * v15 + 4];
          if ( v17 )
          {
            if ( *v9 )
            {
              do
              {
                v19 = 0LL;
                if ( v5 != 63 )
                  v19 = v5 + 1;
                v5 = v19;
              }
              while ( *(_QWORD *)(a3 + 8 * v19 + 8) );
            }
            *(_QWORD *)&a2[4 * v15 + 4] = 0LL;
            v14 = a2[1] - 1;
            a2[1] = v14;
            v9 = (_QWORD *)(a3 + 8 * (v5 + 1LL));
            *v9 = v17;
            if ( ++*(_WORD *)(a3 + 2) == 64 )
              break;
          }
          v18 = v15 + 1;
          v15 = 0LL;
          if ( v18 != 64 )
            v15 = v18;
        }
        while ( v14 );
        v12 = (volatile LONG *)(a1 + 6116);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v12);
      __writecr8(v16);
      v5 = -1;
    }
    goto LABEL_3;
  }
  return result;
}
