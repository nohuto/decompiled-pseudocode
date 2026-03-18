/*
 * XREFs of FindRSAccess @ 0x1C0020B7C
 * Callers:
 *     RegRSAccess @ 0x1C001185C (RegRSAccess.c)
 *     WriteField @ 0x1C00209B8 (WriteField.c)
 *     RawFieldAccess @ 0x1C005FD04 (RawFieldAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindRSAccess(int a1)
{
  __int64 result; // rax

  for ( result = gpRSAccessHead; result && *(_DWORD *)(result + 8) != a1; result = *(_QWORD *)result )
    ;
  return result;
}
