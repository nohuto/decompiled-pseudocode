/*
 * XREFs of ObpReleaseLookupContext @ 0x140087EE4
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x14044E9DC (ObpCreateSymbolicLinkName.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1404F3D70 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404F3FB0 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteNameCheck @ 0x1404F5F80 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x140530A90 (ObCloseHandleTableEntry.c)
 *     ObCreateObjectTypeEx @ 0x14059EB6C (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

void __fastcall ObpReleaseLookupContext(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *(_BYTE *)(a1 + 30) )
  {
    ExReleasePushLockEx(*(_QWORD *)a1 + 296LL, 0LL);
    v2 = *(void **)a1;
    *(_DWORD *)(a1 + 32) = -286387660;
    ObfDereferenceObject(v2);
    *(_QWORD *)a1 = 0LL;
    *(_WORD *)(a1 + 30) = 0;
    KeLeaveCriticalRegion();
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
