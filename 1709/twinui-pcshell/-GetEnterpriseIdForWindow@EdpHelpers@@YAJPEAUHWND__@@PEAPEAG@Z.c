/*
 * XREFs of ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180081BF4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ce4d9e76eff745711a6ec5f96b849fef__&___ptr64_::Run @ 0x180081850 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ce4d9e76eff745711a6ec5f96b849fef__-___ptr64.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8a587c89195ec54d45ee4c9ce6ee342c__&___ptr64_::Run @ 0x1800840A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8a587c89195ec54d45ee4c9ce6ee342c__-___ptr64.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180062EF4 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x180081B3C (-make_cotaskmem_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall EdpHelpers::GetEnterpriseIdForWindow(EdpHelpers *this, _QWORD *a2, unsigned __int16 **a3)
{
  DWORD v6; // ebx
  WINBOOL v7; // eax
  HANDLE v8; // rax
  void *v9; // rbx
  BOOL v10; // eax
  int ContextForWindow; // r15d
  void *v12; // rdi
  HANDLE v13; // rax
  void *v14; // rbx
  int LastError; // esi
  const char *v16; // r9
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rsi
  DWORD v20; // ebx
  int ContextForBinaryPath; // eax
  _WORD *v22; // rdx
  WINBOOL pbDebuggerPresent; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+28h] [rbp-D8h] BYREF
  DWORD dwProcessId; // [rsp+30h] [rbp-D0h] BYREF
  void *v26; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE Parameter[8]; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h]
  HANDLE Timer; // [rsp+50h] [rbp-B0h]
  WCHAR ExeName[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a2 = 0LL;
  if ( !GetWindowThreadProcessId((HWND)this, &dwProcessId) )
    return 2147500037LL;
  v6 = dwProcessId;
  v7 = IsDebuggerPresent();
  pbDebuggerPresent = v7;
  if ( !v7 )
  {
    v8 = OpenProcess(0x1000u, 0, v6);
    v9 = v8;
    if ( v8 )
    {
      v10 = CheckRemoteDebuggerPresent(v8, &pbDebuggerPresent);
      v7 = v10 ? pbDebuggerPresent : 0;
      pbDebuggerPresent = v7;
      if ( v9 == (void *)-1LL )
        goto LABEL_8;
      CloseHandle(v9);
    }
    v7 = pbDebuggerPresent;
  }
LABEL_8:
  CRPCTimeout::CRPCTimeout(Parameter, v7 != 0 ? -1 : 5000);
  v24 = 0LL;
  ContextForWindow = EdpGetContextForWindow(this, &v24);
  if ( ContextForWindow == -2147024891 )
  {
    ContextForWindow = 0;
    v12 = 0LL;
    v13 = OpenProcess(0x1000u, 0, dwProcessId);
    v14 = v13;
    if ( !v13 )
    {
      LastError = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8D,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\EdpHelpers.h",
        (const char *)0x8007000ELL);
      goto LABEL_21;
    }
    pbDebuggerPresent = 260;
    if ( QueryFullProcessImageNameW(v13, 0, ExeName, (PDWORD)&pbDebuggerPresent) )
    {
      wil::make_cotaskmem_string_nothrow(&v26, ExeName, (unsigned int)pbDebuggerPresent);
      if ( !v26 )
      {
        LastError = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x94,
          (__int64)"internal\\onecoreuapshell\\private\\inc\\EdpHelpers.h",
          (const char *)0x8007000ELL);
        if ( v14 != (void *)-1LL )
          CloseHandle(v14);
        goto LABEL_21;
      }
      v12 = v26;
      if ( v14 != (void *)-1LL )
        CloseHandle(v14);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x91,
                    (__int64)"internal\\onecoreuapshell\\private\\inc\\EdpHelpers.h",
                    v16);
      if ( v14 != (void *)-1LL )
        CloseHandle(v14);
    }
    if ( LastError < 0 )
    {
LABEL_21:
      v17 = (unsigned int)LastError;
      v18 = 189LL;
      goto LABEL_26;
    }
    v19 = v24;
    if ( v24 )
    {
      v20 = GetLastError();
      EdpFreeContext(v19);
      SetLastError(v20);
    }
    v24 = 0LL;
    ContextForBinaryPath = EdpGetContextForBinaryPath(v12, &v24);
    LastError = ContextForBinaryPath;
    if ( ContextForBinaryPath < 0 )
    {
      v17 = (unsigned int)ContextForBinaryPath;
      v18 = 191LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v18,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\EdpHelpers.h",
        (const char *)v17);
      if ( v12 )
        CoTaskMemFree(v12);
      goto LABEL_37;
    }
    if ( !v12 )
    {
LABEL_32:
      v22 = *(_WORD **)(v24 + 8);
      if ( v22 )
      {
        wil::make_cotaskmem_string_nothrow(&v26, v22, -1LL);
        if ( !v26 )
        {
          LastError = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC9,
            (__int64)"internal\\onecoreuapshell\\private\\inc\\EdpHelpers.h",
            (const char *)0x8007000ELL);
          goto LABEL_37;
        }
        *a2 = v26;
      }
      LastError = 0;
      goto LABEL_37;
    }
    CoTaskMemFree(v12);
  }
  if ( ContextForWindow >= 0 )
    goto LABEL_32;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xC1,
    (__int64)"internal\\onecoreuapshell\\private\\inc\\EdpHelpers.h",
    (const char *)(unsigned int)ContextForWindow);
  LastError = ContextForWindow;
LABEL_37:
  if ( v24 )
    EdpFreeContext(v24);
  if ( v28 >= 0 )
  {
    v28 = -2147467259;
    CoDisableCallCancellation(0LL);
    if ( Timer )
      DeleteTimerQueueTimer(0LL, Timer, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
  }
  return (unsigned int)LastError;
}
