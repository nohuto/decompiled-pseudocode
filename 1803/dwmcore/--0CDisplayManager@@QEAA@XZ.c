/*
 * XREFs of ??0CDisplayManager@@QEAA@XZ @ 0x18001EB50
 * Callers:
 *     _dynamic_initializer_for__g_DisplayManager__ @ 0x1800027A0 (_dynamic_initializer_for__g_DisplayManager__.c)
 * Callees:
 *     <none>
 */

CDisplayManager *__fastcall CDisplayManager::CDisplayManager(CDisplayManager *this)
{
  CDisplayManager *result; // rax

  InitializeCriticalSection(&g_DisplayManager);
  result = (CDisplayManager *)&g_DisplayManager;
  qword_1802D6428 = 0LL;
  qword_1802D6430 = 0LL;
  dword_1802D6438 = 0;
  qword_1802D6440 = 0LL;
  dword_1802D6448 = 0;
  dword_1802D644C = 0;
  return result;
}
