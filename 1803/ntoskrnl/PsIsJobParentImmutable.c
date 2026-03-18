/*
 * XREFs of PsIsJobParentImmutable @ 0x14052FD0C
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x1405304F0 (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x14077BA14 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x1407F63F0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsJobParentImmutable(__int64 a1)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 1308) & 1) != 0 )
    return 1;
  result = 0;
  if ( *(_QWORD *)(a1 + 1072) )
    return 1;
  return result;
}
