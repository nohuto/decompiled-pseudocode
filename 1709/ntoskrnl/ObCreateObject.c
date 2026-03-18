/*
 * XREFs of ObCreateObject @ 0x14045D000
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 *     CmpCreateRegistryRoot @ 0x14083C9A8 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140846850 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x14085467C (MiSectionInitialization.c)
 * Callees:
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(int a1, int a2, int a3, char a4)
{
  return ObCreateObjectEx(a1, a2, a3, a4);
}
