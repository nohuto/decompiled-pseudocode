/*
 * XREFs of ExpSaBinaryArrayRemove @ 0x14015252C
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014F6A4 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1401522A0 (ExpSaPageGroupDescriptorFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaBinaryArrayRemove(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  _BitScanReverse(&v3, a2);
  v4 = 1 << v3;
  v5 = v3 - 2;
  v6 = a2 ^ v4;
  v7 = (unsigned int)v5;
  v8 = *(_QWORD **)(a1 + 8 * v5);
  v8[v6 + 1] = 0LL;
  if ( (*v8)-- == 1LL )
  {
    *(_QWORD *)(a1 + 8 * v7) = 0LL;
    ExFreePoolWithTag(v8, 0);
  }
}
