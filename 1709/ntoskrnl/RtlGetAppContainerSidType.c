/*
 * XREFs of RtlGetAppContainerSidType @ 0x140549210
 * Callers:
 *     RtlIsParentOfChildAppContainer @ 0x1404485C8 (RtlIsParentOfChildAppContainer.c)
 *     NtCreateLowBoxToken @ 0x140549290 (NtCreateLowBoxToken.c)
 *     SepValidateReferencedCachedHandles @ 0x1405641B4 (SepValidateReferencedCachedHandles.c)
 *     RtlGetAppContainerParent @ 0x140721930 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140722598 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140019310 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlGetAppContainerSidType(char *Sid, _DWORD *a2)
{
  UCHAR v4; // cl

  if ( (unsigned __int8)Sid[1] >= 2u
    && *Sid == 1
    && RtlCompareMemory(Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
    && *((_DWORD *)Sid + 2) == 2 )
  {
    v4 = *RtlSubAuthorityCountSid(Sid);
    if ( v4 == 8 )
    {
      *a2 = 2;
      return 0LL;
    }
    if ( v4 == 12 )
    {
      *a2 = 1;
      return 0LL;
    }
    *a2 = 3;
  }
  else
  {
    *a2 = 0;
  }
  return 3221266944LL;
}
