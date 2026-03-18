/*
 * XREFs of GetRegionSpaceName @ 0x1C005D728
 * Callers:
 *     DumpObject @ 0x1C002C0B0 (DumpObject.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetRegionSpaceName(char a1)
{
  int v1; // edx
  __int64 v2; // r8
  __int64 v3; // rax
  const char *result; // rax

  v1 = 0;
  if ( !off_1C00760C8 )
    return "VendorDefined";
  v2 = 0LL;
  v3 = 0LL;
  while ( a1 != *((_BYTE *)&unk_1C00760C0 + v3) )
  {
    ++v2;
    ++v1;
    v3 = 16 * v2;
    if ( !*((_QWORD *)&unk_1C00760C0 + 2 * v2 + 1) )
      return "VendorDefined";
  }
  result = (const char *)*((_QWORD *)&unk_1C00760C0 + 2 * v1 + 1);
  if ( !result )
    return "VendorDefined";
  return result;
}
