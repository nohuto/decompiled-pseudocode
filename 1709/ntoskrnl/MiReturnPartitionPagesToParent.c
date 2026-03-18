/*
 * XREFs of MiReturnPartitionPagesToParent @ 0x14023811C
 * Callers:
 *     MiFreePartitionPhysicalPages @ 0x1406EE0C4 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiDrainZeroLookasides @ 0x140031040 (MiDrainZeroLookasides.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1402360CC (MiActOnPartitionNodePages.c)
 */

__int64 __fastcall MiReturnPartitionPagesToParent(__int64 a1)
{
  __int16 *v2; // rbx
  KIRQL v3; // al
  _QWORD *v4; // rcx
  KIRQL v5; // bp
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // rcx
  __int64 result; // rax
  __int16 *v11[8]; // [rsp+20h] [rbp-48h] BYREF

  memset(&v11[1], 0, 0x30uLL);
  v2 = **(__int16 ***)(*(_QWORD *)(a1 + 168) + 56LL);
  MiDrainZeroLookasides(a1, 0LL, 0LL, 0);
  v11[0] = v2;
  v11[1] = (__int16 *)a1;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 192));
  v4 = *(_QWORD **)(a1 + 24);
  v5 = v3;
  LOBYTE(v11[2]) = v3;
  v6 = 0LL;
  while ( v4 )
  {
    v6 = v4;
    v4 = (_QWORD *)*v4;
  }
  while ( v6 )
  {
    v7 = (_QWORD *)v6[1];
    v8 = (__int64)v6;
    v9 = v6;
    if ( v7 )
    {
      do
      {
        v6 = v7;
        v7 = (_QWORD *)*v7;
      }
      while ( v7 );
    }
    else
    {
      while ( 1 )
      {
        v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v6 || (_QWORD *)*v6 == v9 )
          break;
        v9 = v6;
      }
    }
    MiActOnPartitionNodePages(v8, 4u, v11);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  result = v5;
  __writecr8(v5);
  return result;
}
