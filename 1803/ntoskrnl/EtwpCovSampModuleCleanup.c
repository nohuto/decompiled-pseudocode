/*
 * XREFs of EtwpCovSampModuleCleanup @ 0x1407B65C4
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x1407B47B0 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampContextPruneModules @ 0x1407B55E4 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x1407B5B40 (EtwpCovSampContextRemoveAndFreeModule.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x1407B6744 (EtwpCovSampModuleNameInfoCleanup.c)
 */

void __fastcall EtwpCovSampModuleCleanup(__int64 a1)
{
  _QWORD *v2; // rcx
  void *v3; // rcx

  v2 = (_QWORD *)(a1 + 104);
  if ( *v2 )
  {
    EtwpCovSampModuleNameInfoCleanup(v2);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_WORD *)(a1 + 120) = 0;
  }
  v3 = *(void **)(a1 + 48);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_DWORD *)(a1 + 56) = 0;
  }
}
