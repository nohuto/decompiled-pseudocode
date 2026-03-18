/*
 * XREFs of sub_1404AE384 @ 0x1404AE384
 * Callers:
 *     ExpGetKernelDataProtection @ 0x1404AE3CC (ExpGetKernelDataProtection.c)
 *     ExpSetKernelDataProtection @ 0x1404AE780 (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_1404AE1B4 @ 0x1404AE1B4 (sub_1404AE1B4.c)
 */

__int64 __fastcall sub_1404AE384(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1404AE1B4(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
