/*
 * XREFs of ?Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x18014C740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x18014D460 (-ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::Show(XamlLauncher *this, HSTRING a2)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  if ( !XamlLauncher::ShouldLaunchCortanaOnPPI(this, a2) )
  {
    ShellExecuteW(0LL, L"open", L"https://www.bing.com/", 0LL, 0LL, 1);
    return 0LL;
  }
  if ( !*((_QWORD *)this + 25) )
    return 2147943568LL;
  v11 = 0LL;
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 25))(
         *((_QWORD *)this + 25),
         &GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce,
         &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v11 + 32LL))(v11, a2);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v9 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      return 0LL;
    }
    v7 = 741LL;
  }
  else
  {
    v7 = 740LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v5);
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
