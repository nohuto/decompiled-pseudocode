/*
 * XREFs of ?OnIdleStateChanged@XamlLauncher@@UEAAJH@Z @ 0x18014B420
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18014A8B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?ShouldStartOpenOnUnlock@XamlLauncher@@AEAA_NXZ @ 0x18014B308 (-ShouldStartOpenOnUnlock@XamlLauncher@@AEAA_NXZ.c)
 */

__int64 __fastcall XamlLauncher::OnIdleStateChanged(XamlLauncher *this, int a2)
{
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    *((_QWORD *)this + 25) = SystemTimeAsFileTime.dwLowDateTime
                           + ((unsigned __int64)SystemTimeAsFileTime.dwHighDateTime << 32);
  }
  else if ( XamlLauncher::ShouldStartOpenOnUnlock((XamlLauncher *)((char *)this - 32)) )
  {
    started = XamlLauncher::ShowStartView((__int64)this - 16, 0xEu, 0);
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1B4,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)started);
    *((_QWORD *)this + 25) = -1LL;
  }
  return 0LL;
}
