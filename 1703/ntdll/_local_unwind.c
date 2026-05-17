/*
 * XREFs of _local_unwind @ 0x180096C40
 * Callers:
 *     sub_18005F868 @ 0x18005F868 (sub_18005F868.c)
 *     LdrAddDllDirectory @ 0x18008F390 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  struct _CONTEXT ContextRecord; // [rsp+0h] [rbp-4D8h] BYREF

  RtlUnwindEx(a1, a2, 0LL, 0LL, &ContextRecord, 0LL);
}
