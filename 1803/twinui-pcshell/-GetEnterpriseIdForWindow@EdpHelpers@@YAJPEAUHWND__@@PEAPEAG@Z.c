/*
 * XREFs of ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18013FB58
 * Callers:
 *     _lambda_8eff1308be2899feafc2459a76dc307b_::operator() @ 0x18008828C (_lambda_8eff1308be2899feafc2459a76dc307b_--operator().c)
 *     _lambda_edd19650adc2bed30a6707bf286b378d_::operator() @ 0x18013EA18 (_lambda_edd19650adc2bed30a6707bf286b378d_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800F61B8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18011D054 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x18012C9F4 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x18012DBB0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ?GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z @ 0x180140218 (-GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z.c)
 *     ?IsLocalOrRemoteDebuggerPresent@EdpHelpers@@YA_NK@Z @ 0x180140668 (-IsLocalOrRemoteDebuggerPresent@EdpHelpers@@YA_NK@Z.c)
 */

__int64 __fastcall EdpHelpers::GetEnterpriseIdForWindow(EdpHelpers *this, LPVOID *a2, unsigned __int16 **a3)
{
  unsigned int v5; // edx
  bool IsLocalOrRemoteDebuggerPresent; // al
  int ContextForWindow; // esi
  unsigned __int16 **v9; // r8
  int ProcessImageName; // eax
  void *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r14
  DWORD LastError; // edi
  __int64 v16; // r9
  char *v17; // rdx
  _BYTE v18[32]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  DWORD dwProcessId; // [rsp+78h] [rbp+38h] BYREF
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+48h] BYREF

  *a2 = 0LL;
  if ( !GetWindowThreadProcessId((HWND)this, &dwProcessId) )
    return 2147500037LL;
  IsLocalOrRemoteDebuggerPresent = EdpHelpers::IsLocalOrRemoteDebuggerPresent(dwProcessId, v5);
  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v18, IsLocalOrRemoteDebuggerPresent ? -1 : 5000);
  v21 = 0LL;
  ContextForWindow = EdpGetContextForWindow(this, &v21);
  if ( ContextForWindow == -2147024891 )
  {
    ContextForWindow = 0;
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    ProcessImageName = EdpHelpers::GetProcessImageName(dwProcessId, (unsigned int)&pv, v9);
    v11 = pv;
    v12 = ProcessImageName;
    if ( ProcessImageName < 0 )
    {
      v13 = 189LL;
LABEL_10:
      v16 = (unsigned int)ProcessImageName;
      goto LABEL_19;
    }
    v14 = v21;
    if ( v21 )
    {
      LastError = GetLastError();
      EdpFreeContext(v14);
      SetLastError(LastError);
    }
    v21 = 0LL;
    ProcessImageName = EdpGetContextForBinaryPath(v11, &v21);
    v12 = ProcessImageName;
    if ( ProcessImageName < 0 )
    {
      v13 = 191LL;
      goto LABEL_10;
    }
    if ( !v11 )
      goto LABEL_15;
    CoTaskMemFree(v11);
  }
  if ( ContextForWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\EdpHelpers.h",
      (const char *)(unsigned int)ContextForWindow);
    v12 = ContextForWindow;
    goto LABEL_23;
  }
LABEL_15:
  v17 = *(char **)(v21 + 8);
  if ( v17 )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      v17,
      0xFFFFFFFFFFFFFFFFuLL);
    v11 = pv;
    if ( pv )
    {
      v11 = 0LL;
      v12 = 0;
      *a2 = pv;
LABEL_21:
      if ( v11 )
        CoTaskMemFree(v11);
      goto LABEL_23;
    }
    v12 = -2147024882;
    v13 = 201LL;
    v16 = 2147942414LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\EdpHelpers.h",
      (const char *)v16);
    goto LABEL_21;
  }
  v12 = 0;
LABEL_23:
  if ( v21 )
    EdpFreeContext(v21);
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v18);
  return v12;
}
