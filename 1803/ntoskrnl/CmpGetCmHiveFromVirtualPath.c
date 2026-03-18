/*
 * XREFs of CmpGetCmHiveFromVirtualPath @ 0x1405C04E8
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1405BFCD4 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x1406F5CCC (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpGetMappingHiveForString @ 0x1405C0518 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x1405C05E0 (CmpGetVirtualizationIDFromFullVirtualPath.c)
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
