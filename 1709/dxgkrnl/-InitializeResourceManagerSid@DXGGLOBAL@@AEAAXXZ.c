/*
 * XREFs of ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1C0119530
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0119AB0 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall DXGGLOBAL::InitializeResourceManagerSid(DXGGLOBAL *this)
{
  ULONG v2; // eax
  PVOID v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  void *v13; // rcx
  __int64 v14; // rax
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  v2 = RtlLengthRequiredSid(6u);
  v3 = operator new[](v2, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 195) = v3;
  if ( v3 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    v7 = RtlInitializeSid(v3, &IdentifierAuthority, 6u);
    v11 = v7;
    if ( v7 < 0 )
    {
      v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      *(_QWORD *)(v12 + 24) = v11;
      WdLogEvent5_WdWarning(v12);
      v13 = (void *)*((_QWORD *)this + 195);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      *((_QWORD *)this + 195) = 0LL;
    }
    else
    {
      *RtlSubAuthoritySid(*((PSID *)this + 195), 0) = 80;
      *RtlSubAuthoritySid(*((PSID *)this + 195), 1u) = 1988685059;
      *RtlSubAuthoritySid(*((PSID *)this + 195), 2u) = 1921232356;
      *RtlSubAuthoritySid(*((PSID *)this + 195), 3u) = 378231328;
      *RtlSubAuthoritySid(*((PSID *)this + 195), 4u) = -1590824699;
      *RtlSubAuthoritySid(*((PSID *)this + 195), 5u) = 890457928;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v14 + 24) = 5413LL;
    WdLogEvent5_WdWarning(v14);
  }
}
