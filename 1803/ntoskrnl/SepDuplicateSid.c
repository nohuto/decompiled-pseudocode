/*
 * XREFs of SepDuplicateSid @ 0x1404D2FD0
 * Callers:
 *     SepSetTokenTrust @ 0x1404C0758 (SepSetTokenTrust.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1407929D8 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x140792AD8 (SepSetTokenUserAndGroups.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x1404D4480 (RtlCopySid.c)
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
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x69536553u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  RtlCopySid(v5, PoolWithTag, SourceSid);
  result = 0LL;
  *a2 = v7;
  return result;
}
