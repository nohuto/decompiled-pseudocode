/*
 * XREFs of ?InternalRelease@?$ComPtr@VModernResourceManagerProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180006A90
 * Callers:
 *     _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_pProxy__ @ 0x180008900 (_dynamic_atexit_destructor_for__Windows--System--CMemoryManager--s_pProxy__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::ComPtr<ModernResourceManagerProxy>::InternalRelease()
{
  ModernResourceManagerProxy *v0; // rcx
  __int64 result; // rax

  v0 = Windows::System::CMemoryManager::s_pProxy;
  result = 0LL;
  if ( Windows::System::CMemoryManager::s_pProxy )
  {
    Windows::System::CMemoryManager::s_pProxy = 0LL;
    return (*(__int64 (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)v0 + 16LL))(v0);
  }
  return result;
}
