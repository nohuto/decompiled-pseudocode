/*
 * XREFs of sub_140584440 @ 0x140584440
 * Callers:
 *     sub_14050F0D8 @ 0x14050F0D8 (sub_14050F0D8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     sub_14050F6D0 @ 0x14050F6D0 (sub_14050F6D0.c)
 */

__int64 __fastcall sub_140584440(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = sub_14050F6D0(a1, (__int64)a2, -1);
    if ( v3 >= 0 )
    {
      v4 = (void *)a2[3];
      if ( v4 )
        ExFreePoolWithTag(v4, 0x42524157u);
      ExFreePoolWithTag(a2, 0x42524157u);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v3;
}
