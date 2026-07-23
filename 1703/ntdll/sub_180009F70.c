/*
 * XREFs of sub_180009F70 @ 0x180009F70
 * Callers:
 *     sub_180009E2C @ 0x180009E2C (sub_180009E2C.c)
 * Callees:
 *     sub_18001EFB4 @ 0x18001EFB4 (sub_18001EFB4.c)
 */

__int64 __fastcall sub_180009F70(void *a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  result = sub_18001EFB4(a1, a2);
  if ( a3 )
    *a3 = 0;
  return result;
}
