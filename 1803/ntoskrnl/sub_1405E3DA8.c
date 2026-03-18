/*
 * XREFs of sub_1405E3DA8 @ 0x1405E3DA8
 * Callers:
 *     sub_1405E3D64 @ 0x1405E3D64 (sub_1405E3D64.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405E3DA8(_QWORD *a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    result = 0LL;
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return result;
}
