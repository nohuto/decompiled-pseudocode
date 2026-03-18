/*
 * XREFs of MiReturnPartitionPagesToParent @ 0x14026FD38
 * Callers:
 *     MiFreePartitionPhysicalPages @ 0x140757554 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiDrainZeroLookasides @ 0x1400B1B20 (MiDrainZeroLookasides.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 */

__int64 __fastcall MiReturnPartitionPagesToParent(__int64 a1)
{
  __int16 *v2; // rbx
  KIRQL v3; // al
  _QWORD *v4; // rcx
  KIRQL v5; // bp
  _QWORD *i; // rbx
  _QWORD **v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  __int64 result; // rax
  __int16 *v12[8]; // [rsp+20h] [rbp-48h] BYREF

  memset(v12, 0, 0x38uLL);
  v2 = **(__int16 ***)(*(_QWORD *)(a1 + 168) + 56LL);
  MiDrainZeroLookasides(a1, 0LL, 0LL, 0);
  v12[0] = v2;
  v12[1] = (__int16 *)a1;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 192));
  v4 = *(_QWORD **)(a1 + 24);
  v5 = v3;
  LOBYTE(v12[2]) = v3;
  i = 0LL;
  while ( v4 )
  {
    i = v4;
    v4 = (_QWORD *)*v4;
  }
  while ( i )
  {
    v7 = (_QWORD **)i[1];
    v8 = (__int64)i;
    v9 = i;
    if ( v7 )
    {
      v10 = *v7;
      for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
        i = v10;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v9 )
          break;
        v9 = i;
      }
    }
    MiActOnPartitionNodePages(v8, 4u, v12);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  result = v5;
  __writecr8(v5);
  return result;
}
