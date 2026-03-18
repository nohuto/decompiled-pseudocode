/*
 * XREFs of CmpQuotaWarningWorker @ 0x1406EFF70
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExRaiseHardError @ 0x1407C5960 (ExRaiseHardError.c)
 */

__int64 __fastcall CmpQuotaWarningWorker(void *a1)
{
  char v2; // [rsp+48h] [rbp+10h] BYREF

  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(-1073741226, 0, 0, 0, 1, (__int64)&v2);
}
