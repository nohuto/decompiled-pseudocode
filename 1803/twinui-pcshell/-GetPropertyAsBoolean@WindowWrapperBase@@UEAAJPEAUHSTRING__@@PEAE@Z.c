/*
 * XREFs of ?GetPropertyAsBoolean@WindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x1801F2370
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::GetPropertyAsBoolean(WindowWrapperBase *this, HSTRING a2, bool *a3)
{
  const WCHAR *StringRawBuffer; // rax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    *a3 = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"BackVisible", -1, 1) != 2 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        651LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80004001LL);
    if ( *((_DWORD *)this + 30) != 3 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        652LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80004001LL);
    *a3 = *((_DWORD *)this + 42) == 0;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x292,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
