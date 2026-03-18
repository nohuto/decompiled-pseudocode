/*
 * XREFs of SepDuplicateSid @ 0x1404F19E4
 * Callers:
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     SepSetTokenTrust @ 0x140511010 (SepSetTokenTrust.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1406F6E14 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x1406F6F14 (SepSetTokenUserAndGroups.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x1404F1BD0 (RtlCopySid.c)
 */

__int64 __fastcall SepDuplicateSid(unsigned __int8 *SourceSid, _QWORD *a2)
{
  int v4; // eax
  ULONG v5; // ebp
  PVOID PoolWithTag; // rax
  PVOID v7; // rdi
  __int64 result; // rax

  if ( !a2 )
    return 3221225485LL;
  v4 = SourceSid[1];
  *a2 = 0LL;
  v5 = 4 * v4 + 8;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (4 * v4 + 11) & 0xFFFFFFFC, 0x69536553u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  RtlCopySid(v5, PoolWithTag, SourceSid);
  result = 0LL;
  *a2 = v7;
  return result;
}
