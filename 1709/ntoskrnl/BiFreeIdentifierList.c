/*
 * XREFs of BiFreeIdentifierList @ 0x14077C034
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x14077A9B8 (BiBindEfiNamespaceObjects.c)
 *     BiBuildIdentifierList @ 0x14077AA54 (BiBuildIdentifierList.c)
 *     BiExportStoreAlterationsToEfi @ 0x14077BF94 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall BiFreeIdentifierList(_QWORD **a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  void **v5; // rcx
  void *v6; // rcx

  v1 = *a1;
  while ( v1 != a1 )
  {
    v3 = v1;
    v1 = (_QWORD *)*v1;
    v4 = (_QWORD *)*v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (void **)v3[1], *v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    if ( (v3[6] & 1) != 0 )
    {
      v6 = (void *)v3[5];
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
    }
    ExFreePoolWithTag(v3, 0x4B444342u);
  }
}
