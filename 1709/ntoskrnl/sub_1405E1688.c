/*
 * XREFs of sub_1405E1688 @ 0x1405E1688
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1404F44AC (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_1405E16D0 @ 0x1405E16D0 (sub_1405E16D0.c)
 */

__int64 __fastcall sub_1405E1688(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1405E16D0(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
