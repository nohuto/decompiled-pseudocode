/*
 * XREFs of CmpGetCmHiveFromVirtualPath @ 0x140692028
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x140692C3C (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140692DDC (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpGetMappingHiveForString @ 0x140692058 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x14069234C (CmpGetVirtualizationIDFromFullVirtualPath.c)
 */

__int64 __fastcall CmpGetCmHiveFromVirtualPath(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  result = CmpGetVirtualizationIDFromFullVirtualPath(a1, v4);
  if ( (int)result >= 0 )
    return CmpGetMappingHiveForString(v4, a2);
  return result;
}
