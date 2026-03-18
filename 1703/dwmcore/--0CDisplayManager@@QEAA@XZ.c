/*
 * XREFs of ??0CDisplayManager@@QEAA@XZ @ 0x18007EB0C
 * Callers:
 *     _dynamic_initializer_for__g_DisplayManager__ @ 0x180001140 (_dynamic_initializer_for__g_DisplayManager__.c)
 * Callees:
 *     <none>
 */

CDisplayManager *__fastcall CDisplayManager::CDisplayManager(CDisplayManager *this)
{
  CDisplayManager *result; // rax

  InitializeCriticalSection(&g_DisplayManager);
  result = (CDisplayManager *)&g_DisplayManager;
  qword_18023E528 = 0LL;
  qword_18023E530 = 0LL;
  dword_18023E538 = 0;
  qword_18023E540 = 0LL;
  dword_18023E548 = 0;
  dword_18023E54C = 0;
  return result;
}
