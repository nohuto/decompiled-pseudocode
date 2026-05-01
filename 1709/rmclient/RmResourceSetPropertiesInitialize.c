/*
 * XREFs of RmResourceSetPropertiesInitialize @ 0x1800052E0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 */

__int64 __fastcall RmResourceSetPropertiesInitialize(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x70uLL);
  result = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_WORD *)(a1 + 32) |= 1u;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 96) = 1;
  *(_QWORD *)(a1 + 72) = -1LL;
  *(_QWORD *)(a1 + 64) = -1LL;
  *(_QWORD *)(a1 + 56) = -1LL;
  *(_QWORD *)(a1 + 48) = -1LL;
  *(_DWORD *)(a1 + 80) = 100;
  return result;
}
