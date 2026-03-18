/*
 * XREFs of ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1C019F7C4
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C019ECB4 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
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
  __int64 v13; // rax
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  v2 = RtlLengthRequiredSid(6u);
  v3 = operator new[](v2, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 211) = v3;
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
      operator delete[](*((void **)this + 211));
      *((_QWORD *)this + 211) = 0LL;
    }
    else
    {
      *RtlSubAuthoritySid(*((PSID *)this + 211), 0) = 80;
      *RtlSubAuthoritySid(*((PSID *)this + 211), 1u) = 1988685059;
      *RtlSubAuthoritySid(*((PSID *)this + 211), 2u) = 1921232356;
      *RtlSubAuthoritySid(*((PSID *)this + 211), 3u) = 378231328;
      *RtlSubAuthoritySid(*((PSID *)this + 211), 4u) = -1590824699;
      *RtlSubAuthoritySid(*((PSID *)this + 211), 5u) = 890457928;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v13 + 24) = 5897LL;
    WdLogEvent5_WdWarning(v13);
  }
}
