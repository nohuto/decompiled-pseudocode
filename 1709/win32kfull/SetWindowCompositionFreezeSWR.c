/*
 * XREFs of SetWindowCompositionFreezeSWR @ 0x1C0115E64
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C005E6F0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0057E7C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0057F80 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C0065464 (_GetWindowCompositionInfo.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 */

__int64 __fastcall SetWindowCompositionFreezeSWR(struct tagWND *a1, __int128 *a2)
{
  int v2; // ebp
  int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  void *v8; // rax
  _DWORD v10[14]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_DWORD *)a2;
  v5 = *(_DWORD *)a2 != 0;
  v6 = -1073741816;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v10) )
  {
    if ( -__CFSHR__(v10[0], 13) == v5 )
    {
      return 0;
    }
    else
    {
      v10[0] = v10[0] & 0xFFFFEFFF | (v5 << 12);
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v10) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v8 = (void *)ReferenceDwmApiPort(v7);
          v6 = DwmAsyncSetCompositionAttribute(v8, *(_QWORD *)a1, 20, a2);
        }
        else
        {
          v6 = 0;
        }
        if ( !v2 )
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 0x24u, *(_QWORD *)a1);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v6;
}
