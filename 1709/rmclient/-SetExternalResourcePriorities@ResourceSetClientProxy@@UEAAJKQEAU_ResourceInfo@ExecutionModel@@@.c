/*
 * XREFs of ?SetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJKQEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18000F410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceSetClientProxy::SetExternalResourcePriorities(
        ResourceSetClientProxy *this,
        int a2,
        struct ExecutionModel::_ResourceInfo *const a3)
{
  return NdrClientCall3(
           (MIDL_STUBLESS_PROXY_INFO *)&stru_180010C20,
           0xAu,
           0LL,
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 3),
           a2,
           a3);
}
