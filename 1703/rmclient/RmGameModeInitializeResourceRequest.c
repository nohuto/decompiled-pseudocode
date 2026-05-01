/*
 * XREFs of RmGameModeInitializeResourceRequest @ 0x18000A860
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180007FF4 (memset_0.c)
 */

void *__fastcall RmGameModeInitializeResourceRequest(_DWORD *a1)
{
  void *result; // rax

  result = memset_0(a1, 0, 0x20uLL);
  *a1 = 2;
  a1[4] = 10;
  a1[5] = 50;
  a1[6] = 30;
  return result;
}
