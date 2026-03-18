/*
 * XREFs of MiReferenceFileObjectForMap @ 0x1404B5910
 * Callers:
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 * Callees:
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 */

unsigned __int64 __fastcall MiReferenceFileObjectForMap(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 3) != 0 )
    ObfReferenceObject((PVOID)(v1 & 0xFFFFFFFFFFFFFFFCuLL));
  return v1 & 0xFFFFFFFFFFFFFFFCuLL & -(__int64)((v1 & 3) != 0);
}
