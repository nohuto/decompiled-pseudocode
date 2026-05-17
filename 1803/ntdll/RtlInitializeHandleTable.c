/*
 * XREFs of RtlInitializeHandleTable @ 0x18007EE30
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

int __fastcall RtlInitializeHandleTable(int a1, int a2, _DWORD *a3)
{
  int result; // eax

  memset(a3, 0, 0x30uLL);
  *a3 = a1;
  result = a2 & 0x7FFFFFFF;
  if ( a2 >= 0 )
    result = a2;
  a3[2] = (unsigned int)a2 >> 31;
  a3[1] = result;
  return result;
}
