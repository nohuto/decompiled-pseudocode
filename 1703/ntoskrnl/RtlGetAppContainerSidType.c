/*
 * XREFs of RtlGetAppContainerSidType @ 0x1404A4820
 * Callers:
 *     RtlIsParentOfChildAppContainer @ 0x14041E978 (RtlIsParentOfChildAppContainer.c)
 *     SepValidateReferencedCachedHandles @ 0x1404622D8 (SepValidateReferencedCachedHandles.c)
 *     NtCreateLowBoxToken @ 0x1404A48A0 (NtCreateLowBoxToken.c)
 *     RtlGetAppContainerParent @ 0x1406E9A30 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1406EA6A0 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14008C0B0 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
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
