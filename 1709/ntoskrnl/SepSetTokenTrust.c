/*
 * XREFs of SepSetTokenTrust @ 0x1404884A4
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 *     SepSetTrustLevelForProcessToken @ 0x14001A020 (SepSetTrustLevelForProcessToken.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     SeCopyClientToken @ 0x140487120 (SeCopyClientToken.c)
 *     NtOpenThreadTokenEx @ 0x1404C5CB0 (NtOpenThreadTokenEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SepDuplicateSid @ 0x14049C980 (SepDuplicateSid.c)
 */

__int64 __fastcall SepSetTokenTrust(__int64 a1, void *a2)
{
  unsigned int v2; // ebx
  void *v4; // rcx
  __int64 result; // rax

  v2 = 0;
  if ( !a2 || (result = SepDuplicateSid(a2), v2 = result, (int)result >= 0) )
  {
    v4 = *(void **)(a1 + 1104);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *(_QWORD *)(a1 + 1104) = 0LL;
    }
    *(_QWORD *)(a1 + 1104) = 0LL;
    return v2;
  }
  return result;
}
