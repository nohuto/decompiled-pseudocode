/*
 * XREFs of DDCCICleanUpWrap @ 0x1C00FACB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCMonitorAPI@@QEAAPEAXI@Z @ 0x1C00FADD4 (--_GCMonitorAPI@@QEAAPEAXI@Z.c)
 */

void *__fastcall DDCCICleanUpWrap(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( qword_1C0327BA0 )
    result = CMonitorAPI::`scalar deleting destructor'(qword_1C0327BA0, a2);
  qword_1C0327BA0 = 0LL;
  return result;
}
