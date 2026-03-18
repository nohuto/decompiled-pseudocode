/*
 * XREFs of ObpDeleteDirectoryEntry @ 0x140441E08
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1404F3FB0 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteNameCheck @ 0x1404F5F80 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x140530A90 (ObCloseHandleTableEntry.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

char __fastcall ObpDeleteDirectoryEntry(__int64 a1)
{
  _QWORD **v1; // rdx
  void *v2; // rdi
  _QWORD *v3; // rbx

  v1 = *(_QWORD ***)(a1 + 16);
  v2 = *(void **)a1;
  v3 = *v1;
  *v1 = (_QWORD *)**v1;
  *v3 = 0LL;
  *(_QWORD *)(v3[1] - 48LL - ObpInfoMaskToOffset[*(_BYTE *)(v3[1] - 48LL + 26) & 3]) = 0LL;
  ObfDereferenceObject((PVOID)v3[1]);
  ExFreePoolWithTag(v3, 0);
  ObfDereferenceObject(v2);
  return 1;
}
