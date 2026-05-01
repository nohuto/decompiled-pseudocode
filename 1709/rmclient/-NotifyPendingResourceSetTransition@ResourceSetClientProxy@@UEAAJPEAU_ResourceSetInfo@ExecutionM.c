/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18000EE60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180007780 (__security_check_cookie.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@QEAAJPEAURmResourceSetInfo@@@Z @ 0x18000EDE8 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@QEAAJPEAURmResourceSetInfo@@@Z.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000F904 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 */

CLIENT_CALL_RETURN __fastcall ResourceSetClientProxy::NotifyPendingResourceSetTransition(
        ResourceSetClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct RmResourceSetInfo *a3)
{
  _BYTE v5[1504]; // [rsp+20h] [rbp-5F8h] BYREF

  ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(a2, (const struct ExecutionModel::_ResourceSetInfo *)v5, a3);
  return ResourceSetClientProxy::NotifyPendingResourceSetTransition(this, (struct RmResourceSetInfo *)v5);
}
