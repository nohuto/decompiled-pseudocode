/*
 * XREFs of PspIsJobMovable @ 0x14077BA14
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x1405304F0 (PspGetJobAssignmentDisposition.c)
 *     PspAssignProcessToJob @ 0x1405306C8 (PspAssignProcessToJob.c)
 * Callees:
 *     PsIsJobParentImmutable @ 0x14052FD0C (PsIsJobParentImmutable.c)
 */

char __fastcall PspIsJobMovable(__int64 a1)
{
  __int64 v1; // rcx
  char result; // al

  if ( *(_QWORD *)(a1 + 1552) != a1 )
    return 0;
  if ( PsIsJobParentImmutable(a1) )
    return 0;
  if ( *(_QWORD *)(v1 + 1056) != v1 + 1056 )
    return 0;
  result = 1;
  if ( *(_DWORD *)(v1 + 216) != 1 || *(_DWORD *)(v1 + 212) != 1 )
    return 0;
  return result;
}
