/*
 * XREFs of RmResourceSetPropertiesInitialize @ 0x180006870
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180007B70 (memset_0.c)
 */

__int64 __fastcall RmResourceSetPropertiesInitialize(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x60uLL);
  memset_0((void *)(a1 + 40), 0, 0x30uLL);
  *(_DWORD *)(a1 + 84) = 1;
  *(_QWORD *)(a1 + 72) = -1LL;
  *(_QWORD *)(a1 + 64) = -1LL;
  *(_QWORD *)(a1 + 56) = -1LL;
  *(_QWORD *)(a1 + 48) = -1LL;
  result = 0LL;
  *(_DWORD *)(a1 + 80) = 100;
  return result;
}
