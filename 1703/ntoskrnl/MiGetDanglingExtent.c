/*
 * XREFs of MiGetDanglingExtent @ 0x140218C18
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiGetDanglingExtent(_QWORD *a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  KIRQL v4; // al
  _QWORD *v5; // rdx
  KIRQL v6; // bl
  _QWORD *v7; // rax
  _QWORD *v9; // r14
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 i; // rbx

  *a1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = ExAcquireSpinLockExclusive(&dword_14036BF28);
  v5 = (_QWORD *)qword_14036BF20;
  v6 = v4;
  do
  {
    v7 = v5;
    if ( !v5 )
      break;
    if ( !v2 )
      v3 = v5;
    v5 = (_QWORD *)*v5;
    ++v2;
    qword_14036BF20 = (__int64)v5;
  }
  while ( v5 == v7 - 6 );
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BF28);
  __writecr8(v6);
  if ( !v2 )
    return -1LL;
  v9 = &v3[-6 * v2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = (unsigned __int64)(v9 + 6); i <= (unsigned __int64)v3; i += 48LL )
  {
    MiLockPageAtDpcInline(i);
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  __writecr8(CurrentIrql);
  *a1 = v2;
  return (__int64)(v9 + 0xB000000006LL) / 48;
}
