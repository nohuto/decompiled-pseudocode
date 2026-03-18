/*
 * XREFs of SeSetSecurityAccessMask @ 0x140488880
 * Callers:
 *     NtSetSecurityObject @ 0x140488560 (NtSetSecurityObject.c)
 *     IoCheckFunctionAccess @ 0x1405CBD10 (IoCheckFunctionAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeSetSecurityAccessMask(int a1, int *a2)
{
  int v2; // eax
  __int64 result; // rax

  *a2 = 0;
  v2 = *a2;
  if ( (a1 & 0x10000) != 0 )
    v2 = 17563648;
  *a2 = v2;
  if ( (a1 & 0x13) != 0 )
    *a2 |= 0x80000u;
  if ( (a1 & 4) != 0 )
    *a2 |= 0x40000u;
  if ( (a1 & 0x20) != 0 )
    *a2 |= 0x40000u;
  if ( (a1 & 0x80u) != 0 )
    *a2 |= 0x40000u;
  if ( (a1 & 0x100) != 0 )
    *a2 |= 0x40000u;
  result = 0x1000000LL;
  if ( (a1 & 0x40) != 0 )
    *a2 |= 0x1000000u;
  if ( (a1 & 8) != 0 )
    *a2 |= 0x1000000u;
  if ( (a1 & 0x1F8) != 0 && (a1 & 0x50000000) != 0 )
    *a2 |= 0x1000000u;
  return result;
}
