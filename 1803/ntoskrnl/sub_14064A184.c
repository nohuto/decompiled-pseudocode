/*
 * XREFs of sub_14064A184 @ 0x14064A184
 * Callers:
 *     ExpSetKernelDataProtection @ 0x140548EB4 (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_14064A1CC @ 0x14064A1CC (sub_14064A1CC.c)
 */

__int64 __fastcall sub_14064A184(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_14064A1CC(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
