/*
 * XREFs of ?RmpLookupDefAppsAccount@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800234A4
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180021BD0 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpLookupDefAppsAccount(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbx
  unsigned int v2; // ebx
  WCHAR *ReferencedDomainName; // rdi
  DWORD cchReferencedDomainName; // [rsp+50h] [rbp+8h] BYREF
  DWORD cbSid; // [rsp+58h] [rbp+10h] BYREF
  enum _SID_NAME_USE peUse; // [rsp+60h] [rbp+18h] BYREF

  cchReferencedDomainName = 0;
  v1 = (char *)a1 + 1824;
  cbSid = 68;
  LookupAccountNameW(0LL, L"DefApps", (char *)a1 + 1824, &cbSid, 0LL, &cchReferencedDomainName, &peUse);
  if ( GetLastError() == 122 )
  {
    ReferencedDomainName = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2LL * cchReferencedDomainName);
    if ( ReferencedDomainName )
    {
      cbSid = 68;
      v2 = !LookupAccountNameW(0LL, L"DefApps", v1, &cbSid, ReferencedDomainName, &cchReferencedDomainName, &peUse)
         ? 0xC0000001
         : 0;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ReferencedDomainName);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
