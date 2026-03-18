/*
 * XREFs of ObCreateObject @ 0x14046F580
 * Callers:
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 *     IopInitializeBuiltinDriver @ 0x1407F9B40 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x140804AC4 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x140808574 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(int a1, int a2, int a3, int a4)
{
  return ObCreateObjectEx(a1, a2, a3, a4);
}
