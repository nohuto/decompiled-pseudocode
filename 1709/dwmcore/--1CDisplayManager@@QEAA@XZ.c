/*
 * XREFs of ??1CDisplayManager@@QEAA@XZ @ 0x1800C2194
 * Callers:
 *     _dynamic_atexit_destructor_for__g_DisplayManager__ @ 0x1800C7700 (_dynamic_atexit_destructor_for__g_DisplayManager__.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisplayManager::~CDisplayManager(CDisplayManager *this)
{
  DeleteCriticalSection(&g_DisplayManager);
}
