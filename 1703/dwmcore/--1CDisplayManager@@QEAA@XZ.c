/*
 * XREFs of ??1CDisplayManager@@QEAA@XZ @ 0x1800D2AA8
 * Callers:
 *     _dynamic_atexit_destructor_for__g_DisplayManager__ @ 0x1800D6D60 (_dynamic_atexit_destructor_for__g_DisplayManager__.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisplayManager::~CDisplayManager(CDisplayManager *this)
{
  DeleteCriticalSection(&g_DisplayManager);
}
