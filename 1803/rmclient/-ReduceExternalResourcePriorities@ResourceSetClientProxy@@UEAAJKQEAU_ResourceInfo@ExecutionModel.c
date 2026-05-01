/*
 * XREFs of ?ReduceExternalResourcePriorities@ResourceSetClientProxy@@UEAAJKQEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18000ED00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetClientProxy::ReduceExternalResourcePriorities(
        ResourceSetClientProxy *this,
        __int64 a2,
        struct ExecutionModel::_ResourceInfo *const a3)
{
  return (*(__int64 (__fastcall **)(ResourceSetClientProxy *, __int64, struct ExecutionModel::_ResourceInfo *const))(*(_QWORD *)this + 112LL))(
           this,
           a2,
           a3);
}
