/*
 * XREFs of AllocateWindowManagerSid @ 0x1C0026230
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0026BC0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C007AA70 (CheckDwmProcessSecurityIdentifier.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall AllocateWindowManagerSid(_QWORD *a1)
{
  ULONG v2; // eax
  void *v3; // rax
  void *v4; // rbx
  __int64 v5; // rdx
  NTSTATUS v6; // edi
  __int64 v7; // r8
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v2 = RtlLengthRequiredSid(3u);
  v3 = (void *)Win32AllocPoolWithQuota(v2, 1702064981LL);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    v6 = RtlInitializeSid(v3, &IdentifierAuthority, 3u);
    if ( v6 < 0 )
    {
      Win32FreePool(v4, v5, v7);
    }
    else
    {
      *RtlSubAuthoritySid(v4, 0) = 90;
      *RtlSubAuthoritySid(v4, 1u) = 0;
      *RtlSubAuthoritySid(v4, 2u) = gSessionId;
      *a1 = v4;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
