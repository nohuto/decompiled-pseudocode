/*
 * XREFs of SetWindowCompositionFreezeSWR @ 0x1C0004F60
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0038710 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     DwmAsyncSetCompositionAttribute @ 0x1C001EC48 (DwmAsyncSetCompositionAttribute.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C001FF9C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     _GetWindowCompositionInfo @ 0x1C0061E00 (_GetWindowCompositionInfo.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 */

__int64 __fastcall SetWindowCompositionFreezeSWR(struct tagWND *a1, int *a2)
{
  int v2; // ebp
  int v4; // edi
  unsigned int v5; // ebx
  void *v6; // rax
  _DWORD v8[14]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *a2;
  v4 = *a2 != 0;
  v5 = -1073741816;
  if ( (unsigned int)GetWindowCompositionInfo(a1, v8) )
  {
    if ( -__CFSHR__(v8[0], 13) == v4 )
    {
      return 0;
    }
    else
    {
      v8[0] = v8[0] & 0xFFFFEFFF | (v4 << 12);
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v8) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v6 = (void *)ReferenceDwmApiPort();
          v5 = DwmAsyncSetCompositionAttribute(v6);
        }
        else
        {
          v5 = 0;
        }
        if ( !v2 )
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 36LL, *(_QWORD *)a1);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v5;
}
