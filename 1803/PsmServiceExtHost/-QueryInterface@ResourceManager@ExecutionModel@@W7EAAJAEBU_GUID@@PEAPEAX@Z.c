/*
 * XREFs of ?QueryInterface@ResourceManager@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180041DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::QueryInterface(__int64 a1)
{
  return RmpRpExtResourceSetThunk::Apply((RmpRpExtResourceSetThunk *)(a1 - 8));
}
