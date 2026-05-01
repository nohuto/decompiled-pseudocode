/*
 * XREFs of RmGameModeInitializeResourceRequest @ 0x18000AD70
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 */

void *__fastcall RmGameModeInitializeResourceRequest(_DWORD *a1)
{
  void *result; // rax

  result = memset_0(a1, 0, 0x28uLL);
  *a1 = 3;
  a1[4] = 10;
  a1[5] = 50;
  a1[6] = 30;
  *((_BYTE *)a1 + 36) = 0;
  return result;
}
