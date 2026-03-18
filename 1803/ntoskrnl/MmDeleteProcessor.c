/*
 * XREFs of MmDeleteProcessor @ 0x14025258C
 * Callers:
 *     MmInitializeProcessor @ 0x14047BD90 (MmInitializeProcessor.c)
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1408AB748 (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiDeleteUltraThreadContext @ 0x14013A5C4 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MmDeleteProcessor(__int64 a1)
{
  unsigned __int64 v1; // rdx
  void *v3; // rdi

  v1 = *(_QWORD *)(a1 + 24320);
  if ( v1 )
  {
    MiReleasePtes((__int64)&qword_1403CC5E0, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x40uLL);
    *(_QWORD *)(a1 + 24320) = 0LL;
  }
  v3 = *(void **)(a1 + 23800);
  if ( v3 )
  {
    MiDeleteUltraThreadContext((__int64)v3 + 12352);
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 23800) = 0LL;
  }
}
