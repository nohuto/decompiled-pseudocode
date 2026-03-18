/*
 * XREFs of ?GetResourceManagerSid@DXGGLOBAL@@QEAAPEAXXZ @ 0x1C011032C
 * Callers:
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0121574 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void *__fastcall DXGGLOBAL::GetResourceManagerSid(DXGGLOBAL *this)
{
  void *result; // rax
  ULONG v3; // eax
  PVOID v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rax
  void *v16; // rcx
  __int64 v17; // rax
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  result = (void *)*((_QWORD *)this + 185);
  if ( !result )
  {
    v3 = RtlLengthRequiredSid(6u);
    v4 = operator new[](v3, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 185) = v4;
    if ( v4 )
    {
      *(_DWORD *)IdentifierAuthority.Value = 0;
      *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
      v9 = RtlInitializeSid(v4, &IdentifierAuthority, 6u);
      v14 = v9;
      if ( v9 >= 0 )
      {
        *RtlSubAuthoritySid(*((PSID *)this + 185), 0) = 80;
        *RtlSubAuthoritySid(*((PSID *)this + 185), 1u) = 1988685059;
        *RtlSubAuthoritySid(*((PSID *)this + 185), 2u) = 1921232356;
        *RtlSubAuthoritySid(*((PSID *)this + 185), 3u) = 378231328;
        *RtlSubAuthoritySid(*((PSID *)this + 185), 4u) = -1590824699;
        *RtlSubAuthoritySid(*((PSID *)this + 185), 5u) = 890457928;
        return (void *)*((_QWORD *)this + 185);
      }
      v15 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      *(_QWORD *)(v15 + 24) = v14;
      WdLogEvent5_WdWarning(v15);
      v16 = (void *)*((_QWORD *)this + 185);
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
    }
    else
    {
      v17 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
      *(_QWORD *)(v17 + 24) = 4546LL;
      WdLogEvent5_WdWarning(v17);
    }
    return 0LL;
  }
  return result;
}
