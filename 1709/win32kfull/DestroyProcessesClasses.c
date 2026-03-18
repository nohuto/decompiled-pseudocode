/*
 * XREFs of DestroyProcessesClasses @ 0x1C00F2140
 * Callers:
 *     <none>
 * Callees:
 *     DestroyClass @ 0x1C00F2194 (DestroyClass.c)
 */

__int64 __fastcall DestroyProcessesClasses(struct tagPROCESSINFO *a1)
{
  _QWORD *v2; // rdi
  __int64 result; // rax

  v2 = (_QWORD *)((char *)a1 + 320);
  while ( *v2 )
    result = DestroyClass(a1);
  while ( *((_QWORD *)a1 + 41) )
    result = DestroyClass(a1);
  return result;
}
