/*
 * XREFs of FindRSAccess @ 0x1C0017018
 * Callers:
 *     SupportsOnlyRawAccess @ 0x1C0013D14 (SupportsOnlyRawAccess.c)
 *     WriteField @ 0x1C0017038 (WriteField.c)
 *     RegRSAccess @ 0x1C00271C8 (RegRSAccess.c)
 *     RawFieldAccess @ 0x1C005EB24 (RawFieldAccess.c)
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
