/*
 * XREFs of RmResourceLimitsInitialize @ 0x180005430
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 */

__int64 __fastcall RmResourceLimitsInitialize(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x40uLL);
  *(_DWORD *)(a1 + 56) = 1;
  *(_QWORD *)(a1 + 32) = -1LL;
  *(_QWORD *)(a1 + 24) = -1LL;
  *(_QWORD *)(a1 + 16) = -1LL;
  *(_QWORD *)(a1 + 8) = -1LL;
  result = 0LL;
  *(_DWORD *)(a1 + 40) = 100;
  return result;
}
