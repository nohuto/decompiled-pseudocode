/*
 * XREFs of SepSetTokenTrust @ 0x140511010
 * Callers:
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 *     SepSetTrustLevelForProcessToken @ 0x14006626C (SepSetTrustLevelForProcessToken.c)
 *     SeCopyClientToken @ 0x14043D254 (SeCopyClientToken.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     NtOpenThreadTokenEx @ 0x140510670 (NtOpenThreadTokenEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepDuplicateSid @ 0x1404F19E4 (SepDuplicateSid.c)
 */

__int64 __fastcall SepSetTokenTrust(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  void *v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0;
  v7 = 0LL;
  if ( a2 )
  {
    result = SepDuplicateSid(a2, &v7);
    v3 = result;
    if ( (int)result < 0 )
      return result;
    v2 = v7;
  }
  v5 = *(void **)(a1 + 1104);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(a1 + 1104) = 0LL;
  }
  *(_QWORD *)(a1 + 1104) = v2;
  return v3;
}
