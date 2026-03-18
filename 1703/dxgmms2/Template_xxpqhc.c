/*
 * XREFs of Template_xxpqhc @ 0x1C0020B14
 * Callers:
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E4CC (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 *     ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E644 (-RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPE.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C004EC20 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00A53F4 (-ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 */

NTSTATUS Template_xxpqhc(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-51h] BYREF
  va_list v5; // [rsp+40h] [rbp-41h]
  __int64 v6; // [rsp+48h] [rbp-39h]
  va_list v7; // [rsp+50h] [rbp-31h]
  __int64 v8; // [rsp+58h] [rbp-29h]
  va_list v9; // [rsp+60h] [rbp-21h]
  __int64 v10; // [rsp+68h] [rbp-19h]
  va_list v11; // [rsp+70h] [rbp-11h]
  __int64 v12; // [rsp+78h] [rbp-9h]
  va_list v13; // [rsp+80h] [rbp-1h]
  __int64 v14; // [rsp+88h] [rbp+7h]
  __int64 v15; // [rsp+D8h] [rbp+57h] BYREF
  va_list va; // [rsp+D8h] [rbp+57h]
  __int64 v17; // [rsp+E0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+E0h] [rbp+5Fh]
  __int64 v19; // [rsp+E8h] [rbp+67h] BYREF
  va_list va2; // [rsp+E8h] [rbp+67h]
  __int64 v21; // [rsp+F0h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+F0h] [rbp+6Fh]
  __int64 v23; // [rsp+F8h] [rbp+77h] BYREF
  va_list va4; // [rsp+F8h] [rbp+77h]
  va_list va5; // [rsp+100h] [rbp+7Fh] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v21 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v23 = va_arg(va5, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 8LL;
  va_copy(v7, va2);
  va_copy(v9, va3);
  va_copy(v11, va4);
  va_copy(v13, va5);
  v8 = 8LL;
  v10 = 4LL;
  v12 = 2LL;
  v14 = 1LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 6u, &UserData);
}
