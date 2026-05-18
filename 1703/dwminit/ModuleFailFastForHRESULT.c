/*
 * XREFs of ModuleFailFastForHRESULT @ 0x18000358C
 * Callers:
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x180003C78 (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180003EBC (--2@YAPEAX_K@Z.c)
 * Callees:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x180003CDC (-MilFailFastForHR@@YAXJPEBX@Z.c)
 */

void __fastcall __noreturn ModuleFailFastForHRESULT(int a1, const void *a2)
{
  MilFailFastForHR(a1, a2);
  JUMPOUT(0x180003595LL);
}
