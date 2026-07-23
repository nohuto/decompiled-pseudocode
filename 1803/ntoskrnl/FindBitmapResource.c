/*
 * XREFs of FindBitmapResource @ 0x1408BA80C
 * Callers:
 *     BvgaDriverInitialize @ 0x1408BA710 (BvgaDriverInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     LdrAccessResource @ 0x140639130 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x140639150 (LdrFindResource_U.c)
 */

PVOID __fastcall FindBitmapResource(ULONG_PTR a1, ULONG *a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rcx
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+20h] [rbp-38h] BYREF
  PVOID Resource; // [rsp+28h] [rbp-30h] BYREF
  _LDR_RESOURCE_INFO v8; // [rsp+30h] [rbp-28h] BYREF

  v8.Name = a1;
  v8.Type = 2LL;
  v8.Language = 0LL;
  if ( LdrFindResource_U((PVOID)0x140000000LL, &v8, 3u, &ResourceDataEntry) < 0 )
    return 0LL;
  v3 = LdrAccessResource((PVOID)0x140000000LL, ResourceDataEntry, &Resource, a2);
  v4 = Resource;
  if ( v3 < 0 )
    return 0LL;
  return v4;
}
