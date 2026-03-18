/*
 * XREFs of ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00FEA64
 * Callers:
 *     ??1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ @ 0x1C00FDDB8 (--1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C00FE9B8 (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPointerHashTable::Destroy(struct NSInstrumentation::CPointerHashTable *a1)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)a1 + 4);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(a1, 0);
}
