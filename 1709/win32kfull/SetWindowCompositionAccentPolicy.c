/*
 * XREFs of SetWindowCompositionAccentPolicy @ 0x1C0114CB0
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C005E6F0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0057E7C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0057F80 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C0065464 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionAccentPolicy(struct tagWND *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  void *v6; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h]

  v4 = -1073741816;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v8) )
  {
    if ( (_QWORD)v9 == *(_QWORD *)a2 && DWORD2(v9) == *((_DWORD *)a2 + 2) )
      return 0;
    v9 = *a2;
    if ( !(unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v8) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v6 = (void *)ReferenceDwmApiPort(v5);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v6, *(_QWORD *)a1, 19, a2);
    }
  }
  return v4;
}
