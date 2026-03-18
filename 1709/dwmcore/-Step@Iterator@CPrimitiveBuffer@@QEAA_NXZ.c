/*
 * XREFs of ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x18011CBB8
 * Callers:
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x180152638 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CPrimitiveBuffer::Iterator::Step(CPrimitiveBuffer::Iterator *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 == *((_QWORD *)this + 2) )
    return 0;
  *((_QWORD *)this + 1) = v1 + *((unsigned int *)this + 6);
  return 1;
}
