/*
 * XREFs of EtwExitProcess @ 0x140511C08
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpCovSampProcessCleanup @ 0x1407B6A0C (EtwpCovSampProcessCleanup.c)
 */

void __fastcall EtwExitProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v4; // rcx
  void *v5; // rbx

  v2 = *(_QWORD *)(a1 + 1080);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1080) = 0LL;
    if ( *(_QWORD *)v2 )
      ObfDereferenceObject(*(PVOID *)v2);
    v4 = *(void **)(v2 + 8);
    if ( v4 )
      ObfDereferenceObject(v4);
    ExFreePoolWithTag((PVOID)v2, 0);
  }
  v5 = *(void **)(a1 + 2112);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 2112) = 0LL;
    LOBYTE(a2) = 1;
    EtwpCovSampProcessCleanup(v5, a2);
    ExFreePoolWithTag(v5, 0x56777445u);
  }
}
