/*
 * XREFs of sub_180009F70 @ 0x180009F70
 * Callers:
 *     sub_180009E2C @ 0x180009E2C (sub_180009E2C.c)
 * Callees:
 *     sub_18001EFB4 @ 0x18001EFB4 (sub_18001EFB4.c)
 */

__int64 __fastcall sub_180009F70(__int64 a1, unsigned int a2, _DWORD *a3, char a4)
{
  unsigned int v4; // r10d
  __int64 v6; // r9
  __int64 result; // rax

  v4 = a4 & 1 | 0x8000000;
  v6 = a4 & 1 | 0x8000004u;
  if ( a2 < 0x10000 )
    v6 = v4;
  result = sub_18001EFB4(a1, a2, a2, v6);
  if ( a3 )
    *a3 = 0;
  return result;
}
