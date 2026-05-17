/*
 * XREFs of RtlInitializeHandleTable @ 0x1800833B0
 * Callers:
 *     sub_180071FB8 @ 0x180071FB8 (sub_180071FB8.c)
 * Callees:
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void *__fastcall RtlInitializeHandleTable(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int v5; // ebx
  void *result; // rax

  v3 = 0;
  v5 = a2;
  if ( a2 < 0 )
  {
    v5 = a2 & 0x7FFFFFFF;
    v3 = 1;
  }
  result = memset(a3, 0, 0x30uLL);
  *a3 = a1;
  a3[1] = v5;
  a3[2] = v3;
  return result;
}
