/*
 * XREFs of sub_1800F55D8 @ 0x1800F55D8
 * Callers:
 *     sub_180069670 @ 0x180069670 (sub_180069670.c)
 * Callees:
 *     sub_1800F55B0 @ 0x1800F55B0 (sub_1800F55B0.c)
 *     sub_1800F5AD0 @ 0x1800F5AD0 (sub_1800F5AD0.c)
 *     sub_1800F5F08 @ 0x1800F5F08 (sub_1800F5F08.c)
 */

__int64 __fastcall sub_1800F55D8(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  unsigned int v4; // eax

  result = *(unsigned int *)(a1 + 100);
  if ( !(_DWORD)result )
  {
    v3 = sub_1800F5F08(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 88));
    v4 = sub_1800F55B0(a1);
    result = sub_1800F5AD0(*(_QWORD *)(a1 + 112), v4, v3);
    *(_DWORD *)(a1 + 100) = result;
  }
  return result;
}
