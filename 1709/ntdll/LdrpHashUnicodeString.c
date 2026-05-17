/*
 * XREFs of LdrpHashUnicodeString @ 0x180053000
 * Callers:
 *     LdrpInsertDataTableEntry @ 0x180021DDC (LdrpInsertDataTableEntry.c)
 *     LdrpLoadKnownDll @ 0x180035B64 (LdrpLoadKnownDll.c)
 *     LdrpMapDllFullPath @ 0x18004D28C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18004F618 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x180034F10 (RtlHashUnicodeString.c)
 */

__int64 __fastcall LdrpHashUnicodeString(unsigned __int16 *a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  RtlHashUnicodeString(a1, 1, 0, (int *)&v2);
  result = v2;
  if ( !v2 )
    return 0x80000000LL;
  return result;
}
