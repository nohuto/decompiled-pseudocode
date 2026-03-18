/*
 * XREFs of sub_14054A430 @ 0x14054A430
 * Callers:
 *     ExpSetKernelDataProtection @ 0x140548EB4 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14054A388 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_14054A478 @ 0x14054A478 (sub_14054A478.c)
 */

__int64 __fastcall sub_14054A430(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_14054A478(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
