/*
 * XREFs of ?GuidBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x180069B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180068D2C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Services::TargetedContent::Internal::GuidBiPredicateCreator(HSTRING a1, void **a2, _DWORD *a3)
{
  const OLECHAR *StringRawBuffer; // rax
  HRESULT v6; // eax
  GUID *v7; // rax
  __int64 v8; // r8
  const char *v9; // r9
  GUID *v10; // rbx
  wil::details::in1diag3 *v11; // rcx
  void *v12; // rsi
  DWORD LastError; // edi
  GUID pclsid; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a3 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  v6 = CLSIDFromString(StringRawBuffer, &pclsid);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x10E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_7;
  }
  v7 = (GUID *)CoTaskMemAlloc(0x10uLL);
  v10 = v7;
  v11 = retaddr;
  if ( !v7 )
  {
LABEL_7:
    wil::details::in1diag3::_Throw_NullAlloc(v11, (void *)0x110, v8, v9);
    JUMPOUT(0x180069C5ALL);
  }
  *v7 = pclsid;
  *a3 = 16;
  v12 = *a2;
  if ( *a2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v12);
    SetLastError(LastError);
  }
  *a2 = v10;
}
