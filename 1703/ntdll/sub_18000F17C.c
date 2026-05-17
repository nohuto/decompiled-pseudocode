/*
 * XREFs of sub_18000F17C @ 0x18000F17C
 * Callers:
 *     sub_18000EF18 @ 0x18000EF18 (sub_18000EF18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F17C(unsigned int a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  v1 = 983040;
  result = 7LL;
  if ( a1 <= 0xF0000 )
    v1 = a1;
  if ( v1 >= 0x80 )
  {
    do
      result = (unsigned int)(result + 1);
    while ( v1 >> result );
    if ( (unsigned int)result > 0x12 )
      return 18LL;
  }
  return result;
}
