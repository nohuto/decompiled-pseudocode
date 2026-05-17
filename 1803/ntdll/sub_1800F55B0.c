/*
 * XREFs of sub_1800F55B0 @ 0x1800F55B0
 * Callers:
 *     sub_180069670 @ 0x180069670 (sub_180069670.c)
 *     sub_1800F55D8 @ 0x1800F55D8 (sub_1800F55D8.c)
 * Callees:
 *     sub_1800F5D00 @ 0x1800F5D00 (sub_1800F5D00.c)
 */

__int64 __fastcall sub_1800F55B0(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 96);
  if ( !(_DWORD)result )
  {
    result = sub_1800F5D00(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 88));
    *(_DWORD *)(a1 + 96) = result;
  }
  return result;
}
