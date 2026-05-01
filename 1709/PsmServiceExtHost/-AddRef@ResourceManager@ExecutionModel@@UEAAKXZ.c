/*
 * XREFs of ?AddRef@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x18000D6E0
 * Callers:
 *     ?AddRef@ResourceManager@ExecutionModel@@W7EAAKXZ @ 0x180026AE0 (-AddRef@ResourceManager@ExecutionModel@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::AddRef(ExecutionModel::ResourceManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 21);
}
