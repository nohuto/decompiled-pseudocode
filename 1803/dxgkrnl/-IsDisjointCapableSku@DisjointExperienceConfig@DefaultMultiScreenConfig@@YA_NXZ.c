/*
 * XREFs of ?IsDisjointCapableSku@DisjointExperienceConfig@DefaultMultiScreenConfig@@YA_NXZ @ 0x1C0034F18
 * Callers:
 *     ?DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities@@@Z @ 0x1C0034D64 (-DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities.c)
 * Callees:
 *     <none>
 */

char __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::IsDisjointCapableSku(
        DefaultMultiScreenConfig::DisjointExperienceConfig *this)
{
  char IsMultiSessionSku; // al
  char v2; // cl
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF
  char v6; // [rsp+58h] [rbp+10h] BYREF
  char v7; // [rsp+60h] [rbp+18h] BYREF

  IsMultiSessionSku = RtlIsMultiSessionSku(this);
  v2 = 0;
  if ( !IsMultiSessionSku )
  {
    v5 = 3;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    ZwQueryLicenseValue(&DestinationString, &v7, &v5, 4LL, &v6);
    return v5 != 10;
  }
  return v2;
}
