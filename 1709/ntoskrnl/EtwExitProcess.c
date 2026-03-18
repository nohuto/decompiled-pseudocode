/*
 * XREFs of EtwExitProcess @ 0x1404FCE20
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall EtwExitProcess(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(a1 + 1080);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 1080) = 0LL;
    if ( *(_QWORD *)v1 )
      ObfDereferenceObject(*(PVOID *)v1);
    v2 = *(void **)(v1 + 8);
    if ( v2 )
      ObfDereferenceObject(v2);
    ExFreePoolWithTag((PVOID)v1, 0);
  }
}
