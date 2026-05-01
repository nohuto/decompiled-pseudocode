/*
 * XREFs of _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_pProxy__ @ 0x180008E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_pProxy__()
{
  return Microsoft::WRL::ComPtr<ModernResourceManagerProxy>::InternalRelease();
}
