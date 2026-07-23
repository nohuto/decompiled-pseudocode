/*
 * XREFs of sub_180042054 @ 0x180042054
 * Callers:
 *     sub_180041814 @ 0x180041814 (sub_180041814.c)
 *     LdrLoadDll @ 0x180041BB0 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x180041D20 (LdrGetDllHandleEx.c)
 *     sub_18004213C @ 0x18004213C (sub_18004213C.c)
 *     sub_180055808 @ 0x180055808 (sub_180055808.c)
 *     sub_1800559B0 @ 0x1800559B0 (sub_1800559B0.c)
 *     sub_180081044 @ 0x180081044 (sub_180081044.c)
 *     LdrLoadEnclaveModule @ 0x1800C9990 (LdrLoadEnclaveModule.c)
 *     sub_1800CCA84 @ 0x1800CCA84 (sub_1800CCA84.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D51FC @ 0x1800D51FC (sub_1800D51FC.c)
 * Callees:
 *     sub_1800252F4 @ 0x1800252F4 (sub_1800252F4.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

void __fastcall sub_180042054(const WCHAR *a1, const WCHAR *a2, const WCHAR **a3)
{
  __int64 v6; // rcx
  bool v7; // zf

  memset(a3, 0, 0x80uLL);
  if ( ((unsigned __int8)a2 & 1) != 0 || !a2 )
  {
    a3[4] = a1;
    *((_DWORD *)a3 + 6) = (unsigned int)a2 & 0xFFFFFFFE;
  }
  else
  {
    v7 = (dword_180156A70 & 5) == 0;
    *a3 = a2;
    if ( !v7 )
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        1355,
        (unsigned int)"LdrpInitializeDllPath",
        2,
        "DLL search path passed in externally: %ws\n",
        a2);
    sub_1800252F4(v6, a1, *a3, 0x14C0u);
  }
}
