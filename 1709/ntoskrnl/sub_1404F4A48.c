/*
 * XREFs of sub_1404F4A48 @ 0x1404F4A48
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1404F44AC (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1404F49A0 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_1404F4A90 @ 0x1404F4A90 (sub_1404F4A90.c)
 */

__int64 __fastcall sub_1404F4A48(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1404F4A90(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
