/*
 * XREFs of sub_1405CCC0C @ 0x1405CCC0C
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1404AE780 (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_1405CCC54 @ 0x1405CCC54 (sub_1405CCC54.c)
 */

__int64 __fastcall sub_1405CCC0C(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1405CCC54(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
