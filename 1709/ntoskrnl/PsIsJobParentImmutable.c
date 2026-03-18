/*
 * XREFs of PsIsJobParentImmutable @ 0x14050BB94
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x14050BE50 (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x1407179F4 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x140789F30 (ObCreateSiloRootDirectory.c)
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
