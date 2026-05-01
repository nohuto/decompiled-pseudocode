/*
 * XREFs of ?Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x180181670
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x1801822D0 (-ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::Toggle(XamlLauncher *this, HSTRING a2)
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
  if ( !*((_QWORD *)this + 23) )
    return 2147943568LL;
  v11 = 0LL;
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 23))(
         *((_QWORD *)this + 23),
         &GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce,
         &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v11 + 48LL))(v11, a2);
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
    v7 = 650LL;
  }
  else
  {
    v7 = 649LL;
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
