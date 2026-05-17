/*
 * XREFs of _local_unwind @ 0x18008BEA0
 * Callers:
 *     sub_180006FA8 @ 0x180006FA8 (sub_180006FA8.c)
 *     LdrAddDllDirectory @ 0x180089810 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwindEx @ 0x18000DEA0 (RtlUnwindEx.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  struct _CONTEXT ContextRecord; // [rsp+0h] [rbp-4D8h] BYREF

  RtlUnwindEx(a1, a2, 0LL, 0LL, &ContextRecord, 0LL);
}
