/*
 * XREFs of RtlGetAppContainerParent @ 0x140721930
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x140722598 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140019320 (RtlSubAuthoritySid.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlInitializeSid @ 0x1405491E0 (RtlInitializeSid.c)
 *     RtlGetAppContainerSidType @ 0x140549210 (RtlGetAppContainerSidType.c)
 */

NTSTATUS __cdecl RtlGetAppContainerParent(PSID AppContainerSid, PSID *AppContainerSidParent)
{
  ULONG *PoolWithQuotaTag; // rax
  ULONG *v5; // rbx
  int v7; // edi
  unsigned __int8 v8; // di
  ULONG *v9; // r14
  PULONG v10; // rax
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+48h] [rbp+10h] BYREF

  *AppContainerSidParent = 0LL;
  if ( RtlGetAppContainerSidType(AppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ChildAppContainerSidType )
  {
    return -1073741811;
  }
  PoolWithQuotaTag = (ULONG *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x62507452u);
  v5 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741670;
  v7 = RtlInitializeSid(PoolWithQuotaTag, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 8u);
  if ( v7 < 0 )
  {
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    v8 = 0;
    v9 = v5 + 2;
    do
    {
      v10 = RtlSubAuthoritySid(AppContainerSid, v8++);
      *v9++ = *v10;
    }
    while ( v8 < 8u );
    *AppContainerSidParent = v5;
    return 0;
  }
  return v7;
}
