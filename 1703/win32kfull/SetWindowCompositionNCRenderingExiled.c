/*
 * XREFs of SetWindowCompositionNCRenderingExiled @ 0x1C0104380
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0038710 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     DwmAsyncSetCompositionAttribute @ 0x1C001EC48 (DwmAsyncSetCompositionAttribute.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C001FF9C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     _GetWindowCompositionInfo @ 0x1C0061E00 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionNCRenderingExiled(struct tagWND *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rax
  _DWORD v12[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741816;
  v5 = *(_DWORD *)a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v12) )
  {
    if ( -(v12[0] & 1) == v5 )
      return 0;
    v12[0] = v5 | v12[0] & 0xFFFFFFFE;
    if ( !(unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v12) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v11 = (void *)ReferenceDwmApiPort(v8, v7, v9, v10);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v11, *(_QWORD *)a1, 11, a2);
    }
  }
  return v4;
}
