/*
 * XREFs of CmpGetCmHiveFromVirtualPath @ 0x1404D36E8
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1404D37D0 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140667F7C (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpGetMappingHiveForString @ 0x1404D3514 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x1404D3718 (CmpGetVirtualizationIDFromFullVirtualPath.c)
 */

__int64 __fastcall CmpGetCmHiveFromVirtualPath(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __m128i v4; // [rsp+20h] [rbp-18h] BYREF

  result = CmpGetVirtualizationIDFromFullVirtualPath(a1, &v4);
  if ( (int)result >= 0 )
    return CmpGetMappingHiveForString(&v4, a2);
  return result;
}
