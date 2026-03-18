/*
 * XREFs of McTemplateK0pqq @ 0x1C00244A0
 * Callers:
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000CE10 (VidSchiUpdateContextStatus.c)
 *     VidSchiSetPriorityContext @ 0x1C0012174 (VidSchiSetPriorityContext.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C006BD44 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C006BE24 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00714B0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     VidSchReportAdapter @ 0x1C00BD650 (VidSchReportAdapter.c)
 *     VidSchReportContext @ 0x1C00BDB40 (VidSchReportContext.c)
 *     VidSchReportDevice @ 0x1C00BDBC0 (VidSchReportDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C0023E78 (McGenEventWriteKM.c)
 */

NTSTATUS McTemplateK0pqq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v10 = 4LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  return McGenEventWriteKM(&DxgkControlGuid_Context, a2, a3, 4u, &v4);
}
