/*
 * XREFs of ??0CDisplayManager@@QEAA@XZ @ 0x1800C21A4
 * Callers:
 *     _dynamic_initializer_for__g_DisplayManager__ @ 0x1800012B0 (_dynamic_initializer_for__g_DisplayManager__.c)
 * Callees:
 *     <none>
 */

CDisplayManager *__fastcall CDisplayManager::CDisplayManager(CDisplayManager *this)
{
  CDisplayManager *result; // rax

  InitializeCriticalSection(&g_DisplayManager);
  result = (CDisplayManager *)&g_DisplayManager;
  qword_18026EEA8 = 0LL;
  qword_18026EEB0 = 0LL;
  dword_18026EEB8 = 0;
  qword_18026EEC0 = 0LL;
  dword_18026EEC8 = 0;
  dword_18026EECC = 0;
  return result;
}
