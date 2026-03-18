/*
 * XREFs of SeQuerySecurityAccessMask @ 0x140490C38
 * Callers:
 *     NtQuerySecurityObject @ 0x140490AC0 (NtQuerySecurityObject.c)
 *     IoCheckFunctionAccess @ 0x1405CBD10 (IoCheckFunctionAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQuerySecurityAccessMask(int a1, int *a2)
{
  int v2; // eax
  __int64 result; // rax

  *a2 = 0;
  v2 = *a2;
  if ( (a1 & 0x10000) != 0 )
    v2 = 16908288;
  *a2 = v2;
  result = 0x20000LL;
  if ( (a1 & 0x17) != 0 )
    *a2 |= 0x20000u;
  if ( (a1 & 0x20) != 0 )
    *a2 |= 0x20000u;
  if ( (a1 & 0x40) != 0 )
    *a2 |= 0x20000u;
  if ( (a1 & 0x80u) != 0 )
    *a2 |= 0x20000u;
  if ( (a1 & 0x100) != 0 )
    *a2 |= 0x20000u;
  if ( (a1 & 8) != 0 )
    *a2 |= 0x1000000u;
  return result;
}
