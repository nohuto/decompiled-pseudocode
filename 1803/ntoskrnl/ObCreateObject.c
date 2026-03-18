/*
 * XREFs of ObCreateObject @ 0x140544A50
 * Callers:
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 *     MiSectionInitialization @ 0x14089F4C0 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x1408B0FCC (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x1408B670C (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(
        unsigned __int8 a1,
        _DWORD *a2,
        int a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9)
{
  __int64 v10; // [rsp+20h] [rbp-38h]

  return ObCreateObjectEx(a1, a2, a3, a4, v10, a6, a7, a8, a9, 0LL);
}
