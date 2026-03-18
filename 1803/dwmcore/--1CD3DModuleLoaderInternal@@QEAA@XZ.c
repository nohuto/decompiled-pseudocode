/*
 * XREFs of ??1CD3DModuleLoaderInternal@@QEAA@XZ @ 0x1800DA824
 * Callers:
 *     _dynamic_atexit_destructor_for__g_D3DModuleLoader__ @ 0x1800DEB00 (_dynamic_atexit_destructor_for__g_D3DModuleLoader__.c)
 * Callees:
 *     ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x1801C8B4C (-CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ.c)
 */

void __fastcall CD3DModuleLoaderInternal::~CD3DModuleLoaderInternal(CD3DModuleLoaderInternal *this)
{
  CD3DModuleLoaderInternal::CleanupD3DReferences(this);
  DeleteCriticalSection(&stru_1802D6450);
}
