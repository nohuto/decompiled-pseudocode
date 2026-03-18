/*
 * XREFs of DDCCICleanUpWrap @ 0x1C00EBF90
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCMonitorAPI@@QEAAPEAXI@Z @ 0x1C00EC0B4 (--_GCMonitorAPI@@QEAAPEAXI@Z.c)
 */

void *__fastcall DDCCICleanUpWrap(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( qword_1C032C900 )
    result = CMonitorAPI::`scalar deleting destructor'(qword_1C032C900, a2);
  qword_1C032C900 = 0LL;
  return result;
}
