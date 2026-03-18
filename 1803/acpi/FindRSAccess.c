/*
 * XREFs of FindRSAccess @ 0x1C00467E8
 * Callers:
 *     RegRSAccess @ 0x1C0047BD4 (RegRSAccess.c)
 *     AccessBaseField @ 0x1C004C1C0 (AccessBaseField.c)
 *     RawFieldAccess @ 0x1C004D144 (RawFieldAccess.c)
 *     SupportsOnlyRawAccess @ 0x1C004D9F0 (SupportsOnlyRawAccess.c)
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
