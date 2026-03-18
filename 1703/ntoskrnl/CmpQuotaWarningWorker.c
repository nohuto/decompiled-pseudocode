/*
 * XREFs of CmpQuotaWarningWorker @ 0x1406626D0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExRaiseHardError @ 0x14071ED80 (ExRaiseHardError.c)
 */

__int64 __fastcall CmpQuotaWarningWorker(void *a1)
{
  char v2; // [rsp+48h] [rbp+10h] BYREF

  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(-1073741226, 0, 0, 0, 1, (__int64)&v2);
}
