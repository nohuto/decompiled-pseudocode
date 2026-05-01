/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@@Z @ 0x18000DBA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@QEAAJPEAURmResourceSetInfo@@@Z @ 0x18000DAC8 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@QEAAJPEAURmResourceSetInfo@@@Z.c)
 */

CLIENT_CALL_RETURN __fastcall ResourceSetClientProxy::NotifyPendingResourceSetTransition(
        ResourceSetClientProxy *a1,
        __int64 a2)
{
  _BYTE v4[1456]; // [rsp+20h] [rbp-5C8h] BYREF

  (*(void (__fastcall **)(_QWORD *, __int64, _BYTE *))(**((_QWORD **)a1 + 54) + 88LL))(*((_QWORD **)a1 + 54), a2, v4);
  return ResourceSetClientProxy::NotifyPendingResourceSetTransition(a1, (struct RmResourceSetInfo *)v4);
}
