/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_26b87ca59359fe239e5114e68fb2ebc3___::Run @ 0x18001C430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_26b87ca59359fe239e5114e68fb2ebc3___::Run(
        __int64 a1)
{
  __int64 v2; // rsi
  struct IShellUserAssist *v3; // rbx
  signed __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF
  struct IShellUserAssist *v8; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 16);
  v8 = 0LL;
  v3 = UserAssistImpl::g_cachedUserAssist;
  if ( !UserAssistImpl::g_cachedUserAssist )
  {
    if ( CoCreateInstance(
           &GUID_dd313e04_feff_11d1_8ecd_0000f87a470c,
           0LL,
           0x403u,
           &GUID_49b36d57_5fd2_45a7_981b_06028d577a47,
           (LPVOID *)&v7) < 0 )
    {
      v4 = -1LL;
      v7 = -1LL;
    }
    else
    {
      SHPinDllOfCLSID(&GUID_dd313e04_feff_11d1_8ecd_0000f87a470c);
      v4 = v7;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&UserAssistImpl::g_cachedUserAssist, v4, 0LL)
      && v7 != -1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v3 = UserAssistImpl::g_cachedUserAssist;
  }
  if ( v3 == (struct IShellUserAssist *)-1LL )
    v3 = 0LL;
  if ( v3 )
  {
    (*(void (__fastcall **)(struct IShellUserAssist *))(*(_QWORD *)v3 + 8LL))(v3);
    (*(void (__fastcall **)(struct IShellUserAssist *))(*(_QWORD *)v3 + 8LL))(v3);
    v8 = v3;
    (*(void (__fastcall **)(struct IShellUserAssist *))(*(_QWORD *)v3 + 16LL))(v3);
    v5 = (*(__int64 (__fastcall **)(struct IShellUserAssist *, GUID *, _QWORD, __int64, _DWORD))(*(_QWORD *)v3 + 24LL))(
           v3,
           &GUID_cebff5cd_ace2_4f4f_9178_9926f41749ea,
           0LL,
           v2,
           0);
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\uem.h",
        (const char *)(unsigned int)v5);
    (*(void (__fastcall **)(struct IShellUserAssist *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\uem.h",
      (const char *)0x80004005LL);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x89,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\uem.h",
      (const char *)0x80004005LL);
  }
  CoTaskMemFree(*(LPVOID *)(a1 + 16));
}
