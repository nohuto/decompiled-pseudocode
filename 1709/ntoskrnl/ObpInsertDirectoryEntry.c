/*
 * XREFs of ObpInsertDirectoryEntry @ 0x140577208
 * Callers:
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     ObCreateObjectTypeEx @ 0x1405C6D8C (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 * Callees:
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

char __fastcall ObpInsertDirectoryEntry(char *Object, char *a2, __int64 a3)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  char *v8; // rdx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x6944624Fu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    ObfReferenceObject(a2);
    v8 = &Object[8 * *(unsigned __int16 *)(a3 + 28)];
    v7[4] = *(_DWORD *)(a3 + 24);
    *(_QWORD *)v7 = *(_QWORD *)v8;
    *(_QWORD *)v8 = v7;
    *((_QWORD *)v7 + 1) = a2;
    *(_QWORD *)(a3 + 16) = v8;
    ObfReferenceObject(Object);
    LOBYTE(PoolWithTag) = 1;
    *(_QWORD *)&a2[-ObpInfoMaskToOffset[*(a2 - 22) & 3] - 48] = Object;
  }
  return (char)PoolWithTag;
}
