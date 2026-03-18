/*
 * XREFs of sub_14059E238 @ 0x14059E238
 * Callers:
 *     WbGetWarbirdThread @ 0x140501880 (WbGetWarbirdThread.c)
 *     sub_140502100 @ 0x140502100 (sub_140502100.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     sub_140502134 @ 0x140502134 (sub_140502134.c)
 */

__int64 __fastcall sub_14059E238(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = sub_140502134(a1, (__int64)a2, -1);
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
