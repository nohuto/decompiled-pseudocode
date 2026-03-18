/*
 * XREFs of CmpQuotaWarningWorker @ 0x14068BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExRaiseHardError @ 0x14075EBE0 (ExRaiseHardError.c)
 */

__int64 __fastcall CmpQuotaWarningWorker(void *a1)
{
  char v2; // [rsp+48h] [rbp+10h] BYREF

  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(-1073741226, 0, 0, 0, 1, (__int64)&v2);
}
