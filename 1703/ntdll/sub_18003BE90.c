/*
 * XREFs of sub_18003BE90 @ 0x18003BE90
 * Callers:
 *     sub_18003AB88 @ 0x18003AB88 (sub_18003AB88.c)
 *     LdrLoadDll @ 0x18003AED0 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x18003BF00 (LdrGetDllHandleEx.c)
 *     sub_18004C234 @ 0x18004C234 (sub_18004C234.c)
 *     sub_18006EEF8 @ 0x18006EEF8 (sub_18006EEF8.c)
 *     sub_18006F0A0 @ 0x18006F0A0 (sub_18006F0A0.c)
 *     sub_1800874C4 @ 0x1800874C4 (sub_1800874C4.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800D6F80 @ 0x1800D6F80 (sub_1800D6F80.c)
 *     sub_1800DBA3C @ 0x1800DBA3C (sub_1800DBA3C.c)
 * Callees:
 *     sub_18004CE2C @ 0x18004CE2C (sub_18004CE2C.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

void *__fastcall sub_18003BE90(__int64 a1, __int64 a2, __int64 *a3)
{
  void *result; // rax
  __int64 v7; // rcx
  bool v8; // zf

  result = memset(a3, 0, 0x80uLL);
  if ( (a2 & 1) != 0 || !a2 )
  {
    a3[4] = a1;
    *((_DWORD *)a3 + 6) = a2 & 0xFFFFFFFE;
  }
  else
  {
    v8 = (dword_180155A10 & 5) == 0;
    *a3 = a2;
    if ( !v8 )
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        1335,
        (unsigned int)"LdrpInitializeDllPath",
        2,
        "DLL search path passed in externally: %ws\n",
        a2);
    return (void *)sub_18004CE2C(v7, a1, *a3, 5312LL);
  }
  return result;
}
