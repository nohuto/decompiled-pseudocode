/*
 * XREFs of ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x1801EDD20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x1801983B8 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 */

__int64 __fastcall WindowManagerBridge::WaitForWindowManagerConnection(WindowManagerBridge *this)
{
  const char *v2; // r9
  __int64 result; // rax
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    if ( wil::handle_wait(*((wil **)this + 33), (void *)0x7530) )
    {
      v4 = *((_DWORD *)this + 72);
      if ( v4 >= 0 )
      {
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x63,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v4);
        result = (unsigned int)v4;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)0x8000000ALL);
      result = 2147483658LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x67,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v2);
  }
  return result;
}
