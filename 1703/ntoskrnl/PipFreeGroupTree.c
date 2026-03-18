/*
 * XREFs of PipFreeGroupTree @ 0x1407F6A2C
 * Callers:
 *     PipFreeGroupTree @ 0x1407F6A2C (PipFreeGroupTree.c)
 *     IopInitializeSystemDrivers @ 0x1407F8D84 (IopInitializeSystemDrivers.c)
 * Callees:
 *     PipFreeGroupTree @ 0x1407F6A2C (PipFreeGroupTree.c)
 */

void __fastcall PipFreeGroupTree(_QWORD *a1)
{
  if ( *a1 )
    PipFreeGroupTree();
  if ( a1[2] )
    PipFreeGroupTree();
  if ( a1[1] )
    PipFreeGroupTree();
  ExFreePoolWithTag(a1, 0);
}
